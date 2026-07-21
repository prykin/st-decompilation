
void FUN_0074bce4(AnonShape_0074BCE4_7F8B87E9 *param_1)

{
  int *piVar1;

  if (param_1->field_0040 != 0) {
    CoTaskMemFree((LPVOID)param_1->field_0044);
    param_1->field_0040 = 0;
    param_1->field_0044 = 0;
  }
  piVar1 = (int *)param_1->field_003C;
  if (piVar1 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_003C = 0;
  }
  return;
}

