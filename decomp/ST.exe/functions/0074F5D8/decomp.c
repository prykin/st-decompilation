
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0074f5d8(int param_1,double *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  if (param_2 == (double *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
    EnterCriticalSection(lpCriticalSection);
    *param_2 = (double)*(longlong *)(param_1 + 0x18) * _DAT_007a1bf8;
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

