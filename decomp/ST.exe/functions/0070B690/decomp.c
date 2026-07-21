
undefined4 __cdecl FUN_0070b690(short *param_1)

{
  param_1[3] = param_1[3] + 1;
  if (param_1[3] < *param_1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)((int)param_1 + param_1[3] * 4 + 0x11);
  }
  return 0;
}

