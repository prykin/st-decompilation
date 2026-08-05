
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044EE30 -> 004B7710 @ 00450E64 | 0044EE30 -> 004B7710 @ 0045AC44 | 004B9A40 ->
   004B7710 @ 004B9A8C | 004D2760 -> 004B7710 @ 004D2843 | 004D32C0 -> 004B7710 @ 004D3905 |
   004DC760 -> 004B7710 @ 004DC7FB | 004DC760 -> 004B7710 @ 004DC881 | 004DEC10 -> 004B7710 @
   004DED56 | 004DF3B0 -> 004B7710 @ 004DF44B | 004DF3B0 -> 004B7710 @ 004DF4D1
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/uint
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=004B7718 MOV
   EDI,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint */

void FUN_004b7710(uint param_1,int param_2)

{
  int iVar1;

  iVar1 = thunk_FUN_004b72e0((char)param_1,param_2);
  thunk_FUN_004b7240(param_1,iVar1);
  return;
}

