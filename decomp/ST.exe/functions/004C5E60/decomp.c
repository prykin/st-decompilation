
undefined4 __fastcall FUN_004c5e60(int param_1)

{
  int iVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4d0) != 0) {
    local_8 = param_1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = FUN_006e62d0(PTR_00802a38,*(int *)(param_1 + 0x4d0),&local_8);
    if (iVar1 == 0) {
      thunk_FUN_00581b80(local_8);
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  return 0;
}

