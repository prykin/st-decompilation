
undefined4 FUN_00749a5e(int param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(ushort *)(param_1 + 0x3e) < 9) || (*(int *)(param_1 + 0x50) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

