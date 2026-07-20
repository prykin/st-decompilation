
void __fastcall FUN_00550190(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe4) + 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(int *)(param_1 + 0xe4) = iVar1;
  if ((iVar1 - *(int *)(param_1 + 0x34) == 6000) && (g_optPanel_008016DC != (OptPanelTy *)0x0)) {
    thunk_FUN_00533b80(g_optPanel_008016DC);
    return;
  }
  return;
}

