
void __fastcall FUN_00629f20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  local_8 = param_1;
  iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0xe7),&local_8);
  if (iVar1 != -4) {
    *(int *)(param_1 + 0xeb) = local_8;
    return;
  }
  puVar2 = (undefined4 *)(param_1 + 0xd7);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  return;
}

