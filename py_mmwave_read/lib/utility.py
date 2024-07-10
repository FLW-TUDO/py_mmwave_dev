# import the required Python packages
import struct
import math
import binascii
import codecs
import numpy as np

#Utility function for data conversion

def getUint32(data):
    """!
       This function coverts 4 bytes to a 32-bit unsigned integer.

        @param data : 1-demension byte array  
        @return     : 32-bit unsigned integer
    """ 
    return (data[0] +
            data[1]*256 +
            data[2]*65536 +
            data[3]*16777216)

def getUint16(data):
    """!
       This function coverts 2 bytes to a 16-bit unsigned integer.

        @param data : 1-demension byte array
        @return     : 16-bit unsigned integer
    """ 
    return (data[0] +
            data[1]*256)

#new
def getint16_Q7_9(data):
    """!
       This function converts Range profile of 2 bytes to a 16-bit signed integer in form of Q7.9.

        @param data : 1-demension byte array
        @return     : 16-bit signed integer in form of Q7.9
    """
    temp = data[1]
    if(data[1] > 127): # Check if MSBit is 1, if so, we have received negative number.
        temp = data[1] - 256
    return (data[0] +
            temp*256)

def getHex(data):
    """!
       This function coverts 4 bytes to a 32-bit unsigned integer in hex.

        @param data : 1-demension byte array
        @return     : 32-bit unsigned integer in hex
    """         
    #return (binascii.hexlify(data[::-1]))
    word = [1, 2**8, 2**16, 2**24]
    return np.matmul(data,word)

def checkMagicPattern(data):
    """!
       This function check if data arrary contains the magic pattern which is the start of one mmw demo output packet.  

        @param data : 1-demension byte array
        @return     : 1 if magic pattern is found
                      0 if magic pattern is not found 
    """ 
    found = 0
    if (data[0] == 2 and data[1] == 1 and data[2] == 4 and data[3] == 3 and data[4] == 6 and data[5] == 5 and data[6] == 8 and data[7] == 7):
        found = 1
    return (found)

def intify(value, base=16, size=2):
    if type(value) not in (list, tuple, bytes,):
        value = (value,)
    if (type(value) in (bytes,) and base == 16) or (type(value) in (list, tuple,)):
        return sum([item*((base**size)**i) for i, item in enumerate(value)])
    else:
        return sum([((item // 16)*base+(item % 16))*((base**size)**i) for i, item in enumerate(value)])

def hex2dec(value):
    """ 'ff' -> 255 ; 'af fe' -> (175, 254) ; ('af', 'fe) -> (175, 254) """
    if type(value) == str:
        value = value.strip()
        if ' ' not in value:
            return int(value, 16)
        else:
            return hex2dec(value.split(' '))
    else:
        return tuple(int(item, 16) for item in value)


def dec2hex(value, delim=''):
    """ 12648430 -> 'c0ffee' ; (255, 255) -> 'ffff' ; (256 * 256 - 1, 10) -> 'ffff0a' """
    if type(value) == int:
        s = hex(value)
        return '0' * (len(s) % 2) + s[2:]     
    else:       
        return delim.join(dec2hex(item, delim) for item in value) 


def dec2bit(value, bits=8):
    """ bits=8: 42 -> (False, True, False, True, False, True, False, False) """
    v = value % 2**bits
    seq = tuple(True if c == '1' else False for c in bin(v)[2:].zfill(bits)[::-1])
    if value - v > 0: seq = seq + dec2bit(value // 2**bits)
    return seq

def split(value, size=2):
    return tuple(value[0 + i:size + i] for i in range(0, len(value), size))