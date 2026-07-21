
void __fastcall FUN_0074aaf7(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x8c))();
  if (-1 < iVar1) {
    FUN_00747f91();
  }
  return;
}

