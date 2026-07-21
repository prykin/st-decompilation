
void __fastcall FUN_005a07f0(AnonShape_005A07F0_323FD806 *param_1)

{
  SetAccelerator(0,param_1->field_0008,2,0xc0a5,2,0x4000002f,0,0,0,0,0,0);
  SetAccelerator(0,param_1->field_0008,2,0xc0a4,2,0x8000031,0,0,0,0,0,0);
  SetAccelerator(0,param_1->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  if (param_1->field_1B10 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1B10);
  }
  param_1->field_1B10 = 0;
  if (param_1->field_1B14 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1B14);
  }
  param_1->field_1B14 = 0;
  if (param_1->field_1B18 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1B18);
  }
  param_1->field_1B18 = 0;
  if (param_1->field_1B1C != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1B1C);
  }
  param_1->field_1B1C = 0;
  if (param_1->field_1B20 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1B20);
  }
  param_1->field_1B20 = 0;
  if (param_1->field_1B24 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1B24);
  }
  param_1->field_1B24 = 0;
  if (param_1->field_1AC4 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1AC4);
  }
  param_1->field_1AC4 = 0;
  if (param_1->field_1AC8 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_1AC8);
  }
  param_1->field_1AC8 = 0;
  if ((AnonShape_006B5570_4D68B99C *)param_1->field_1EA2 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)param_1->field_1EA2);
  }
  param_1->field_1EA2 = 0;
  if ((AnonShape_006B5570_4D68B99C *)param_1->field_1AE8 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)param_1->field_1AE8);
  }
  param_1->field_1AE8 = 0;
  if ((AnonShape_006B5570_4D68B99C *)param_1->field_1AEC != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)param_1->field_1AEC);
  }
  param_1->field_1AEC = 0;
  if ((DArrayTy *)param_1->field_1EA6 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)param_1->field_1EA6);
  }
  param_1->field_1EA6 = 0;
  if ((DArrayTy *)param_1->field_1EAA != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)param_1->field_1EAA);
  }
  param_1->field_1EAA = 0;
  if (param_1->field_1E8E != 0) {
    FreeAndNull((void **)&param_1->field_1E8E);
  }
  if (param_1->field_1E92 != 0) {
    FreeAndNull((void **)&param_1->field_1E92);
  }
  if (param_1->field_1E9A != 0) {
    FreeAndNull((void **)&param_1->field_1E9A);
  }
  return;
}

