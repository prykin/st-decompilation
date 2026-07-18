
undefined4
FUN_006b6230(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = (int *)*param_5;
  if (*piVar3 <= piVar3[1]) {
    iVar1 = *piVar3 + 10;
    piVar3 = (int *)FUN_006bfb50(piVar3,iVar1 * 0x14 + 8);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    *param_5 = piVar3;
    *piVar3 = iVar1;
  }
  piVar2 = piVar3 + piVar3[1] * 5 + 3;
  *piVar2 = *param_1;
  piVar2[1] = param_1[1];
  piVar2[2] = param_1[2];
  piVar2[3] = param_1[3];
  pcVar4 = FUN_006c8170(param_2);
  piVar3[piVar3[1] * 5 + 2] = (int)pcVar4;
  if (piVar3[piVar3[1] * 5 + 2] == 0) {
    return 0;
  }
  piVar3[1] = piVar3[1] + 1;
  return 1;
}

