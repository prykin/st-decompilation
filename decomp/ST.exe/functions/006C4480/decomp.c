
void FUN_006c4480(AnonShape_006C4480_8B824940 *param_1,undefined4 *param_2)

{
  if ((param_1->field_0008 & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x2c);
  }
  *param_2 = param_1->field_0040;
  param_2[2] = param_1->field_0010;
  param_2[3] = param_1->field_0014;
  param_2[1] = param_1->field_04C0;
  if ((param_1->field_0008 & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x2c);
  }
  return;
}

