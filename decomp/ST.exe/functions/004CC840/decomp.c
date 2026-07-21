
undefined4 __fastcall FUN_004cc840(int *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  if ((-1 < iVar1 / 0x14) && (iVar1 / 0x14 < 4)) {
    thunk_FUN_004cc880(param_1,1);
  }
  return 0;
}

