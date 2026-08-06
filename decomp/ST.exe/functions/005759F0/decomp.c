#include "../../pseudocode_runtime.h"


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007A4118>005759D0

   [STPrototypeApplier] Propagated return.
   Evidence: 005759F0 returns return of STAppC::STAppC @ 005759FF
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void FUN_005759f0(void)

{
  STAppC::STAppC((STAppC *)&DAT_00807620,g_objectFactoryRegistry);
  return;
}

