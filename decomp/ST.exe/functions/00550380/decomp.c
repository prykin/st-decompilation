
void FUN_00550380(undefined1 param_1)

{
  DAT_0080c50a = 0;
  DAT_0080c512 = 1;
  if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
    OptPanelTy::Notification(g_optPanel_008016DC,'\n',param_1);
  }
  return;
}

