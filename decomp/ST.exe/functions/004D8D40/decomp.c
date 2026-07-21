
undefined4 __fastcall FUN_004d8d40(int param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = (STJellyGunC *)0x0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4f0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = FUN_006e62d0(PTR_00802a38,*(int *)(param_1 + 0x4f0),(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_0058bb50(local_8);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x4f0) = 0;
  }
  return 0;
}

