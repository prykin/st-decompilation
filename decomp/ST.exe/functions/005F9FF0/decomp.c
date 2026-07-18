
void __fastcall FUN_005f9ff0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2e6);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) {
    FUN_006ab060((undefined4 *)(iVar1 + 0x58));
    *(undefined4 *)(*(int *)(param_1 + 0x2e6) + 0x58) = 0;
  }
  return;
}

