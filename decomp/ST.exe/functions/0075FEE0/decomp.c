
void FUN_0075fee0(AnonShape_0075FEE0_E0ABA202 *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  AnonShape_0075FEE0_E0ABA202 *pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  AnonShape_0075FEE0_E0ABA202 *pAVar10;
  uint uVar11;
  int *local_14;

  iVar1 = param_1->field_01BA;
  iVar2 = param_1->field_0070;
  pAVar3 = (AnonShape_0075FEE0_E0ABA202 *)param_1->field_0068;
  if (0 < (int)param_4) {
    iVar8 = param_2 - (int)param_3;
    local_14 = param_4;
    do {
      FUN_00759f30((undefined4 *)*param_3,pAVar3);
      iVar4 = *(int *)(iVar1 + 0x30);
      param_2 = 0;
      if (0 < iVar2) {
        param_4 = (int *)(iVar1 + 0x34);
        do {
          iVar5 = *(int *)(*(int *)(iVar1 + 0x18) + param_2 * 4);
          pcVar9 = (char *)*param_3;
          pbVar7 = (byte *)(*(int *)(iVar8 + (int)param_3) + param_2);
          iVar6 = *param_4;
          uVar11 = 0;
          for (pAVar10 = pAVar3; pAVar10 != (AnonShape_0075FEE0_E0ABA202 *)0x0;
              pAVar10 = (AnonShape_0075FEE0_E0ABA202 *)&pAVar10[-1].field_0x1bf) {
            *pcVar9 = *pcVar9 + *(char *)(*(int *)(iVar6 + iVar4 * 0x40 + uVar11 * 4) +
                                          (uint)*pbVar7 + iVar5);
            pbVar7 = pbVar7 + iVar2;
            pcVar9 = pcVar9 + 1;
            uVar11 = uVar11 + 1 & 0xf;
          }
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
        } while (param_2 < iVar2);
      }
      param_3 = param_3 + 1;
      local_14 = (int *)((int)local_14 + -1);
      *(uint *)(iVar1 + 0x30) = iVar4 + 1U & 0xf;
    } while (local_14 != (int *)0x0);
  }
  return;
}

