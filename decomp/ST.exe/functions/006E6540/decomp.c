
void FUN_006e6540(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  if (param_4 != -2) {
    if (param_4 == -1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_4 = *(byte *)(param_1 + 0x16) + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((int)(uint)*(byte *)(param_1 + 0x17) <= param_4) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_4 = param_4 % (int)(uint)*(byte *)(param_1 + 0x17);
    }
    *(char *)(param_1 + 0x16) = (char)param_4;
  }
  return;
}

