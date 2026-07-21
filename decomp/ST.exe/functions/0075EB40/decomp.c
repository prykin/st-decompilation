
void FUN_0075eb40(AnonShape_0075EB40_977462DD *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte *param_7)

{
  byte bVar1;
  AnonNested_0075EB40_0080_454B432A *pAVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int local_22c [128];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  byte *local_8;

  piVar9 = local_22c;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = 0x7fffffff;
    piVar9 = piVar9 + 1;
  }
  local_18 = 0;
  if (0 < param_5) {
    do {
      local_10 = 4;
      bVar1 = *(byte *)(local_18 + param_6);
      uVar8 = (uint)bVar1;
      pAVar2 = param_1->field_0080;
      iVar7 = param_2 - (uint)*(byte *)(uVar8 + pAVar2->field_0000);
      iVar4 = param_3 - (uint)*(byte *)(pAVar2->field_0004 + uVar8);
      iVar6 = iVar4 * 3;
      iVar5 = (param_4 - (uint)*(byte *)(pAVar2->field_0008 + uVar8)) * 2;
      iVar6 = iVar5 * iVar5 + iVar6 * iVar6 + iVar7 * iVar7;
      local_2c = (iVar5 + 8) * 0x20;
      local_28 = (iVar4 * 9 + 0x12) * 8;
      piVar9 = local_22c;
      local_8 = param_7;
      local_c = (iVar7 + 4) * 0x10;
      do {
        local_20 = local_28;
        local_14 = iVar6;
        local_1c = 8;
        iVar4 = iVar6;
        do {
          local_24 = 4;
          iVar5 = local_2c;
          local_14 = iVar4;
          do {
            pbVar3 = local_8;
            if (iVar4 < *piVar9) {
              *piVar9 = iVar4;
              *pbVar3 = bVar1;
            }
            iVar4 = iVar4 + iVar5;
            iVar5 = iVar5 + 0x200;
            piVar9 = piVar9 + 1;
            local_8 = local_8 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
          iVar4 = local_14 + local_20;
          local_20 = local_20 + 0x120;
          local_1c = local_1c + -1;
          local_14 = iVar4;
        } while (local_1c != 0);
        iVar6 = iVar6 + local_c;
        local_c = local_c + 0x80;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < param_5);
  }
  return;
}

