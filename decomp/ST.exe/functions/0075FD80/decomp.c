
void FUN_0075fd80(AnonShape_0075FD80_7EE67BE7 *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  AnonShape_0075FD80_7EE67BE7 *pAVar3;
  AnonShape_0075FD80_7EE67BE7 *pAVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  byte *pbVar10;
  
  piVar1 = *(int **)(param_1->field_01BA + 0x18);
  iVar2 = param_1->field_0068;
  pAVar3 = (AnonShape_0075FD80_7EE67BE7 *)param_1->field_0070;
  if (0 < param_4) {
    iVar9 = param_2 - (int)param_3;
    param_2 = param_4;
    do {
      pcVar6 = (char *)*param_3;
      pbVar10 = *(byte **)(iVar9 + (int)param_3);
      for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
        cVar8 = '\0';
        piVar5 = piVar1;
        param_1 = pAVar3;
        if (0 < (int)pAVar3) {
          do {
            cVar8 = cVar8 + *(char *)((uint)*pbVar10 + *piVar5);
            pbVar10 = pbVar10 + 1;
            pAVar4 = param_1 + -1;
            piVar5 = piVar5 + 1;
            param_1 = (AnonShape_0075FD80_7EE67BE7 *)&pAVar4->field_0x1bf;
          } while (&pAVar4->field_0x1bf != (undefined1 *)0x0);
        }
        *pcVar6 = cVar8;
        pcVar6 = pcVar6 + 1;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

