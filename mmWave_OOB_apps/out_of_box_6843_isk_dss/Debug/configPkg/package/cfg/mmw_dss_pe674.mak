#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.elf.C674{1,0,8.3,12
#
ifeq (,$(MK_NOGENDEPS))
-include package/cfg/mmw_dss_pe674.oe674.dep
package/cfg/mmw_dss_pe674.oe674.dep: ;
endif

package/cfg/mmw_dss_pe674.oe674: | .interfaces
package/cfg/mmw_dss_pe674.oe674: package/cfg/mmw_dss_pe674.c package/cfg/mmw_dss_pe674.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle674 $< ...
	$(ti.targets.elf.C674.rootDir)/bin/cl6x -c  --enum_type=int  -qq -pdsw225 -mo -mv6740 --abi=eabi -eo.oe674 -ea.se674   -Dxdc_cfg__xheader__='"configPkg/package/cfg/mmw_dss_pe674.h"'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_8_3_12 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg -fc $<
	$(MKDEP) -a $@.dep -p package/cfg -s oe674 $< -C   --enum_type=int  -qq -pdsw225 -mo -mv6740 --abi=eabi -eo.oe674 -ea.se674   -Dxdc_cfg__xheader__='"configPkg/package/cfg/mmw_dss_pe674.h"'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_8_3_12 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/mmw_dss_pe674.oe674: export C_DIR=
package/cfg/mmw_dss_pe674.oe674: PATH:=$(ti.targets.elf.C674.rootDir)/bin/;$(PATH)
package/cfg/mmw_dss_pe674.oe674: Path:=$(ti.targets.elf.C674.rootDir)/bin/;$(PATH)

package/cfg/mmw_dss_pe674.se674: | .interfaces
package/cfg/mmw_dss_pe674.se674: package/cfg/mmw_dss_pe674.c package/cfg/mmw_dss_pe674.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle674 -n $< ...
	$(ti.targets.elf.C674.rootDir)/bin/cl6x -c -n -s --symdebug:none --enum_type=int  -qq -pdsw225 -mv6740 --abi=eabi -eo.oe674 -ea.se674   -Dxdc_cfg__xheader__='"configPkg/package/cfg/mmw_dss_pe674.h"'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_8_3_12 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg -fc $<
	$(MKDEP) -a $@.dep -p package/cfg -s oe674 $< -C  -n -s --symdebug:none --enum_type=int  -qq -pdsw225 -mv6740 --abi=eabi -eo.oe674 -ea.se674   -Dxdc_cfg__xheader__='"configPkg/package/cfg/mmw_dss_pe674.h"'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_8_3_12 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/mmw_dss_pe674.se674: export C_DIR=
package/cfg/mmw_dss_pe674.se674: PATH:=$(ti.targets.elf.C674.rootDir)/bin/;$(PATH)
package/cfg/mmw_dss_pe674.se674: Path:=$(ti.targets.elf.C674.rootDir)/bin/;$(PATH)

clean,e674 ::
	-$(RM) package/cfg/mmw_dss_pe674.oe674
	-$(RM) package/cfg/mmw_dss_pe674.se674

mmw_dss.pe674: package/cfg/mmw_dss_pe674.oe674 package/cfg/mmw_dss_pe674.mak

clean::
	-$(RM) package/cfg/mmw_dss_pe674.mak