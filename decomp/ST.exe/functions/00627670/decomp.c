
undefined4 __fastcall FUN_00627670(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined1 *)(param_1 + 0x2ad)) {
  case 0:
    return DAT_007e65a8;
  case 1:
    return DAT_007e65bc;
  case 2:
    return DAT_007e6774;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 3:
    uVar1 = *(undefined4 *)(&DAT_007d0284 + *(int *)(param_1 + 0x34e) * 4);
  }
  return uVar1;
}

