
void FUN_0075e000(AnonShape_0075E000_A9FEDC0C *param_1,undefined4 param_2,int *param_3,
                 undefined4 param_4,int param_5,int *param_6,int param_7)

{
  AnonNested_0075E000_01B2_B6D867E9 *pAVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;

  pAVar1 = param_1->field_01B2;
  if (pAVar1->field_0024 == 0) {
    uVar3 = 2;
    if ((uint)pAVar1->field_002C < 2) {
      uVar3 = pAVar1->field_002C;
    }
    iVar2 = *param_6;
    if ((uint)(param_7 - iVar2) < uVar3) {
      uVar3 = param_7 - iVar2;
    }
    local_c = *(undefined4 *)(param_5 + iVar2 * 4);
    if (uVar3 < 2) {
      local_8 = pAVar1->field_0020;
      pAVar1->field_0024 = 1;
    }
    else {
      local_8 = *(undefined4 *)(param_5 + 4 + iVar2 * 4);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pAVar1->field_000C)(param_1,param_2,*param_3,&local_c);
  }
  else {
    FUN_00759eb0((int)&pAVar1->field_0020,0,param_5 + *param_6 * 4,0,1,pAVar1->field_0028);
    uVar3 = 1;
    pAVar1->field_0024 = 0;
  }
  *param_6 = *param_6 + uVar3;
  pAVar1->field_002C = pAVar1->field_002C - uVar3;
  if (pAVar1->field_0024 == 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}

