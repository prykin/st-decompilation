
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void FUN_0075a490(AnonShape_0075A180_7E367FD8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_18;
  int local_14;
  undefined4 *local_10;
  
  iVar1 = param_1->field_012A;
  iVar2 = param_1->field_0196;
  local_18 = 0;
  if (0 < param_1->field_001C) {
    piVar9 = (int *)(param_1->field_00D0 + 0xc);
    do {
      iVar6 = (piVar9[6] * *piVar9) / param_1->field_012A;
      iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + local_18 * 4);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x3c) + local_18 * 4);
      if (0 < iVar6) {
        local_10 = (undefined4 *)(iVar4 + (iVar1 + 2) * iVar6 * 4);
        iVar8 = iVar3 - iVar4;
        puVar10 = (undefined4 *)(iVar4 + (iVar1 + 1) * iVar6 * 4);
        iVar7 = 0;
        local_14 = iVar6;
        do {
          *(undefined4 *)(iVar7 + iVar6 * -4 + iVar3) = *(undefined4 *)(iVar8 + (int)puVar10);
          uVar5 = *puVar10;
          puVar10 = puVar10 + 1;
          *(undefined4 *)(iVar7 + iVar6 * -4 + iVar4) = uVar5;
          *(undefined4 *)(iVar8 + (int)local_10) = *(undefined4 *)(iVar8 + iVar7 + iVar4);
          *local_10 = *(undefined4 *)(iVar7 + iVar4);
          local_10 = local_10 + 1;
          local_14 = local_14 + -1;
          iVar7 = iVar7 + 4;
        } while (local_14 != 0);
      }
      local_18 = local_18 + 1;
      piVar9 = piVar9 + 0x15;
    } while (local_18 < param_1->field_001C);
  }
  return;
}

