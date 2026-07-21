
void __fastcall FUN_005c00d0(AnonShape_005C00D0_8BBBA4CC *param_1)

{
  byte bVar1;
  uint local_8;

  bVar1 = 0;
  local_8 = 0;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  do {
    if (*(int *)(&param_1->field_0x8f + local_8 * 4) != 0) {
      param_1->field_0025 = *(int *)(&param_1->field_0x8f + local_8 * 4);
      if (bVar1 == 0) {
        param_1->field_0031 = (uint)(param_1->field_0067 != '\0');
      }
      else {
        param_1->field_0031 = 1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    bVar1 = bVar1 + 1;
    local_8 = (uint)bVar1;
  } while (bVar1 < 4);
  if ((param_1->field_009F != 0) && (param_1->field_0067 != '\0')) {
    param_1->field_0025 = param_1->field_009F;
    param_1->field_0031 = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  return;
}

