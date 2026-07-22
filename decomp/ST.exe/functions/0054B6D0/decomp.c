
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 0054B6D0 @ 004F6B6E | 004FB060 -> 0054B6D0 @ 004FB3AF | 004FB060 ->
   0054B6D0 @ 004FB591 */

void __fastcall FUN_0054b6d0(CursorClassTy *param_1)

{
  if (g_cPanel_00801688 != (CPanelTy *)0x0) {
    param_1->field_04BE = (g_cPanel_00801688->field_0094 - param_1->field_04B6) + 1;
  }
  return;
}

