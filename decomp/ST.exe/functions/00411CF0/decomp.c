
int FUN_00411cf0(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  pcVar6 = param_1;
  iVar3 = 0;
  iVar5 = param_2 * -2 + 3;
  pcVar1 = (char *)0x0;
  pcVar7 = param_1;
  do {
    iVar2 = param_2;
    pcVar4 = pcVar1;
    *pcVar7 = (char)iVar2;
    pcVar7[1] = -(char)iVar3;
    pcVar1 = pcVar4 + 1;
    pcVar7 = pcVar7 + 4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 6 + iVar3 * 4;
      param_2 = iVar2;
    }
    else {
      param_2 = iVar2 + -1;
      iVar5 = iVar5 + 10 + (iVar3 - iVar2) * 4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < param_2);
  if ((iVar3 == param_2) && (param_2 != iVar2)) {
    param_1[(int)pcVar1 * 4] = (char)param_2;
    param_1[(int)pcVar1 * 4 + 1] = -(char)iVar3;
    pcVar1 = pcVar4 + 2;
  }
  if (0 < (int)pcVar4) {
    iVar5 = (int)pcVar1 * 4;
    pcVar7 = param_1 + (int)pcVar4 * 4;
    pcVar1 = pcVar1 + (int)pcVar4;
    pcVar8 = param_1 + iVar5;
    do {
      *pcVar8 = -pcVar7[1];
      pcVar8[1] = -*pcVar7;
      pcVar7 = pcVar7 + -4;
      pcVar4 = pcVar4 + -1;
      pcVar8 = pcVar8 + 4;
    } while (pcVar4 != (char *)0x0);
  }
  pcVar7 = pcVar1;
  if (0 < (int)pcVar1) {
    pcVar4 = param_1 + (int)pcVar1 * 4;
    pcVar7 = (char *)((int)pcVar1 * 2);
    pcVar8 = param_1;
    param_1 = pcVar1;
    do {
      *pcVar4 = pcVar8[1];
      pcVar4[1] = -*pcVar8;
      pcVar4 = pcVar4 + 4;
      param_1 = param_1 + -1;
      pcVar8 = pcVar8 + 4;
    } while (param_1 != (char *)0x0);
  }
  if (0 < (int)pcVar1) {
    iVar5 = (int)pcVar7 * 4;
    pcVar7 = pcVar7 + (int)pcVar1;
    pcVar4 = pcVar6 + iVar5;
    pcVar8 = pcVar6;
    param_1 = pcVar1;
    do {
      *pcVar4 = -*pcVar8;
      pcVar4[1] = -pcVar8[1];
      pcVar8 = pcVar8 + 4;
      param_1 = param_1 + -1;
      pcVar4 = pcVar4 + 4;
    } while (param_1 != (char *)0x0);
    if (0 < (int)pcVar1) {
      iVar5 = (int)pcVar7 * 4;
      pcVar7 = pcVar7 + (int)pcVar1;
      pcVar4 = pcVar6 + iVar5;
      do {
        *pcVar4 = -pcVar6[1];
        pcVar4[1] = *pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar1 = pcVar1 + -1;
        pcVar4 = pcVar4 + 4;
      } while (pcVar1 != (char *)0x0);
    }
  }
  return (int)pcVar7;
}

