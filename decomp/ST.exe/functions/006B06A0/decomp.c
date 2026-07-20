
bool FUN_006b06a0(undefined4 *param_1,LOGPALETTE *param_2,int param_3,UINT param_4,int param_5)

{
  UINT iStart;
  int *piVar1;
  HDC pHVar2;
  BYTE *pBVar3;
  BYTE *pBVar4;
  HPALETTE pHVar5;
  BYTE BVar6;
  int iVar7;
  LOGPALETTE *pLVar8;
  WORD *pWVar9;
  tagLOGPALETTE **pptVar10;
  undefined4 *puVar11;
  tagLOGPALETTE *local_408;
  tagPALETTEENTRY *local_404;
  
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  if ((HGDIOBJ)param_1[0x12d] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x12d]);
    param_1[0x12d] = 0;
  }
  pLVar8 = param_2;
  for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
    pLVar8->palVersion = 0;
    pLVar8->palNumEntries = 0;
    pLVar8 = (LOGPALETTE *)pLVar8->palPalEntry;
  }
  param_2->palVersion = 0x300;
  param_2->palNumEntries = 0x100;
  piVar1 = (int *)param_1[0xf];
  if ((piVar1 == (int *)0x0) ||
     (iVar7 = (**(code **)(*piVar1 + 0x10))(piVar1,0,0,0x100,param_2->palPalEntry), iVar7 != 0)) {
    pHVar2 = GetDC((HWND)0x0);
    GetSystemPaletteEntries(pHVar2,0,0x100,param_2->palPalEntry);
    ReleaseDC((HWND)0x0,pHVar2);
  }
  if (((*(byte *)(param_1 + 2) & 1) == 0) && ((int)param_1[8] < 9)) {
    iVar7 = 0;
    pBVar3 = &param_2->palPalEntry[0].peGreen;
    pWVar9 = &param_2[0x80].palNumEntries;
    pLVar8 = param_2 + 0x80;
    do {
      BVar6 = (BYTE)iVar7;
      ((PALETTEENTRY *)(pBVar3 + -1))->peRed = BVar6;
      *pBVar3 = '\0';
      pBVar3[1] = '\0';
      pBVar3[2] = '\x02';
      iVar7 = iVar7 + 1;
      *(BYTE *)&pLVar8->palVersion = -1 - BVar6;
      *(undefined1 *)((int)pWVar9 + -1) = 0;
      *(undefined1 *)pWVar9 = 0;
      *(undefined1 *)((int)pWVar9 + 1) = 2;
      pBVar3 = pBVar3 + 4;
      pWVar9 = pWVar9 + -2;
      pLVar8 = (LOGPALETTE *)pLVar8[-1].palPalEntry;
    } while (iVar7 < 10);
  }
  if (0 < param_5) {
    pBVar3 = &param_2->palPalEntry[param_4].peBlue;
    pBVar4 = (BYTE *)(param_3 + 2);
    iVar7 = param_5;
    do {
      ((PALETTEENTRY *)(pBVar3 + -2))->peRed = pBVar4[-2];
      pBVar3[-1] = pBVar4[-1];
      *pBVar3 = *pBVar4;
      pBVar3[1] = pBVar4[1] | 4;
      pBVar3 = pBVar3 + 4;
      iVar7 = iVar7 + -1;
      pBVar4 = pBVar4 + 4;
    } while (iVar7 != 0);
  }
  if ((param_1[2] & 0x20000000) == 0) {
    *(undefined1 *)((int)&param_2[0x80].palNumEntries + 1) = 4;
    *(undefined1 *)&param_2[0x80].palVersion = 0xff;
    *(undefined1 *)((int)&param_2[0x80].palVersion + 1) = 0xff;
    *(undefined1 *)&param_2[0x80].palNumEntries = 0xff;
  }
  pHVar5 = CreatePalette(param_2);
  *param_1 = pHVar5;
  if (pHVar5 != (HPALETTE)0x0) {
    pHVar5 = CreatePalette(param_2);
    param_1[0x12d] = pHVar5;
    if (pHVar5 == (HPALETTE)0x0) {
      DeleteObject((HGDIOBJ)*param_1);
      *param_1 = 0;
      return false;
    }
    pptVar10 = &local_408;
    for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pptVar10 = *(tagLOGPALETTE **)param_2;
      param_2 = (LOGPALETTE *)param_2->palPalEntry;
      pptVar10 = pptVar10 + 1;
    }
    pHVar2 = GetDC((HWND)0x0);
    if (0 < (int)param_4) {
      GetSystemPaletteEntries(pHVar2,0,param_4,(LPPALETTEENTRY)&local_404);
    }
    iStart = param_4 + param_5;
    if ((int)iStart < 0x100) {
      GetSystemPaletteEntries
                (pHVar2,iStart,(0x100 - param_4) - param_5,(LPPALETTEENTRY)(&local_404 + iStart));
    }
    ReleaseDC((HWND)0x0,pHVar2);
    if ((undefined4 *)param_1[0x137] != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)param_1[0x137];
      for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      puVar11 = (undefined4 *)(param_1[0x137] + 0x8000);
      for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      pHVar5 = CreatePalette((LOGPALETTE *)&local_408);
      param_1[0x138] = pHVar5;
      if (pHVar5 == (HPALETTE)0x0) {
        return false;
      }
    }
    iVar7 = FUN_006b0520((int)param_1,(int)&local_404,0,0x100);
    return (bool)('\x01' - (iVar7 != 0));
  }
  return false;
}

