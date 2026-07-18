
void FUN_0075e7d0(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1ba) + 0x18);
  iVar4 = *(int *)(param_1 + 0x68);
  if (0 < param_4) {
    iVar8 = param_2 - (int)param_3;
    param_2 = param_4;
    do {
      pcVar6 = (char *)*param_3;
      pbVar10 = *(byte **)(iVar8 + (int)param_3);
      for (iVar7 = iVar4; iVar7 != 0; iVar7 = iVar7 + -1) {
        bVar2 = *pbVar10;
        pbVar1 = pbVar10 + 1;
        iVar5 = *(int *)(iVar3 + (uint)(bVar2 >> 3) * 4);
        pbVar9 = pbVar10 + 2;
        iVar11 = (uint)(*pbVar1 >> 2) * 0x20 + (uint)(*pbVar9 >> 3);
        pbVar10 = pbVar10 + 3;
        if (*(short *)(iVar5 + iVar11 * 2) == 0) {
          FUN_0075e890(param_1,(uint)(bVar2 >> 3),(uint)(*pbVar1 >> 2),(uint)(*pbVar9 >> 3));
        }
        *pcVar6 = *(char *)(iVar5 + iVar11 * 2) + -1;
        pcVar6 = pcVar6 + 1;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

