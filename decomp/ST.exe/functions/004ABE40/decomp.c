#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurFase

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00643E20 -> 004ABE40 @ 00644070 | 00643E20 -> 004ABE40 @ 006440B4 | 00643E20 ->
   004ABE40 @ 00644202 | 00643E20 -> 004ABE40 @ 00644246
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0041F3B0 @ 0041F45F -> killed on
   every CFG path | 0041F3B0 @ 0041F50C -> killed on every CFG path | 0041F3B0 @ 0041F53A -> killed
   on every CFG path | 0041F3B0 @ 0041F592 -> killed on every CFG path | 0044EE30 @ 0044FFCB ->
   killed on every CFG path | 0044EE30 @ 00450047 -> killed on every CFG path | 0044EE30 @ 00450054
   -> killed on every CFG path | 0044EE30 @ 004500F4 -> killed on every CFG path | 00480600 @
   00480750 -> killed on every CFG path | 00480600 @ 00480762 -> killed on every CFG path | 00480600
   @ 00480858 -> killed on every CFG path | 00480600 @ 0048086A -> killed on every CFG path |
   00480600 @ 00480F73 -> killed on every CFG path | 00480600 @ 00480F7D -> killed on every CFG path
   | 004B9FA0 @ 004BA587 -> killed on every CFG path | 004B9FA0 @ 004BA591 -> killed on every CFG
   path | 004C6210 @ 004C6357 -> killed on every CFG path | 004C6440 @ 004C6678 -> killed on every
   CFG path | 004C6440 @ 004C676F -> killed on every CFG path | 004C9770 @ 004C9CCB -> killed on
   every CFG path | 004C9770 @ 004C9DDE -> killed on every CFG path | 004C9770 @ 004C9F20 -> killed
   on every CFG path | 004C9770 @ 004CA088 -> killed on every CFG path | 004CA3C0 @ 004CA4F0 ->
   killed on every CFG path */

int __thiscall STT3DSprC::SetCurFase(STT3DSprC *this,char param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar5;
  int iVar4;
  int *piVar6;

  if (this->field_0018 != 0xffffffff) {
    if ((param_1 < '\0') || (this->field_0014 + -1 < (int)param_1)) {

      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x93,0,0,"%s",
                                 "STT3DSprC::SetCurFase wrong level");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else {
      iVar5 = param_1 * 0x24;
      piVar6 = (int *)(&this->field_0020->field_0x0 + iVar5);
      piVar1 = (int *)*piVar6;
      if (piVar1 != nullptr) {
        iVar2 = piVar6[6];
        if ((-1 < iVar2) && (iVar2 < *piVar1)) {
          *(undefined4 *)(piVar6[1] + iVar2 * 4) = *(undefined4 *)((int)piVar1 + iVar2 * 4 + 0x31);
        }
        *(uint *)(&this->field_0020->field_0x18 + iVar5) = param_2;
        return 0;
      }
    }
  }
  return -1;
}

