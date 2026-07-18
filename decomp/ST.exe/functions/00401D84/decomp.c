
uint thunk_FUN_00571dc0(void)

{
  UINT UVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint uStack_8;
  
  UVar1 = GetLogicalDrives();
  uStack_10 = 0;
  uStack_14 = DAT_007ca690;
  uStack_c = 0;
  iVar2 = 0;
  do {
    uStack_8 = UVar1;
    if ((UVar1 & 1) != 0) {
      uStack_14 = CONCAT31(uStack_14._1_3_,(char)iVar2 + 'A');
      UVar1 = GetDriveTypeA((LPCSTR)&uStack_14);
      if (UVar1 == 5) break;
    }
    UVar1 = uStack_8 >> 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return CONCAT31((int3)(UVar1 >> 8),(CHAR)uStack_14);
}

