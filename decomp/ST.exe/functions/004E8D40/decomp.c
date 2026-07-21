
void __fastcall FUN_004e8d40(AnonShape_004E8D40_DAF7916C *param_1)

{
  int iVar1;
  AnonShape_004E8D40_DAF7916C *local_8;

  if (*(int *)&param_1->field_0x5ac == 0x6c) {
    local_8 = param_1;
    if ((*(int *)&param_1->field_0x4f8 == 0) && (param_1->field_05D3 != 0)) {
      thunk_FUN_004e8dc0((AnonShape_004E8DC0_1D60A929 *)param_1);
    }
    if ((*(int *)&param_1->field_0x4f8 != 0) && (param_1->field_061B == 0)) {
      iVar1 = FUN_006e62d0(PTR_00802a38,*(int *)&param_1->field_0x4f8,(int *)&local_8);
      if (iVar1 == 0) {
        param_1->field_061B = local_8;
      }
    }
  }
  return;
}

