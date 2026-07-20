
void __fastcall FUN_0068e010(int param_1)

{
  AnonShape_00691480_E757992C *pAVar1;
  
  if (param_1 == 0) {
    pAVar1 = (AnonShape_00691480_E757992C *)0x0;
  }
  else {
    pAVar1 = (AnonShape_00691480_E757992C *)(param_1 + 0x20);
  }
  thunk_FUN_00691480(pAVar1);
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_006ab060((LPVOID *)(param_1 + 0x130));
  }
  return;
}

