#include "../../pseudocode_runtime.h"


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1C60+0x2C

   [STVTableApplier] Virtual slot 007A1D10+0x2C

   [STPrototypeApplier] Propagated return.
   Evidence: 0074EB99 returns return of FUN_0074eb3c @ 0074EBAB
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void FUN_0074eb99(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *in_stack_00000004;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_stack_00000008;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  FUN_0074eb3c(in_stack_00000004,&LAB_00750553,in_stack_00000008);
  return;
}

