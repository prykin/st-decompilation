
char * thunk_FUN_00674af0(int param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar5 = &DAT_008016a0;
  if (DAT_00811934 != (char *)0x0) {
    cVar3 = *DAT_00811934;
    pcVar6 = DAT_00811934;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (DAT_00811938 != (char *)0x0) {
    cVar3 = *DAT_00811938;
    pcVar6 = DAT_00811938;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (DAT_0081193c != (char *)0x0) {
    cVar3 = *DAT_0081193c;
    pcVar6 = DAT_0081193c;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (DAT_00811928 != (int *)0x0) {
    iVar4 = *DAT_00811928;
    piVar7 = DAT_00811928;
    while (iVar4 != 0) {
      if (piVar7[1] == param_1) goto LAB_00674bc4;
      piVar2 = piVar7 + 2;
      piVar7 = piVar7 + 2;
      iVar4 = *piVar2;
    }
  }
  if (DAT_0081192c != (int *)0x0) {
    iVar4 = *DAT_0081192c;
    piVar7 = DAT_0081192c;
    while (iVar4 != 0) {
      if (piVar7[1] == param_1) goto LAB_00674bc4;
      piVar2 = piVar7 + 2;
      piVar7 = piVar7 + 2;
      iVar4 = *piVar2;
    }
  }
  if ((DAT_00811930 != (int *)0x0) && (piVar7 = DAT_00811930, *DAT_00811930 != 0)) {
    while (piVar7[1] != param_1) {
      piVar2 = piVar7 + 2;
      piVar7 = piVar7 + 2;
      if (*piVar2 == 0) {
        return pcVar5;
      }
    }
LAB_00674bc4:
    pcVar5 = (char *)*piVar7;
  }
  return pcVar5;
}

