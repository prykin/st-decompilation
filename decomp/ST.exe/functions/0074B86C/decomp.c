
uint FUN_0074b86c(int *param_1)

{
  uint *lpAddend;
  LONG LVar1;
  uint uVar2;
  
  lpAddend = (uint *)(param_1 + 2);
  LVar1 = InterlockedDecrement((LONG *)lpAddend);
  if (LVar1 == 0) {
    *lpAddend = *lpAddend + 1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0xc))(1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (1 < *lpAddend) {
      uVar2 = *lpAddend;
    }
  }
  return uVar2;
}

