
void __fastcall FUN_005fb100(AnonShape_005FB100_42251CC8 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  uVar6 = 0;
  iVar1 = (int)param_1->field_0045;
  iVar3 = (int)param_1->field_0043;
  iVar4 = (int)param_1->field_0041;
  iVar5 = 0;
  uVar2 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
  thunk_FUN_006377b0(uVar2,iVar5,iVar4,iVar3,iVar1,uVar6);
  iVar1 = PTR_00802a38->field_00E4;
  param_1->field_02DD = 7;
  param_1->field_02E1 = iVar1 + 0x15;
  return;
}

