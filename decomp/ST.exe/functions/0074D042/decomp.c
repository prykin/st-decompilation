#include "../../pseudocode_runtime.h"


int __thiscall FUN_0074d042(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_CALLSITE[0074D051]: CALL dword ptr [EAX + 0x28] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*STField<int *>(this,0xa8) + 0x28))(param_1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(*(int *)(STField<int>(this,0xa8) + 0x8c) + 0x18);
    if (piVar1 == nullptr) {
      iVar2 = 0;
    }
    else {
      /* ST_CALLSITE[0074D072]: CALL dword ptr [ECX + 0x2c] */
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,unaff_retaddr);
    }
  }
  return iVar2;
}

