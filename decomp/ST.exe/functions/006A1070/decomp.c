
int __cdecl FUN_006a1070(ushort param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (param_1 == (&DAT_007df808)[(short)iVar1]) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 0xf);
  iVar1 = 0;
  do {
    if ((((&DAT_007df808)[(short)iVar1] ^ param_1) & 0xf00) == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 0xf);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT22((short)((uint)iVar1 >> 0x10),0xffff);
}

