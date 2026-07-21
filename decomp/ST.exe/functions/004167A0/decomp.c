
void __fastcall FUN_004167a0(AnonShape_004167A0_C6E28A87 *param_1)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_007901d0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (param_1->field_0097 != (LPVOID)0x0) {
    ExceptionList = &local_14;
    FreeAndNull(&param_1->field_0097);
    param_1->field_009B = 0;
    param_1->field_00D3 = 0;
    param_1->field_00E3 = 0;
  }
  ExceptionList = local_14;
  return;
}

