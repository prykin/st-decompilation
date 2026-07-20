
void __fastcall FUN_0074931d(AnonShape_0074931D_CA8B6F7D *param_1)

{
  if (param_1->field_0034 != 0) {
    ReleaseSemaphore(param_1->field_0030,param_1->field_0034,(LPLONG)0x0);
    param_1->field_0034 = 0;
  }
  return;
}

