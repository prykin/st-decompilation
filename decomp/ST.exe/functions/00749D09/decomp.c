
undefined4 __fastcall FUN_00749d09(int *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  HANDLE local_c;
  int local_8;

  local_c = (HANDLE)param_1[0x16];
  local_8 = param_1[0x15];
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x48))();
  do {
    DVar1 = WaitForMultipleObjects(2,&local_c,0,10000);
  } while (DVar1 == 0x102);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x4c))();
  if (DVar1 == 0) {
    uVar2 = 0x80040223;
  }
  else {
    FUN_0074a277((int)param_1);
    uVar2 = 0;
  }
  return uVar2;
}

