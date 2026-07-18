
void FUN_0075eb40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 byte *param_7)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
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
  
  piVar8 = local_22c;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = 0x7fffffff;
    piVar8 = piVar8 + 1;
  }
  local_18 = 0;
  if (0 < param_5) {
    do {
      local_10 = 4;
      bVar1 = *(byte *)(local_18 + param_6);
      uVar7 = (uint)bVar1;
      piVar8 = *(int **)(param_1 + 0x80);
      iVar6 = param_2 - (uint)*(byte *)(uVar7 + *piVar8);
      iVar3 = param_3 - (uint)*(byte *)(piVar8[1] + uVar7);
      iVar5 = iVar3 * 3;
      iVar4 = (param_4 - (uint)*(byte *)(piVar8[2] + uVar7)) * 2;
      iVar5 = iVar4 * iVar4 + iVar5 * iVar5 + iVar6 * iVar6;
      local_2c = (iVar4 + 8) * 0x20;
      local_28 = (iVar3 * 9 + 0x12) * 8;
      piVar8 = local_22c;
      local_8 = param_7;
      local_c = (iVar6 + 4) * 0x10;
      do {
        local_20 = local_28;
        local_14 = iVar5;
        local_1c = 8;
        iVar3 = iVar5;
        do {
          local_24 = 4;
          iVar4 = local_2c;
          local_14 = iVar3;
          do {
            pbVar2 = local_8;
            if (iVar3 < *piVar8) {
              *piVar8 = iVar3;
              *pbVar2 = bVar1;
            }
            iVar3 = iVar3 + iVar4;
            iVar4 = iVar4 + 0x200;
            piVar8 = piVar8 + 1;
            local_8 = local_8 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
          iVar3 = local_14 + local_20;
          local_20 = local_20 + 0x120;
          local_1c = local_1c + -1;
          local_14 = iVar3;
        } while (local_1c != 0);
        iVar5 = iVar5 + local_c;
        local_c = local_c + 0x80;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < param_5);
  }
  return;
}

