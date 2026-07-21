
undefined4 FUN_00749299(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_2 == 0) {
    uVar2 = 0x80004003;
  }
  else {
    bVar1 = false;
    lpCriticalSection =
         (LPCRITICAL_SECTION)(-(uint)(param_1 != (int *)&DAT_0000000c) & (uint)(param_1 + 1));
    EnterCriticalSection(lpCriticalSection);
    *(int *)(param_2 + 0x1c) = param_1[7];
    param_1[8] = param_1[8] + 1;
    param_1[7] = param_2;
    if (param_1[10] != 0) {
      FUN_0074931d((AnonShape_0074931D_CA8B6F7D *)(param_1 + -3));
    }
    if ((param_1[0x12] != 0) && (param_1[8] == param_1[0xc])) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(param_1[-3] + 0x10))();
      param_1[0x12] = 0;
      bVar1 = true;
    }
    LeaveCriticalSection(lpCriticalSection);
    if (bVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 8))(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

