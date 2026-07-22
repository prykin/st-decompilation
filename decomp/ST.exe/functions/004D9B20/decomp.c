
undefined4 __fastcall FUN_004d9b20(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004d87b0(*(char *)(param_1 + 0x24),*(int *)(param_1 + 0x4d0));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004d78e0(*(char *)(param_1 + 0x24));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(uint *)(param_1 + 0x4d4) = g_playSystem_00802A38->field_00E4;
  }
  return 0;
}

