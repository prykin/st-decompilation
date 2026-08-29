
/* [STPrototypeApplier] Propagated return.
   Evidence: 006D61C0 returns return of FUN_00748b37 @ 006D61D3 */

LONG FUN_006d61c0(RecoveredRecord_006D61C0_FF7D95EC *param_1)

{
  int *piVar1;
  LONG LVar2;

  piVar1 = (int *)(param_1->field_0018 + 0x68);
  *piVar1 = *piVar1 + 1;

  LVar2 = Library::Win32::COMSupport::FUN_00748b37(param_1);
  return LVar2;
}

