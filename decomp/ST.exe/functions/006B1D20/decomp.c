
void FUN_006b1d20(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 < 0) {
    param_2 = 10;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x11c + param_2 * 8);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_3[1] = *(undefined4 *)(param_1 + 0x120 + param_2 * 8);
  return;
}

