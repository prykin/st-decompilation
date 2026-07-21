
int __fastcall FUN_00419bf0(int *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((iVar1 == 0) && (param_1[0x3d] == 1)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x20))();
    param_1[0x3d] = 0;
    iVar1 = 1;
  }
  return iVar1;
}

