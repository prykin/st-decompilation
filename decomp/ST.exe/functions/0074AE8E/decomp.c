
void __fastcall FUN_0074ae8e(int param_1)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = timeGetTime();
  iVar2 = (DVar1 - *(int *)(param_1 + 0xe4)) * 10000;
  if ((iVar2 < *(int *)(param_1 + 0xdc) * 2) || (iVar2 < *(int *)(param_1 + 0xe0) * 2)) {
    *(int *)(param_1 + 0xdc) = (iVar2 + *(int *)(param_1 + 0xdc) * 3) / 4;
  }
  *(int *)(param_1 + 0xe0) = iVar2;
  FUN_0074ae16(param_1);
  return;
}

