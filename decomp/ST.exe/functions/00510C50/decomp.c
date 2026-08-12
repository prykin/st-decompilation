#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA914>004014D3

   [STObjectFactoryApplier] Central object factory for 0x0156 (ST_OBJECT_HELP_PANEL).
   Evidence: registry[62] at 007CA910 stores type 0x0156 and executable pointer 004014D3; allocation
   size 596 uniquely matches /HelpPanelTy */

HelpPanelTy * __cdecl CreateHelpPanel(void)

{
  HelpPanelTy *pHVar1;

  pHVar1 = (HelpPanelTy *)FUN_006b04d0(0x254);
  if (pHVar1 != nullptr) {
    pHVar1 = HelpPanelTy::HelpPanelTy(pHVar1);
    return pHVar1;
  }
  return nullptr;
}

