
uint FUN_00571dc0(void)

{
  UINT UVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;

  UVar1 = GetLogicalDrives();
  local_10 = 0;
  local_14 = DAT_007ca690;
  local_c = 0;
  iVar2 = 0;
  do {
    local_8 = UVar1;
    if ((UVar1 & 1) != 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14 = CONCAT31(local_14._1_3_,(char)iVar2 + 'A');
      UVar1 = GetDriveTypeA((LPCSTR)&local_14);
      if (UVar1 == 5) break;
    }
    UVar1 = local_8 >> 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT31((int3)(UVar1 >> 8),(CHAR)local_14);
}

