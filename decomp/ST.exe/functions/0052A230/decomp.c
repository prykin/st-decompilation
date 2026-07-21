
undefined4 __cdecl FUN_0052a230(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    return 9;
  case 1:
    uVar1 = 7;
    break;
  case 2:
  case 3:
    return 8;
  }
  return uVar1;
}

