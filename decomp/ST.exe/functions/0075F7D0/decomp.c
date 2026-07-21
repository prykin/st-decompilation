
void FUN_0075f7d0(AnonShape_0075F7D0_BDBF0616 *param_1)

{
  AnonNested_0075F7D0_01BA_88B72737 *pAVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_18;
  int *local_10;
  int local_c;
  int local_8;

  pAVar1 = param_1->field_01BA;
  local_10 = (int *)&pAVar1[1].field_0x8;
  iVar3 = Library::DKW::JPG::FUN_0075f8e0((int)param_1,local_10);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  piVar4 = (int *)(**(code **)(*(int *)param_1 + 8))
                            (param_1,1,iVar3,*(undefined4 *)&param_1->field_0x70);
  local_c = 0;
  iVar5 = iVar3;
  piVar11 = piVar4;
  if (0 < *(int *)&param_1->field_0x70) {
    do {
      iVar2 = *local_10;
      iVar6 = iVar5 / iVar2;
      local_18 = 0;
      if (0 < iVar2) {
        local_8 = 0;
        do {
          iVar7 = FUN_0075f9d0(param_1,local_c,local_18,iVar2 + -1);
          for (iVar9 = local_8; iVar9 < iVar3; iVar9 = iVar9 + iVar5) {
            iVar8 = 0;
            if (0 < iVar6) {
              do {
                iVar10 = *piVar11 + iVar8;
                iVar8 = iVar8 + 1;
                *(char *)(iVar10 + iVar9) = (char)iVar7;
              } while (iVar8 < iVar6);
            }
          }
          local_18 = local_18 + 1;
          local_8 = local_8 + iVar6;
        } while (local_18 < iVar2);
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      iVar5 = iVar6;
      piVar11 = piVar11 + 1;
    } while (local_c < *(int *)&param_1->field_0x70);
    pAVar1->field_0010 = piVar4;
    pAVar1->field_0014 = iVar3;
    return;
  }
  pAVar1->field_0014 = iVar3;
  pAVar1->field_0010 = piVar4;
  return;
}

