#include "../../pseudocode_runtime.h"


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1108+0x4

   [STPrototypeApplier] Propagated return.
   Evidence: 0074766E returns return of KERNEL32.DLL::InterlockedIncrement @ 0074767C
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void FUN_0074766e(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000004;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  InterlockedIncrement((LONG *)(in_stack_00000004 + 0x14));
  return;
}

