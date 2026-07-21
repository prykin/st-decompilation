
void FUN_0075fe30(AnonShape_0075FE30_46CD87E7 *param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;

  piVar10 = param_3;
  iVar2 = param_1->field_0068;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar3 = *(int **)(param_1->field_01BA + 0x18);
  iVar4 = *piVar3;
  iVar5 = piVar3[1];
  iVar6 = piVar3[2];
  if (0 < param_4) {
    iVar12 = param_2 - (int)param_3;
    param_3 = (int *)param_4;
    do {
      pbVar9 = *(byte **)(iVar12 + (int)piVar10);
      pcVar13 = (char *)*piVar10;
      for (iVar11 = iVar2; iVar11 != 0; iVar11 = iVar11 + -1) {
        bVar1 = *pbVar9;
        pbVar7 = pbVar9 + 1;
        pbVar8 = pbVar9 + 2;
        pbVar9 = pbVar9 + 3;
        *pcVar13 = *(char *)((uint)bVar1 + iVar4) + *(char *)((uint)*pbVar7 + iVar5) +
                   *(char *)((uint)*pbVar8 + iVar6);
        pcVar13 = pcVar13 + 1;
      }
      piVar10 = piVar10 + 1;
      param_3 = (int *)((int)param_3 + -1);
    } while (param_3 != (int *)0x0);
  }
  return;
}

