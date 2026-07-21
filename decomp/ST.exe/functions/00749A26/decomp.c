
int FUN_00749a26(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *param_1 + 0x30;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(ushort *)((int)param_1 + 0xe) < 9) || (param_1[8] != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = 1 << ((byte)*(ushort *)((int)param_1 + 0xe) & 0x1f);
    if (param_1[8] != 0) {
      iVar2 = param_1[8];
    }
    iVar1 = iVar1 + iVar2 * 4;
  }
  if (param_1[4] == 3) {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}

