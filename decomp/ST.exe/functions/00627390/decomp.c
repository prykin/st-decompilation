
void __fastcall FUN_00627390(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x2ae) == 0) || (*(int *)(param_1 + 0x2ae) == 1)) {
    *(undefined4 *)(param_1 + 0x2ae) = 2;
    *(int *)(param_1 + 0x30f) =
         /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
         ((int)(*(int *)(&DAT_007d02a4 + (uint)*(byte *)(param_1 + 0x2ad) * 4) +
               (*(int *)(&DAT_007d02a4 + (uint)*(byte *)(param_1 + 0x2ad) * 4) >> 0x1f & 3U)) >> 2)
         + PTR_00802a38->field_00E4;
  }
  return;
}

