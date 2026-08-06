#include "../../pseudocode_runtime.h"


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1C18+0x10

   [STVTableApplier] Virtual slot 007A1CC8+0x10

   [STPrototypeApplier] Propagated return.
   Evidence: 0074E70A returns return of FUN_0074e337 @ 0074E728
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void FUN_0074e70a(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000004;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000008;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_stack_0000000c;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000010;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  FUN_0074e337((int *)(in_stack_00000004 + 0x10),&DAT_007a1210,in_stack_00000008,in_stack_0000000c,
               in_stack_00000010);
  return;
}

