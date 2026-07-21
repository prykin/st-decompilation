
void FUN_00757710(AnonShape_00757710_B64D966B *param_1)

{
  Library::DKW::JPG::FUN_00757750((uint)param_1);
  Library::DKW::JPG::FUN_007578f0((int *)param_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)*param_1->field_01AA)(param_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)param_1->field_019A)(param_1);
  *param_1->field_01A2 = *(undefined4 *)(param_1->field_019A + 4);
  return;
}

