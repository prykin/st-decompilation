
void FUN_0075fd80(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x1ba) + 0x18);
  iVar2 = *(int *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x70);
  if (0 < param_4) {
    iVar8 = param_2 - (int)param_3;
    param_2 = param_4;
    do {
      pcVar5 = (char *)*param_3;
      pbVar9 = *(byte **)(iVar8 + (int)param_3);
      for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
        cVar7 = '\0';
        piVar4 = piVar1;
        param_1 = iVar3;
        if (0 < iVar3) {
          do {
            cVar7 = cVar7 + *(char *)((uint)*pbVar9 + *piVar4);
            pbVar9 = pbVar9 + 1;
            param_1 = param_1 + -1;
            piVar4 = piVar4 + 1;
          } while (param_1 != 0);
        }
        *pcVar5 = cVar7;
        pcVar5 = pcVar5 + 1;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

