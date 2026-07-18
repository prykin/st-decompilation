
int FUN_004e7fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = &DAT_0079a3fc;
  iVar2 = 0x54;
  piVar5 = &DAT_0079a3fc;
  do {
    iVar1 = *piVar5;
    piVar3 = piVar6;
    for (iVar4 = 0; (iVar1 != 0 && (iVar4 < 0xf)); iVar4 = iVar4 + 1) {
      if (*piVar3 == param_1) {
        return iVar2;
      }
      piVar3 = piVar3 + 1;
      iVar1 = *piVar3;
    }
    piVar5 = piVar5 + 0xf;
    iVar2 = iVar2 + 1;
    piVar6 = piVar6 + 0xf;
  } while ((int)piVar5 < 0x79a565);
  return iVar2;
}

