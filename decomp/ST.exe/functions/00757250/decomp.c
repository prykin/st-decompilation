
void FUN_00757250(AnonShape_00757250_D85D8BF6 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_0192;
  if (param_1->field_004C != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(param_1->field_01BA + 8))(param_1);
  }
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}

