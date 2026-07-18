
bool __fastcall FUN_0074a27c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(*(int **)(param_1 + 0x18),iVar1);
    FUN_0074a277(param_1);
  }
  ResetEvent(*(HANDLE *)(param_1 + 0x54));
  return iVar1 == 0;
}

