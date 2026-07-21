
undefined4 __cdecl FUN_0052a0d0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    return 3;
  }
  return uVar1;
}

