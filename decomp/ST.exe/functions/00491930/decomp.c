
undefined4 __fastcall FUN_00491930(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x6f7);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((iVar1 != 7) && (iVar1 != 0x13)) && (iVar1 != 0x1b)) &&
     (((iVar1 != 9 && (iVar1 != 0x15)) &&
      ((*(int *)(param_1 + 0x45d) != 0x14 || (*(int *)(param_1 + 0x5c0) != 3)))))) {
    return 1;
  }
  return 0;
}

