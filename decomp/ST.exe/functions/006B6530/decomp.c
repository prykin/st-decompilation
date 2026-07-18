
undefined4 FUN_006b6530(int param_1,undefined4 param_2,byte param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = (int *)*param_4;
  if ((param_3 & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    if (*piVar3 <= piVar3[1]) {
      iVar1 = *piVar3 + 10;
      piVar3 = (int *)FUN_006bfb50(piVar3,iVar1 * 0x14 + 8);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      *param_4 = piVar3;
      *piVar3 = iVar1;
    }
    piVar2 = piVar3 + piVar3[1] * 5 + 3;
    *piVar2 = *(int *)(param_1 + 8);
    piVar2[1] = *(int *)(param_1 + 0xc);
    piVar2[2] = *(int *)(param_1 + 0x10);
    piVar2[3] = *(int *)(param_1 + 0x14);
    pcVar4 = FUN_006c8170(*(char **)(param_1 + 0x30));
    piVar3[piVar3[1] * 5 + 2] = (int)pcVar4;
    if (piVar3[piVar3[1] * 5 + 2] == 0) {
      return 0;
    }
    piVar3[1] = piVar3[1] + 1;
  }
  return 1;
}

