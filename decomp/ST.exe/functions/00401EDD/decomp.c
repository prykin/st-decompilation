
int thunk_FUN_004b7140(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (char)param_1;
  piVar1 = (int *)((int)&DAT_007f5792 + cVar2 * 0xa62);
  *piVar1 = param_2;
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  if ((int)cVar2 == (uint)DAT_0080874d) {
    thunk_FUN_004d8b70(cVar2);
  }
  return *piVar1;
}

