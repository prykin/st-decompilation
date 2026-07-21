
undefined4 __fastcall FUN_00626ec0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined1 *)(param_1 + 0x2ad)) {
  case 0:
    return 0xa6;
  case 1:
    return 0xa7;
  case 2:
    return 0xbd;
  case 3:
    uVar1 = 0xaf;
  }
  return uVar1;
}

