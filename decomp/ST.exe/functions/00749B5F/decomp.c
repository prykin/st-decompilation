
void __fastcall FUN_00749b5f(int *param_1)

{
  *param_1 = (int)&VTable_007A13D0;
  param_1[3] = (int)&VTable_007A1390;
  param_1[4] = (int)&VTable_007A1378;
  FUN_0074a7e3(param_1);
  FUN_0074a5d8((int)param_1);
  if (param_1[0x14] != 0) {
    (**(code **)(*(int *)(param_1[0x14] + 8) + 0xc))(1);
    param_1[0x14] = 0;
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 0xc))(1);
    param_1[0x1e] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  FUN_0074d204(param_1 + 0x17);
  FUN_0074d204(param_1 + 0x16);
  FUN_0074d204(param_1 + 0x15);
  FUN_00746f77((AnonShape_00746F77_1F40C93D *)param_1);
  return;
}

