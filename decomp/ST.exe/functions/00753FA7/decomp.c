#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_00753fa7(void)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0x24);
  *(int *)(unaff_EBP + 0x3c) = *(int *)(unaff_EBP + 0x3c) + iVar1;
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + 0x14);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(unaff_EBP + 0xc))(iVar1);
  }
  return;
}

