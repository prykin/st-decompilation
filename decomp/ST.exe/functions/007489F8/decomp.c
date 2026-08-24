#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_007489f8(void *this,undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int **ppiVar7;
  int *apiStack_38 [2];
  int iStack_30;
  undefined4 *apuStack_2c [4];
  byte *puStack_1c;
  int **ppiStack_18;
  int *local_8;

  apiStack_38[1] = STField<int *>(this,0x74);
  local_8 = this;
  if (apiStack_38[1] == nullptr) {
    apuStack_2c[3] = STField<undefined4 *>(this,0x18);
    uVar2 = 0x80040216;
    if (apuStack_2c[3] != nullptr) {
      ppiStack_18 = &local_8;
      puStack_1c = &DAT_007a1b40;
      apuStack_2c[2] = (undefined4 *)0x748a46;
      /* ST_CALLSITE[00748A44]: CALL dword ptr [ECX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*apuStack_2c[3])();
      piVar1 = local_8;
      if (local_8 != nullptr) {
        if (STField<int>(this,0x70) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = STField<int>(this,0x70) + 0xc;
        }
        iVar4 = *local_8;
        ppiVar7 = apiStack_38;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppiVar7 = (int *)*param_1;
          param_1 = param_1 + 1;
          ppiVar7 = ppiVar7 + 1;
        }
        /* ST_CALLSITE[00748A6C]: CALL dword ptr [EBX + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        uVar2 = (**(code **)(iVar4 + 0xc))(piVar1,iVar3);
        /* ST_CALLSITE[00748A77]: CALL dword ptr [ECX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_8 + 8))(local_8);
      }
    }
  }
  else {
    if (STField<int>(this,0x70) == 0) {
      iStack_30 = 0;
    }
    else {
      iStack_30 = STField<int>(this,0x70) + 0xc;
    }
    iVar3 = *apiStack_38[1];
    ppuVar6 = apuStack_2c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppuVar6 = (undefined4 *)*param_1;
      param_1 = param_1 + 1;
      ppuVar6 = ppuVar6 + 1;
    }
    apiStack_38[0] = (int *)0x748a2a;
    /* ST_CALLSITE[00748A27]: CALL dword ptr [EBX + 0xc] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(iVar3 + 0xc))();
  }
  return uVar2;
}

