
void FUN_0075d740(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int local_1c;
  int local_c;
  int local_8;
  
  iVar1 = *param_4;
  local_c = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x126)) {
    do {
      local_1c = 0;
      piVar3 = (int *)(iVar1 + local_c * 4);
      do {
        pbVar6 = *(byte **)(param_3 + local_8 * 4);
        if (local_1c == 0) {
          pbVar9 = *(byte **)(param_3 + -4 + local_8 * 4);
        }
        else {
          pbVar9 = *(byte **)(param_3 + 4 + local_8 * 4);
        }
        puVar2 = (undefined1 *)*piVar3;
        piVar3 = piVar3 + 1;
        local_c = local_c + 1;
        iVar8 = (uint)*pbVar6 * 3 + (uint)*pbVar9;
        iVar4 = (uint)pbVar6[1] * 3 + (uint)pbVar9[1];
        *puVar2 = (char)(iVar8 * 4 + 8 >> 4);
        pbVar9 = pbVar9 + 2;
        pbVar6 = pbVar6 + 2;
        puVar2[1] = (char)(iVar8 * 3 + 7 + iVar4 >> 4);
        for (iVar7 = *(int *)(param_2 + 0x28) + -2; puVar2 = puVar2 + 2, iVar7 != 0;
            iVar7 = iVar7 + -1) {
          iVar5 = (uint)*pbVar6 * 3 + (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar6 = pbVar6 + 1;
          *puVar2 = (char)(iVar4 * 3 + 8 + iVar8 >> 4);
          puVar2[1] = (char)(iVar4 * 3 + 7 + iVar5 >> 4);
          iVar8 = iVar4;
          iVar4 = iVar5;
        }
        *puVar2 = (char)(iVar4 * 3 + 8 + iVar8 >> 4);
        puVar2[1] = (char)(iVar4 * 4 + 7 >> 4);
        local_1c = local_1c + 1;
      } while (local_1c < 2);
      local_8 = local_8 + 1;
    } while (local_c < *(int *)(param_1 + 0x126));
  }
  return;
}

