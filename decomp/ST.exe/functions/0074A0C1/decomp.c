#include "../../pseudocode_runtime.h"


undefined4 FUN_0074a0c1(int param_1,ushort *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = FUN_0074d5d3(param_2,(ushort *)&DAT_007ee298);
    if (iVar2 == 0) {
      /* ST_CALLSITE[0074A0EF]: CALL dword ptr [EAX + 0x1c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(0);
      piVar4 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 0xcU);
      *param_3 = piVar4;
      /* ST_CALLSITE[0074A100]: CALL dword ptr [ECX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar4 + 4))(piVar4);
      uVar1 = 0;
    }
    else {
      *param_3 = 0;
      uVar1 = 0x80040216;
    }
  }
  return uVar1;
}

