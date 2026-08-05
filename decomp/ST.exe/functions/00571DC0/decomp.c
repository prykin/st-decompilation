
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
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)((char)iVar2 + 'A'));
      UVar1 = GetDriveTypeA((LPCSTR)&local_14);
      if (UVar1 == 5) break;
    }
    UVar1 = local_8 >> 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return STReplaceLowByte((uint32_t)(UVar1), (uint8_t)((CHAR)local_14));
}

