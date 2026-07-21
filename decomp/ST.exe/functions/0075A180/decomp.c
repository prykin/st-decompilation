
void FUN_0075a180(AnonShape_0075A180_7E367FD8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_18;
  int *local_10;
  int local_c;

  local_c = 0;
  iVar1 = param_1->field_012A;
  iVar2 = param_1->field_0196;
  if (0 < param_1->field_001C) {
    piVar9 = (int *)(param_1->field_00D0 + 0xc);
    local_10 = (int *)(iVar2 + 8);
    do {
      iVar6 = (piVar9[6] * *piVar9) / param_1->field_012A;
      iVar12 = *local_10;
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0x38) + local_c * 4);
      puVar4 = *(undefined4 **)(*(int *)(iVar2 + 0x3c) + local_c * 4);
      local_18 = (iVar1 + 2) * iVar6;
      if (0 < local_18) {
        puVar10 = puVar4;
        do {
          puVar11 = puVar10 + 1;
          uVar5 = *(undefined4 *)((iVar12 - (int)puVar4) + -4 + (int)puVar11);
          *puVar10 = uVar5;
          *(undefined4 *)((int)puVar3 + (-4 - (int)puVar4) + (int)puVar11) = uVar5;
          local_18 = local_18 + -1;
          puVar10 = puVar11;
        } while (local_18 != 0);
      }
      if (0 < iVar6 * 2) {
        puVar10 = (undefined4 *)(iVar12 + (iVar1 + -2) * iVar6 * 4);
        local_18 = iVar6 * 2;
        puVar11 = puVar4 + iVar6 * iVar1;
        do {
          *(undefined4 *)(((int)puVar4 - iVar12) + (int)puVar10) =
               *(undefined4 *)((int)puVar11 + (iVar12 - (int)puVar4));
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          local_18 = local_18 + -1;
          puVar11 = puVar11 + 1;
        } while (local_18 != 0);
      }
      if (0 < iVar6) {
        iVar8 = 0;
        iVar12 = iVar6;
        do {
          iVar7 = iVar8 + iVar6 * -4;
          iVar8 = iVar8 + 4;
          iVar12 = iVar12 + -1;
          *(undefined4 *)(iVar7 + (int)puVar3) = *puVar3;
        } while (iVar12 != 0);
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      piVar9 = piVar9 + 0x15;
    } while (local_c < param_1->field_001C);
  }
  return;
}

