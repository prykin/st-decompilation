
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006D7330 -> 0074CEB2 @ 006D733D | 0074CEB2 -> EXTERNAL:00000019 @ 0074CF11 | 0074CEB2
   -> EXTERNAL:00000019 @ 0074CF1E */

int FUN_0074ceb2(AnonShape_0074CEB2_D881A5E3 *param_1,int *lpCriticalSection,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar1;
  void *this;
  int iVar2;

  if (lpCriticalSection == (int *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    param_1->field_004C = param_3;
    lpCriticalSection_00 = *(LPCRITICAL_SECTION *)&param_1[-1].field_0x20;
    EnterCriticalSection(lpCriticalSection_00);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*lpCriticalSection + 4))(lpCriticalSection);
    piVar1 = param_1->field_0004;
    if (piVar1 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    param_1->field_0004 = lpCriticalSection;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this = *(void **)(param_1->field_0048 + 0x90);
    if ((*(int *)((int)this + 0x18) != 0) &&
       (iVar2 = FUN_0074d156(this,lpCriticalSection,param_3), iVar2 < 0)) {
      LeaveCriticalSection(lpCriticalSection_00);
      return iVar2;
    }
    LeaveCriticalSection(lpCriticalSection_00);
    iVar2 = 0;
  }
  return iVar2;
}

