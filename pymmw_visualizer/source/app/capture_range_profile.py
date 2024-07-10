#
# Copyright (c) 2019, Manfred Constapel
# This file is licensed under the terms of the MIT license.
#

#
# range and noise profile - capture
#

import os
import sys
import time

try:

    __base__ = os.path.dirname(os.path.abspath(__file__))
    while 'lib' not in [d for d in os.listdir(__base__) if os.path.isdir(os.path.join(__base__, d))]: __base__ = os.path.join(__base__, '..')
    if __base__ not in sys.path: sys.path.append(__base__)
    
    from lib.capture import *

except ImportError as e:
    print(e, file=sys.stderr, flush=True)
    sys.exit(3)

# ------------------------------------------------

def update(data):

    if 'range_profile' not in data: return

    r = data['range_profile']

    if 'noise_profile' in data:
        n = data['noise_profile']
    else:
        n = [0] * len(r)

    if len(r) == len(n):

        bin = range_max / len(r)
        x = [i*bin for i in range(len(r))]
        x = [v - range_bias for v in x]

        o = None
        if 'detected_points' in data:
            o = [0] * len(x)
            for p in data['detected_points']:
                ri, _ = (int(v) for v in p.split(','))
                if ri < len(o):
                    o[ri] += 1
 
        if 'header' in data:
            
            if 'time' not in data['header']: return
            if 'number' not in data['header']: return

            clk, cnt = data['header']['time'], data['header']['number']
 
            if o is None: o = [0] * len(x)
            
            for i in range(1, len(x)):
                s = '{} {:.3f} {:.3f} {:.3f} {}'.format(i, x[i], r[i], n[i], o[i])
                if i == 1: s += ' {} {} {:.3f}'.format(cnt, clk, time.time())
                fh.write(s + '\n')
                fh.flush()

        os.fsync(fh.fileno())

# ------------------------------------------------  

if __name__ == "__main__":

    if len(sys.argv[1:]) != 2:
        print('Usage: {} {}'.format(sys.argv[0].split(os.sep)[-1], '<range_maximum> <range_bias>'))
        sys.exit(1)
    
    fh, fp = None, 'log'

    try:

        range_max = float(sys.argv[1])
        range_bias = float(sys.argv[2])
 
        this_name = os.path.basename(sys.argv[0])
        this_name = this_name[len('capture '):-len('.py')]
                 
        if not os.path.exists(fp): os.makedirs(fp)
        utc = time.strftime('%Y%m%e-%H%M%S', time.gmtime())
        fh = open('{}/{}_{}.log'.format(fp, this_name, utc), 'w')        

        start_capture(update)
        
    except Exception as e:
        print(e, file=sys.stderr, flush=True)
        sys.exit(2)
