
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA914>004014D3

   [STObjectFactoryApplier] Central object factory for 0x0156 (ST_OBJECT_HELP_PANEL).
   Evidence: registry[62] at 007CA910 stores type 0x0156 and executable pointer 004014D3; allocation
   size 596 uniquely matches /HelpPanelTy */

HelpPanelTy * __cdecl CreateHelpPanel(void)

{
  AnonShape_00510C80_2C2DC38C *pAVar1;
  HelpPanelTy *pHVar2;

  pAVar1 = (AnonShape_00510C80_2C2DC38C *)FUN_006b04d0(0x254);
  if (pAVar1 != (AnonShape_00510C80_2C2DC38C *)0x0) {
    pHVar2 = (HelpPanelTy *)thunk_FUN_00510c80(pAVar1);
    return pHVar2;
  }
  return (HelpPanelTy *)0x0;
}

