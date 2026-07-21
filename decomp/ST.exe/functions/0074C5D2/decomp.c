
int FUN_0074c5d2(int param_1,int *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0x40) + 0x74);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = FUN_00748721(param_1,param_2);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x54))(param_2);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

