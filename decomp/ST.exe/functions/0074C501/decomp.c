
/* [STVTableApplier] Virtual slot 0079DE90+0x3C

   [STVTableApplier] Virtual slot 007A1780+0x3C

   [STVTableApplier] Virtual slot 007A1908+0x3C */

int FUN_0074c501(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (*(int *)(*(int *)(*(int *)(param_1 + 0xcc) + 0x90) + 0x18) == 0)) {
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = -0x7ffbfdf7;
  }
  else {
    iVar1 = FUN_00748946(param_1);
    if (iVar1 < 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x5c))();
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return iVar1;
}

