
void FUN_0075cf90(AnonShape_0075CF90_FD450D17 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4,int param_5,int *param_6,int param_7)

{
  AnonNested_0075CF90_019E_7AA50958 *pAVar1;
  AnonShape_0075CF90_FD450D17 *pAVar2;
  AnonShape_0075CF90_FD450D17 *pAVar3;
  int *piVar4;
  uint uVar5;

  piVar4 = param_6;
  pAVar3 = param_1;
  pAVar1 = param_1->field_019E;
  uVar5 = param_7 - *param_6;
  if (pAVar1->field_0010 < (uint)(param_7 - *param_6)) {
    uVar5 = pAVar1->field_0010;
  }
  pAVar2 = param_1 + 1;
  param_1 = (AnonShape_0075CF90_FD450D17 *)0x0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)&pAVar2->field_0xe + 4))
            (pAVar3,param_2,param_3,param_4,pAVar1->field_000C,&param_1,uVar5);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)&pAVar3[1].field_0x16 + 4))
            (pAVar3,pAVar1->field_000C,param_5 + *piVar4 * 4,param_1);
  *piVar4 = (int)(&param_1->field_0x0 + *piVar4);
  return;
}

