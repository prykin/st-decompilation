
void FUN_00750590(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;

  if ((0 < param_5) && (0 < param_6)) {
    iVar4 = param_5;
    if (2 < param_5) {
      do {
        iVar4 = param_5;
        if (((uint)param_1 & 1) != 0) {
          bVar1 = *param_3;
          param_3 = param_3 + 1;
          *param_1 = *(undefined1 *)(param_7 + (uint)bVar1);
          param_1 = param_1 + 1;
          iVar4 = param_5 + -1;
        }
        iVar4 = iVar4 + -2;
        do {
          puVar7 = param_1;
          pbVar6 = param_3;
          param_3 = pbVar6 + 2;
          param_1 = puVar7 + 2;
          uVar2 = *(undefined1 *)(param_7 + (uint)pbVar6[1]);
          *puVar7 = *(undefined1 *)(param_7 + (uint)*pbVar6);
          puVar7[1] = uVar2;
          iVar5 = iVar4 + -2;
          bVar3 = 1 < iVar4;
          iVar4 = iVar5;
        } while (bVar3);
        if (iVar5 != -2) {
          bVar1 = *param_3;
          param_3 = pbVar6 + 3;
          *param_1 = *(undefined1 *)(param_7 + (uint)bVar1);
          param_1 = puVar7 + 3;
        }
        param_3 = param_3 + (param_4 - param_5);
        param_1 = param_1 + (param_2 - param_5);
        iVar4 = param_6 + -1;
        bVar3 = 0 < param_6;
        param_6 = iVar4;
      } while (iVar4 != 0 && bVar3);
      return;
    }
    do {
      do {
        bVar1 = *param_3;
        puVar7 = param_1 + 1;
        param_3 = param_3 + 1;
        iVar5 = iVar4 + -1;
        *param_1 = *(undefined1 *)(param_7 + (uint)bVar1);
        bVar3 = 0 < iVar4;
        iVar4 = iVar5;
        param_1 = puVar7;
      } while (iVar5 != 0 && bVar3);
      param_3 = param_3 + (param_4 - param_5);
      param_1 = puVar7 + (param_2 - param_5);
      iVar5 = param_6 + -1;
      bVar3 = 0 < param_6;
      iVar4 = param_5;
      param_6 = iVar5;
    } while (iVar5 != 0 && bVar3);
  }
  return;
}

