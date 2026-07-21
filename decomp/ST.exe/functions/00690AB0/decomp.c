
void __fastcall FUN_00690ab0(AnonShape_00690AB0_91AAAD49 *param_1)

{
  int iVar1;

  if ((param_1->field_0089 == 0) ||
     ((uint)(param_1->field_008D + param_1->field_0089) <= (uint)param_1->field_012C)) {
    param_1->field_008D = param_1->field_012C;
    iVar1 = thunk_FUN_006777d0(CASE_DE,0,0,0,-1,-1);
    param_1->field_0134 = iVar1;
    iVar1 = thunk_FUN_006777d0(CASE_DD,0,0,0,-1,-1);
    param_1->field_0138 = iVar1;
    iVar1 = thunk_FUN_006777d0(CASE_E1,0,0,0,-1,-1);
    param_1->field_013C = iVar1;
    iVar1 = thunk_FUN_006777d0(CASE_E2,0,0,0,-1,-1);
    param_1->field_0140 = iVar1;
  }
  return;
}

