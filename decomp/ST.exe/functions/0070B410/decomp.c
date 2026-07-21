
undefined4 __cdecl FUN_0070b410(int param_1)

{
  *(short *)(param_1 + 0x29) = *(short *)(param_1 + 0x29) + -1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < *(short *)(param_1 + 0x29)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)(param_1 + 0x30 + *(short *)(param_1 + 0x29) * 4);
  }
  return 0;
}

