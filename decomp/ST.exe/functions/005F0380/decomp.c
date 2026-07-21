
undefined4 __fastcall FUN_005f0380(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x2b1)) {
  case 0:
  case 3:
    return 1;
  case 1:
  case 4:
    return 2;
  case 2:
  case 5:
    return 3;
  default:
    return 0;
  }
}

