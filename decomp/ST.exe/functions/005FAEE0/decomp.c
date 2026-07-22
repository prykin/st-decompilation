
bool __fastcall FUN_005faee0(AnonShape_005FAEE0_B5D482C5 *param_1)

{
  AnonNested_005FAEE0_02E6_E37EB1FC *pAVar1;
  int iVar2;
  int iVar3;

  pAVar1 = param_1->field_02E6;
  if (pAVar1 == (AnonNested_005FAEE0_02E6_E37EB1FC *)0x0) {
    return true;
  }
  iVar3 = pAVar1->field_0060 -
          (g_playSystem_00802A38->field_00E4 - pAVar1->field_0068) * pAVar1->field_0064;
  iVar2 = pAVar1->field_003C;
  pAVar1->field_001C = iVar3;
  pAVar1 = param_1->field_02E6;
  pAVar1->field_0014 = pAVar1->field_0014 + pAVar1->field_0050;
  pAVar1 = param_1->field_02E6;
  pAVar1->field_0018 = pAVar1->field_0018 + pAVar1->field_0054;
  return iVar3 < iVar2;
}

