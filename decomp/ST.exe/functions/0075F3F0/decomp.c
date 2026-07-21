
int FUN_0075f3f0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;

  if (param_3 < param_4) {
    local_8 = param_3 * 2;
    piVar4 = (int *)(param_3 * 0x20 + 0xc + param_2);
    do {
      if (param_4 < local_8) {
        piVar1 = FUN_0075f560(param_2,param_3);
      }
      else {
        piVar1 = FUN_0075f520(param_2,param_3);
      }
      if (piVar1 == (int *)0x0) {
        return param_3;
      }
      piVar4[-2] = piVar1[1];
      *piVar4 = piVar1[3];
      piVar4[2] = piVar1[5];
      piVar4[-3] = *piVar1;
      piVar4[-1] = piVar1[2];
      piVar4[1] = piVar1[4];
      iVar3 = 1;
      iVar2 = (piVar1[5] - piVar1[4]) * 0x10;
      iVar5 = (piVar1[3] - piVar1[2]) * 0xc;
      if (iVar5 < iVar2) {
        iVar3 = 2;
        iVar5 = iVar2;
      }
      if (iVar5 < (piVar1[1] - *piVar1) * 8) {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        iVar5 = (*piVar1 + piVar1[1]) / 2;
        piVar1[1] = iVar5;
        piVar4[-3] = iVar5 + 1;
      }
      else if (iVar3 == 1) {
        iVar5 = (piVar1[3] + piVar1[2]) / 2;
        piVar1[3] = iVar5;
        piVar4[-1] = iVar5 + 1;
      }
      else if (iVar3 == 2) {
        iVar5 = (piVar1[4] + piVar1[5]) / 2;
        piVar1[5] = iVar5;
        piVar4[1] = iVar5 + 1;
      }
      FUN_0075efe0(param_1,piVar1);
      FUN_0075efe0(param_1,piVar4 + -3);
      param_3 = param_3 + 1;
      local_8 = local_8 + 2;
      piVar4 = piVar4 + 8;
    } while (param_3 < param_4);
  }
  return param_3;
}

