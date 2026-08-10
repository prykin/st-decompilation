#include "../../pseudocode_runtime.h"


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void FUN_0074ba2d(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_ECX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *in_stack_00000004;

  *(undefined4 *)(in_ECX + 0x10) = *in_stack_00000004;
  *(undefined4 *)(in_ECX + 0x14) = in_stack_00000004[1];
  *(undefined4 *)(in_ECX + 0x18) = in_stack_00000004[2];
  *(undefined4 *)(in_ECX + 0x1c) = in_stack_00000004[3];
  return;
}

