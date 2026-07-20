
void __fastcall FUN_004dc150(AnonShape_004DC150_D7EBDFDF *param_1)

{
  int iVar1;
  AnonShape_004DC150_D7EBDFDF *local_8;
  
  if (param_1->field_04C0 != 0) {
    param_1->field_04C0 = 0;
    local_8 = param_1;
    if ((int *)param_1->field_061F != (int *)0x0) {
      thunk_FUN_00635fd0((int *)param_1->field_061F);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1->field_061F);
      param_1->field_061F = 0;
    }
    iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_04C4,(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_004dbe00(local_8,param_1->field_0018);
    }
  }
  return;
}

