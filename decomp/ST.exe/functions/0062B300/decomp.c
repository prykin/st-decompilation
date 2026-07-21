
undefined4 __fastcall FUN_0062b300(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined1 *)(param_1 + 0x15)) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    if (*(byte *)(param_1 + 0x14) < 4) {
      return 1;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 2:
  case 8:
    if (*(byte *)(param_1 + 0x14) < 7) {
      return 1;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x80:
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

