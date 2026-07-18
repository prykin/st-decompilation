
bool __fastcall thunk_FUN_005faee0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x2e6);
  if (iVar1 == 0) {
    return true;
  }
  iVar3 = *(int *)(iVar1 + 0x60) -
          (*(int *)(DAT_00802a38 + 0xe4) - *(int *)(iVar1 + 0x68)) * *(int *)(iVar1 + 100);
  iVar2 = *(int *)(iVar1 + 0x3c);
  *(int *)(iVar1 + 0x1c) = iVar3;
  iVar1 = *(int *)(param_1 + 0x2e6);
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x2e6);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x54);
  return iVar3 < iVar2;
}

