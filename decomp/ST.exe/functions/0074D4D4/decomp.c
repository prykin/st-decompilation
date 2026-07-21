
int FUN_0074d4d4(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  CoInitialize((LPVOID)0x0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 4))();
  do {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*param_1)(&local_14);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 8))(local_14,local_10,local_c,local_8);
  } while (iVar1 == 0);
  CoUninitialize();
  return iVar1;
}

