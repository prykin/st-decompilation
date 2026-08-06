#include "../../pseudocode_runtime.h"


undefined4 FUN_0074bf23(int param_1,ushort *param_2,undefined4 *param_3)

{
  int local_EAX_29;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar4 = 0;
  if (param_3 == nullptr) {
    uVar4 = 0x80004003;
  }
  else {
    local_EAX_29 = FUN_0074d5d3(param_2,(ushort *)&DAT_007ee298);
    if (local_EAX_29 == 0) {
      uVar5 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(param_1 + -0xc);
    }
    else {
      iVar1 = FUN_0074d5d3(param_2,(ushort *)&DAT_007a1738);
      if (iVar1 != 0) {
        *param_3 = 0;
        return 0x80040216;
      }
      uVar5 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(param_1 + -0xc);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(iVar2 + 0x1c))(uVar5);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0xcU);
    *param_3 = piVar3;
    if (piVar3 == nullptr) {
      uVar4 = 0x8007000e;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  return uVar4;
}

