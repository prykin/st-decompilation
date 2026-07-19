
HPALETTE FUN_006d7cf0(LOGPALETTE *param_1)

{
  HDC hdc;
  BYTE *pBVar1;
  HPALETTE pHVar2;
  DWORD DVar3;
  int iVar4;
  char *sourceFile;
  int sourceLine;
  
  param_1->palVersion = 0x300;
  param_1->palNumEntries = 0x100;
  hdc = GetDC((HWND)0x0);
  GetSystemPaletteEntries(hdc,0,10,param_1->palPalEntry);
  GetSystemPaletteEntries(hdc,0xf6,10,param_1[0x7b].palPalEntry);
  ReleaseDC((HWND)0x0,hdc);
  pBVar1 = &param_1[5].palPalEntry[0].peFlags;
  iVar4 = 0xec;
  do {
    *pBVar1 = '\x04';
    pBVar1 = pBVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pHVar2 = CreatePalette(param_1);
  if (pHVar2 == (HPALETTE)0x0) {
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      sourceLine = 0x19;
      sourceFile = s_E__DKW_WGR_C_palsync_c_007ee2b8;
      iVar4 = DAT_007ed77c;
      DVar3 = GetLastError();
      RaiseInternalException(DVar3,iVar4,sourceFile,sourceLine);
      return (HPALETTE)0x0;
    }
  }
  return pHVar2;
}

