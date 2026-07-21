
undefined4 __fastcall FUN_0074a36e(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return uVar2;
}

