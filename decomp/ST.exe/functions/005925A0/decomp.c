
void __fastcall FUN_005925a0(AnonShape_005925A0_ACA54D35 *param_1)

{
  int *piVar1;
  int local_8;

  local_8 = 0xd;
  param_1->field_1FF8 = 1;
  piVar1 = (int *)&param_1->field_0x66;
  do {
    if (*piVar1 != 0) {
      param_1->field_0025 = *piVar1;
      param_1->field_0029 = 2;
      param_1->field_002D = 0x20;
      param_1->field_0031 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar1 = piVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

