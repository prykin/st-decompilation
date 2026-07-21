
uint FUN_00757530(AnonShape_00757530_EEED7D69 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  AnonNested_00757530_000C_743CE253 *pAVar4;
  uint uVar5;
  AnonShape_00757530_EEED7D69 *pAVar6;
  AnonNested_00757530_000C_743CE253 **ppAVar7;

  if (param_2 == 0) {
    ppAVar7 = (AnonNested_00757530_000C_743CE253 **)&param_1[1].field_0x8;
    pAVar6 = param_1 + 2;
  }
  else {
    ppAVar7 = &param_1[1].field_000C;
    pAVar6 = (AnonShape_00757530_EEED7D69 *)&param_1[2].field_0x4;
  }
  sVar2 = param_1->field_000C->field_0034;
  if (sVar2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (*(code *)param_1->field_000C->field_0008)(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  if ((int)*(uint *)pAVar6 < (int)uVar1) {
    pAVar4 = (AnonNested_00757530_000C_743CE253 *)FUN_006bfb50((undefined4 *)*ppAVar7,uVar1);
    *ppAVar7 = pAVar4;
    if (pAVar4 == (AnonNested_00757530_000C_743CE253 *)0x0) {
      return 0;
    }
    *(uint *)pAVar6 = uVar1;
  }
  if (uVar1 != 0) {
    pAVar4 = *ppAVar7;
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pAVar4 = *param_3;
      param_3 = param_3 + 1;
      pAVar4 = (AnonNested_00757530_000C_743CE253 *)&pAVar4->field_0x4;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)pAVar4 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      pAVar4 = (AnonNested_00757530_000C_743CE253 *)&pAVar4->field_0x1;
    }
  }
  return uVar1;
}

