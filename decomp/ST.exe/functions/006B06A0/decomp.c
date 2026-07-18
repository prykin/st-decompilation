
bool FUN_006b06a0(undefined4 *param_1,LOGPALETTE *param_2,int param_3,UINT param_4,int param_5)

{
  UINT iStart;
  int *piVar1;
  WORD WVar2;
  HDC pHVar3;
  BYTE *pBVar4;
  BYTE *pBVar5;
  HPALETTE pHVar6;
  BYTE BVar7;
  int iVar8;
  LOGPALETTE *pLVar9;
  WORD *pWVar10;
  undefined4 *puVar11;
  LOGPALETTE local_408 [128];
  
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  if ((HGDIOBJ)param_1[0x12d] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x12d]);
    param_1[0x12d] = 0;
  }
  pLVar9 = param_2;
  for (iVar8 = 0x101; iVar8 != 0; iVar8 = iVar8 + -1) {
    pLVar9->palVersion = 0;
    pLVar9->palNumEntries = 0;
    pLVar9 = (LOGPALETTE *)pLVar9->palPalEntry;
  }
  param_2->palVersion = 0x300;
  param_2->palNumEntries = 0x100;
  piVar1 = (int *)param_1[0xf];
  if ((piVar1 == (int *)0x0) ||
     (iVar8 = (**(code **)(*piVar1 + 0x10))(piVar1,0,0,0x100,param_2->palPalEntry), iVar8 != 0)) {
    pHVar3 = GetDC((HWND)0x0);
    GetSystemPaletteEntries(pHVar3,0,0x100,param_2->palPalEntry);
    ReleaseDC((HWND)0x0,pHVar3);
  }
  if (((*(byte *)(param_1 + 2) & 1) == 0) && ((int)param_1[8] < 9)) {
    iVar8 = 0;
    pBVar4 = &param_2->palPalEntry[0].peGreen;
    pWVar10 = &param_2[0x80].palNumEntries;
    pLVar9 = param_2 + 0x80;
    do {
      BVar7 = (BYTE)iVar8;
      ((PALETTEENTRY *)(pBVar4 + -1))->peRed = BVar7;
      *pBVar4 = '\0';
      pBVar4[1] = '\0';
      pBVar4[2] = '\x02';
      iVar8 = iVar8 + 1;
      *(BYTE *)&pLVar9->palVersion = -1 - BVar7;
      *(undefined1 *)((int)pWVar10 + -1) = 0;
      *(undefined1 *)pWVar10 = 0;
      *(undefined1 *)((int)pWVar10 + 1) = 2;
      pBVar4 = pBVar4 + 4;
      pWVar10 = pWVar10 + -2;
      pLVar9 = (LOGPALETTE *)pLVar9[-1].palPalEntry;
    } while (iVar8 < 10);
  }
  if (0 < param_5) {
    pBVar4 = &param_2->palPalEntry[param_4].peBlue;
    pBVar5 = (BYTE *)(param_3 + 2);
    iVar8 = param_5;
    do {
      ((PALETTEENTRY *)(pBVar4 + -2))->peRed = pBVar5[-2];
      pBVar4[-1] = pBVar5[-1];
      *pBVar4 = *pBVar5;
      pBVar4[1] = pBVar5[1] | 4;
      pBVar4 = pBVar4 + 4;
      iVar8 = iVar8 + -1;
      pBVar5 = pBVar5 + 4;
    } while (iVar8 != 0);
  }
  if ((param_1[2] & 0x20000000) == 0) {
    *(undefined1 *)((int)&param_2[0x80].palNumEntries + 1) = 4;
    *(undefined1 *)&param_2[0x80].palVersion = 0xff;
    *(undefined1 *)((int)&param_2[0x80].palVersion + 1) = 0xff;
    *(undefined1 *)&param_2[0x80].palNumEntries = 0xff;
  }
  pHVar6 = CreatePalette(param_2);
  *param_1 = pHVar6;
  if (pHVar6 != (HPALETTE)0x0) {
    pHVar6 = CreatePalette(param_2);
    param_1[0x12d] = pHVar6;
    if (pHVar6 == (HPALETTE)0x0) {
      DeleteObject((HGDIOBJ)*param_1);
      *param_1 = 0;
      return false;
    }
    pLVar9 = local_408;
    for (iVar8 = 0x101; iVar8 != 0; iVar8 = iVar8 + -1) {
      WVar2 = param_2->palNumEntries;
      pLVar9->palVersion = param_2->palVersion;
      pLVar9->palNumEntries = WVar2;
      param_2 = (LOGPALETTE *)param_2->palPalEntry;
      pLVar9 = (LOGPALETTE *)pLVar9->palPalEntry;
    }
    pHVar3 = GetDC((HWND)0x0);
    if (0 < (int)param_4) {
      GetSystemPaletteEntries(pHVar3,0,param_4,local_408[0].palPalEntry);
    }
    iStart = param_4 + param_5;
    if ((int)iStart < 0x100) {
      GetSystemPaletteEntries
                (pHVar3,iStart,(0x100 - param_4) - param_5,local_408[0].palPalEntry + iStart);
    }
    ReleaseDC((HWND)0x0,pHVar3);
    if ((undefined4 *)param_1[0x137] != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)param_1[0x137];
      for (iVar8 = 0x2000; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      puVar11 = (undefined4 *)(param_1[0x137] + 0x8000);
      for (iVar8 = 0x2000; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      pHVar6 = CreatePalette(local_408);
      param_1[0x138] = pHVar6;
      if (pHVar6 == (HPALETTE)0x0) {
        return false;
      }
    }
    iVar8 = FUN_006b0520((int)param_1,(int)local_408[0].palPalEntry,0,0x100);
    return (bool)('\x01' - (iVar8 != 0));
  }
  return false;
}

