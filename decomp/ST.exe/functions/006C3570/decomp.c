
void FUN_006c3570(AnonShape_006C3570_37024033 *param_1)

{
  int *piVar1;
  
  if (param_1 != (AnonShape_006C3570_37024033 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[9].field_0040);
    if ((param_1->field_0004 & 0x20000000) != 0) {
      Library::DKW::DV::FUN_006c4110((AnonShape_006C3FC0_72DDFA27 *)param_1);
    }
    if ((param_1->field_0004 & 0x40000000) != 0) {
      FUN_006c3f00((int)param_1);
    }
    if ((HANDLE)param_1->field_0084 != (HANDLE)0x0) {
      TerminateThread((HANDLE)param_1->field_0084,0);
      param_1->field_0084 = 0;
    }
    piVar1 = (int *)param_1->field_0058;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_0058 = 0;
    }
    piVar1 = (int *)param_1->field_0054;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_0054 = 0;
    }
    if ((int *)param_1->field_0040 != (int *)0x0) {
      FUN_006d4f50((int *)param_1->field_0040);
    }
    param_1->field_0040 = 0;
    if ((int *)param_1->field_0044 != (int *)0x0) {
      FUN_006d4f50((int *)param_1->field_0044);
    }
    param_1->field_0044 = 0;
    param_1->field_0074 = 0;
    param_1->field_0004 = param_1->field_0004 & 0x7ffffffe;
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[9].field_0040);
  }
  return;
}

