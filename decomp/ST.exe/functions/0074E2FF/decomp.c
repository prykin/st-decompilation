
void __fastcall FUN_0074e2ff(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}

