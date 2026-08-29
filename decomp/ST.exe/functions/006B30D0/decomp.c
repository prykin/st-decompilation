#include "../../pseudocode_runtime.h"


undefined4 FUN_006b30d0(RecoveredRecord_006B30D0_CB79E1A3 *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uVar3 = 0xffffffff;
  if (((param_2 < param_1->field_01A0) &&
      (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x4008000) == 0x4008000))
     && (uVar2 = *(uint *)(puVar1[0x34] + param_3 * 4), -1 < (int)uVar2)) {

    uVar3 = Library::DKW::DDX::FUN_006b3040((int)param_1,uVar2);
  }
  return uVar3;
}

