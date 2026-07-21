
void FUN_0075fa00(AnonShape_0075FA00_902A830E *param_1)

{
  AnonNested_0075FA00_01BA_0DE014D6 *pAVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  char local_10;
  AnonNested_0075FA00_01BA_0DE014D6 *local_c;
  int local_8;

  pAVar1 = param_1->field_01BA;
  if (*(int *)&param_1->field_0x50 == 1) {
    local_8 = 0x1fe;
    pAVar1->field_001C = 1;
  }
  else {
    local_8 = 0;
    pAVar1->field_001C = 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)param_1 + 8))
                    (param_1,1,local_8 + 0x100,*(undefined4 *)&param_1->field_0x70);
  pAVar1->field_0018 = uVar3;
  iVar4 = pAVar1->field_0014;
  iVar10 = 0;
  if (0 < *(int *)&param_1->field_0x70) {
    local_c = pAVar1 + 1;
    do {
      iVar6 = *(int *)local_c;
      iVar4 = iVar4 / iVar6;
      if (local_8 != 0) {
        *(int *)(pAVar1->field_0018 + iVar10 * 4) = *(int *)(pAVar1->field_0018 + iVar10 * 4) + 0xff
        ;
      }
      iVar7 = 0;
      puVar2 = *(undefined1 **)(pAVar1->field_0018 + iVar10 * 4);
      iVar6 = iVar6 + -1;
      iVar5 = FUN_0075fb30(param_1,iVar10,0,iVar6);
      iVar8 = 0;
      do {
        while (iVar5 < iVar8) {
          iVar7 = iVar7 + 1;
          iVar5 = FUN_0075fb30(param_1,iVar10,iVar7,iVar6);
        }
        local_10 = (char)iVar4;
        puVar2[iVar8] = local_10 * (char)iVar7;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x100);
      if (local_8 != 0) {
        iVar6 = 1;
        puVar9 = puVar2;
        do {
          puVar9 = puVar9 + -1;
          iVar5 = iVar6 + 1;
          *puVar9 = *puVar2;
          puVar2[iVar6 + 0xff] = puVar2[0xff];
          iVar6 = iVar5;
        } while (iVar5 < 0x100);
      }
      iVar10 = iVar10 + 1;
      local_c = (AnonNested_0075FA00_01BA_0DE014D6 *)&local_c->field_0x4;
    } while (iVar10 < *(int *)&param_1->field_0x70);
  }
  return;
}

