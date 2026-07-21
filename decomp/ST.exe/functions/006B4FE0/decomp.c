
int FUN_006b4fe0(int param_1)

{
  ushort uVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(ushort *)(param_1 + 0xe);
    if ((uVar1 != 0) && (uVar1 < 9)) {
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
    }
  }
  return iVar2;
}

