
void __fastcall FUN_0074be28(AnonShape_0074BE28_A72B0079 *param_1)

{
  if (param_1->field_008C != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_008C + 0xc))(1);
  }
  if (param_1->field_0090 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_0090 + 0xc))(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x74);
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x5c);
  FUN_00746f77((AnonShape_00746F77_1F40C93D *)param_1);
  return;
}

