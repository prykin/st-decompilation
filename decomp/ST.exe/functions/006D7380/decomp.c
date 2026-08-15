#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006d7380(void *this,int param_1)

{
  int *piVar1;
  int iVar3;
  int iVar2;
  undefined4 uVar4;

  uVar4 = 0;
  piVar1 = STField<int *>(this,0x40);
  if (piVar1 == nullptr) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar3 = STField<int>(this,0x8c);
    if (*(int *)(iVar3 + 0x18) != 0) {
      if (iVar3 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,iVar3 + 0xc);
        return uVar4;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,0);
      return uVar4;
    }
  }
  else if (*(int *)(STField<int>(this,0x90) + 0x18) != 0) {
    iVar2 = FUN_0074b9f5((void *)(STField<int>(this,0x8c) + 0x1c),
                         (char *)(STField<int>(this,0x90) + 0x1c));
    if (iVar2 != 0) {
      if (STField<int>(this,0x90) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        uVar4 = (**(code **)(*STField<int *>(this,0x40) + 0x20))
                          (STField<int *>(this,0x40),STField<int>(this,0x90) + 0xc);
        return uVar4;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (**(code **)(*STField<int *>(this,0x40) + 0x20))(STField<int *>(this,0x40),0);
    }
  }
  return uVar4;
}

