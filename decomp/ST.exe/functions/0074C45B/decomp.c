#include "../../pseudocode_runtime.h"


int __thiscall FUN_0074c45b(void *this,undefined4 param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x28))(param_1);
  if (iVar1 == 0) {
    iVar1 = (STField<int *>(this,0xd8))[0x24];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
      iVar1 = 0;
    }
    else {
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x2c))(unaff_retaddr,iVar1 + 0x1c);
    }
  }
  return iVar1;
}

