
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00550380 -> 00533A10 @ 005503A7 */

void FUN_00550380(byte param_1)

{
  DAT_0080c50a = 0;
  DAT_0080c512 = 1;
  if (g_optPanel_008016DC != nullptr) {
    /* ST_CALLSITE[005503A7]: CALL 0x00405ef7; direct=00405EF7 OptPanelTy::Notification */
    OptPanelTy::Notification(g_optPanel_008016DC,'\n',param_1);
  }
  return;
}

