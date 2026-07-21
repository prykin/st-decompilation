
void FUN_00440700(int param_1)

{
  undefined1 local_24 [12];
  undefined4 local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = (param_1 != 0) + 0x112;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0018)(local_24);
  return;
}

