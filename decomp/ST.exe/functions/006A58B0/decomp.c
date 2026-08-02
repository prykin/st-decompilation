#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_006a58b0(undefined4 *param_1,AnonShape_006A58B0_8049417A *param_2,
            AnonShape_006A58B0_CDE73679 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  uVar2 = 0;
  if (((param_1 != nullptr) && (param_2 != nullptr)) &&
     (param_3 != nullptr)) {
    iVar3 = 0;
    do {
      param_1[iVar3 + 6] = param_3->entries[iVar3] - param_2->entries[iVar3];
      iVar4 = param_3->entries[iVar3] - param_2->entries[iVar3];
      param_1[iVar3 + 1] = iVar4;
      if (((param_1[iVar3 + 6] != 0) || (iVar4 != 0)) &&
         ((iVar3 != 0 && ((iVar3 != 2 || ((DAT_007ec178 & 0x10) != 0)))))) {
        uVar2 = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    param_1[0xb] = param_3->field_002C - param_2->field_002C;
    iVar3 = param_3->field_0030;
    iVar4 = param_2->field_0030;
    *param_1 = 0;
    param_1[0xc] = iVar3 - iVar4;
    return uVar2;
  }
  iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
  if (iVar3 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

