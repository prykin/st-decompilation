
undefined4 FUN_006b98c0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;

  uVar2 = 0;
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    if (piVar4 == param_2) {
      *param_1 = *param_2;
      return 1;
    }
    piVar1 = (int *)*piVar4;
    if ((int *)*piVar4 != (int *)0x0) {
      while (piVar3 = piVar1, piVar3 != param_2) {
        piVar1 = (int *)*piVar3;
        piVar4 = piVar3;
        if ((int *)*piVar3 == (int *)0x0) {
          return uVar2;
        }
      }
      uVar2 = 1;
      *piVar4 = *param_2;
    }
  }
  return uVar2;
}

