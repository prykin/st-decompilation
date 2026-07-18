
void __fastcall thunk_FUN_0068e010(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x20;
  }
  thunk_FUN_00691480(iVar1);
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x130));
  }
  return;
}

