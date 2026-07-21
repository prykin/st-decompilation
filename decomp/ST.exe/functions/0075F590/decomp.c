
void FUN_0075f590(AnonShape_0075F590_570A7014 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  int local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar9 = 0;
  iVar6 = param_2[2];
  iVar3 = param_2[4];
  piVar1 = param_2 + 3;
  piVar2 = param_2 + 5;
  iVar7 = *param_2;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (iVar7 <= param_2[1]) {
    local_c = iVar7 * 8 + 4;
    local_28 = (param_2[1] - iVar7) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_2 = (int *)(*(int *)(param_1->field_01BA + 0x18) + iVar7 * 4);
    do {
      if (iVar6 <= *piVar1) {
        iVar7 = iVar6 * 4 + 2;
        puVar10 = (ushort *)(*param_2 + (iVar6 * 0x20 + iVar3) * 2);
        iVar4 = (*piVar1 - iVar6) + 1;
        do {
          if (iVar3 <= *piVar2) {
            iVar9 = iVar3 * 8 + 4;
            iVar8 = (*piVar2 - iVar3) + 1;
            puVar11 = puVar10;
            do {
              uVar5 = (uint)*puVar11;
              puVar11 = puVar11 + 1;
              if (uVar5 != 0) {
                local_8 = local_8 + uVar5;
                local_10 = local_10 + local_c * uVar5;
                local_14 = local_14 + iVar7 * uVar5;
                local_18 = local_18 + iVar9 * uVar5;
              }
              iVar9 = iVar9 + 8;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          iVar7 = iVar7 + 4;
          puVar10 = puVar10 + 0x20;
          iVar4 = iVar4 + -1;
          iVar9 = local_8;
        } while (iVar4 != 0);
      }
      param_2 = param_2 + 1;
      local_c = local_c + 8;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  iVar6 = iVar9 >> 1;
  *(char *)(*(int *)param_1->field_0080 + param_3) = (char)((iVar6 + local_10) / iVar9);
  *(char *)(*(int *)(param_1->field_0080 + 4) + param_3) = (char)((local_14 + iVar6) / iVar9);
  *(char *)(*(int *)(param_1->field_0080 + 8) + param_3) = (char)((local_18 + iVar6) / iVar9);
  return;
}

