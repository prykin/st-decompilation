
void __fastcall FUN_0069ff90(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if (*(code **)(param_1 + 0x24a) != (code *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(param_1 + 0x24a))(0);
  }
  return;
}

