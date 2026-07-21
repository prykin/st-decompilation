
void __fastcall FUN_0074ae67(int *param_1)

{
  DWORD DVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0xb4))(param_1[0x4e],param_1[0x4f]);
  DVar1 = timeGetTime();
  param_1[0x39] = DVar1;
  return;
}

