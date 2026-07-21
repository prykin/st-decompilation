
void __fastcall FUN_005fa070(int *param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x2dd) == 5) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x20))();
    thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
  }
  thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)param_1);
  return;
}

