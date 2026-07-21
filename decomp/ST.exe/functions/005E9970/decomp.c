
void __fastcall FUN_005e9970(AnonShape_005E9970_7C1AA6F1 *param_1)

{
  param_1->field_1A60 = 1;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  if (PTR_0081176c->field_0389 != 0) {
    param_1->field_0025 = PTR_0081176c->field_0389;
    param_1->field_0031 = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  if (PTR_0081176c->field_0550 != 0) {
    param_1->field_0025 = PTR_0081176c->field_0550;
    param_1->field_0031 = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  if (PTR_0081176c->field_054C != 0) {
    param_1->field_0025 = PTR_0081176c->field_054C;
    param_1->field_002D = 0x29;
    param_1->field_0031 = 9;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  return;
}

