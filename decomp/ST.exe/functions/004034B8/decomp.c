
void __fastcall thunk_FUN_0057cb30(int param_1)

{
  int iVar1;
  
  iVar1 = (int)DAT_007fb242;
  if ((((DAT_007fb240 + -1 < *(int *)(param_1 + 599)) || (*(int *)(param_1 + 599) < 0)) ||
      (iVar1 + -1 < *(int *)(param_1 + 0x25b))) || (*(int *)(param_1 + 0x25b) < 0)) {
    *(int *)(param_1 + 599) = DAT_007fb240 + -1 >> 1;
    *(int *)(param_1 + 0x25b) = iVar1 + -1 >> 1;
  }
  return;
}

