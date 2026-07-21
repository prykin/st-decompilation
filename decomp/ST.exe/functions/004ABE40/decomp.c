#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurFase

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00643E20 -> 004ABE40 @ 00644070 | 00643E20 -> 004ABE40 @ 006440B4 | 00643E20 ->
   004ABE40 @ 00644202 | 00643E20 -> 004ABE40 @ 00644246 */

undefined4 __thiscall STT3DSprC::SetCurFase(STT3DSprC *this,char param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
      iVar4 = param_1 * 0x24;
      piVar6 = (int *)(this->field_0020 + iVar4);
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar6[6];
        if ((-1 < iVar2) && (iVar2 < *piVar1)) {
          *(undefined4 *)(piVar6[1] + iVar2 * 4) = *(undefined4 *)((int)piVar1 + iVar2 * 4 + 0x31);
        }
        *(uint *)(iVar4 + 0x18 + this->field_0020) = param_2;
        return 0;
      }
    }
  }
  return 0xffffffff;
}

