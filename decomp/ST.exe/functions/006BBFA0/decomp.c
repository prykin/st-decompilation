
BITMAPINFO * FUN_006bbfa0(BITMAPINFO *param_1,undefined4 *param_2,HPALETTE param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  HDC hdc;
  RGBQUAD *pRVar3;
  HDC hdc_00;
  HBITMAP h;
  BYTE *pBVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  RGBQUAD *pRVar8;
  tagPALETTEENTRY local_41c [256];
  HBITMAP local_1c;
  undefined4 *local_18;
  HPALETTE local_14;
  HGDIOBJ local_10;
  DWORD local_c;
  BITMAPINFO *local_8;
  
  local_10 = (HGDIOBJ)0x0;
  local_14 = (HPALETTE)0x0;
  local_8 = (BITMAPINFO *)0x0;
  local_c = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_006b4fa0((int)param_1);
  }
  uVar1 = (param_1->bmiHeader).biHeight;
  uVar5 = (int)uVar1 >> 0x1f;
  iVar6 = (uVar1 ^ uVar5) - uVar5;
  if ((param_1->bmiHeader).biBitCount != 8) {
    hdc = GetDC((HWND)0x0);
    local_8 = (BITMAPINFO *)FUN_006d10f0((param_1->bmiHeader).biWidth,iVar6,8,0x100,1);
    if (local_8 == (BITMAPINFO *)0x0) {
      local_c = 0xfffffffe;
    }
    else {
      if (param_3 == (HPALETTE)0x0) {
        GetSystemPaletteEntries(hdc,0,0x100,local_41c);
      }
      else {
        GetPaletteEntries(param_3,0,0x100,local_41c);
      }
      iVar6 = 0x100;
      pRVar3 = local_8->bmiColors;
      pBVar4 = &local_41c[0].peGreen;
      do {
        pRVar3->rgbRed = ((tagPALETTEENTRY *)(pBVar4 + -1))->peRed;
        pRVar3->rgbGreen = *pBVar4;
        pRVar3->rgbBlue = pBVar4[1];
        pRVar3->rgbReserved = '\0';
        pRVar3 = pRVar3 + 1;
        iVar6 = iVar6 + -1;
        pBVar4 = pBVar4 + 4;
      } while (iVar6 != 0);
      hdc_00 = CreateCompatibleDC(hdc);
      h = CreateDIBSection(hdc_00,local_8,0,&local_18,(HANDLE)0x0,0);
      local_1c = h;
      if (param_3 != (HPALETTE)0x0) {
        local_14 = SelectPalette(hdc_00,param_3,1);
      }
      if (h == (HBITMAP)0x0) {
        local_c = 0xffffff03;
      }
      else {
        local_10 = SelectObject(hdc_00,h);
        if (local_10 == (HGDIOBJ)0x0) {
          local_c = 0xffffff03;
        }
        else {
          FUN_006d0390(hdc_00,0,0,param_1,param_2);
          DVar7 = (local_8->bmiHeader).biSizeImage;
          if (DVar7 == 0) {
            DVar7 = ((uint)(local_8->bmiHeader).biBitCount * (local_8->bmiHeader).biWidth + 0x1f >>
                     3 & 0x1ffffffc) * (local_8->bmiHeader).biHeight;
          }
          puVar2 = (undefined4 *)FUN_006b4fa0((int)local_8);
          for (uVar1 = DVar7 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *local_18;
            local_18 = local_18 + 1;
            puVar2 = puVar2 + 1;
          }
          for (uVar1 = DVar7 & 3; h = local_1c, uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined1 *)puVar2 = *(undefined1 *)local_18;
            local_18 = (undefined4 *)((int)local_18 + 1);
            puVar2 = (undefined4 *)((int)puVar2 + 1);
          }
        }
      }
      if (local_14 != (HPALETTE)0x0) {
        SelectPalette(hdc_00,local_14,1);
      }
      if (local_10 != (HGDIOBJ)0x0) {
        SelectObject(hdc_00,local_10);
      }
      if (h != (HBITMAP)0x0) {
        DeleteObject(h);
      }
      if (hdc_00 != (HDC)0x0) {
        DeleteObject(hdc_00);
      }
    }
    if (hdc != (HDC)0x0) {
      ReleaseDC((HWND)0x0,hdc);
    }
    DVar7 = local_c;
    if (local_c != 0) {
      FUN_006ab060(&local_8);
      if ((DVar7 == 0xffffff03) && (local_c = GetLastError(), local_c == 0)) {
        local_c = DVar7;
      }
      RaiseInternalException(local_c,DAT_007ed77c,s_E__DKW_WGR_C_dibto8_cpp_007edc5c,0x52);
    }
    return local_8;
  }
  uVar1 = FUN_006b4fe0((int)param_1);
  local_8 = (BITMAPINFO *)FUN_006d10f0((param_1->bmiHeader).biWidth,iVar6,8,uVar1,1);
  if (local_8 != (BITMAPINFO *)0x0) {
    pRVar3 = param_1->bmiColors;
    pRVar8 = local_8->bmiColors;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pRVar8 = *pRVar3;
      pRVar3 = pRVar3 + 1;
      pRVar8 = pRVar8 + 1;
    }
    DVar7 = (local_8->bmiHeader).biSizeImage;
    if (DVar7 == 0) {
      DVar7 = ((uint)(local_8->bmiHeader).biBitCount * (local_8->bmiHeader).biWidth + 0x1f >> 3 &
              0x1ffffffc) * (local_8->bmiHeader).biHeight;
    }
    puVar2 = (undefined4 *)FUN_006b4fa0((int)local_8);
    for (uVar1 = DVar7 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = DVar7 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    FUN_006c7f90((int)local_8,(byte *)0x0,param_3,-1);
    return local_8;
  }
  RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_WGR_C_dibto8_cpp_007edc5c,0x1b);
  return (BITMAPINFO *)0x0;
}

