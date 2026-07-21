
void __fastcall FUN_0074a612(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  if (param_1[0x30] != 0) {
    param_1[0x30] = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x60))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  return;
}

