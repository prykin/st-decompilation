
LPBITMAPINFO
FUN_006d7550(HDC param_1,int param_2,int param_3,int param_4,UINT param_5,uint param_6,
            HPALETTE param_7)

{
  HDC hdc;
  HBITMAP h;
  BOOL BVar1;
  int iVar2;
  DWORD DVar3;
  LPVOID lpvBits;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_7c;
  undefined1 local_38 [16];
  ushort uStack_28;
  ushort local_26;
  HPALETTE local_20;
  HGDIOBJ local_1c;
  HBITMAP local_18;
  HDC local_14;
  uint local_10;
  LPBITMAPINFO local_c;
  DWORD local_8;
  
  local_20 = (HPALETTE)0x0;
  local_1c = (HGDIOBJ)0x0;
  local_c = (LPBITMAPINFO)0x0;
  local_8 = 0xffffff03;
  hdc = CreateCompatibleDC(param_1);
  if (hdc == (HDC)0x0) {
    return (LPBITMAPINFO)0x0;
  }
  local_14 = hdc;
  h = CreateCompatibleBitmap(param_1,param_4,param_5);
  local_18 = h;
  if (h != (HBITMAP)0x0) {
    if (param_7 != (HPALETTE)0x0) {
      local_20 = SelectPalette(hdc,param_7,0);
      if (local_20 == (HPALETTE)0x0) goto LAB_006d76f9;
    }
    local_1c = SelectObject(hdc,h);
    if (local_1c != (HGDIOBJ)0x0) {
      BVar1 = BitBlt(hdc,0,0,param_4,param_5,param_1,param_2,param_3,0xcc0020);
      if (BVar1 != 0) {
        iVar2 = GetObjectA(h,0x18,local_38);
        if (iVar2 != 0) {
          if (param_6 == 0) {
            param_6 = (uint)local_26 * (uint)uStack_28;
          }
          if (param_6 < 9) {
            param_6 = 8;
            local_10 = 0x100;
          }
          else {
            local_10 = (param_6 != 0x10) - 1 & 3;
          }
          local_7c.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_7c;
          DVar3 = __setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (DVar3 == 0) {
            local_c = (LPBITMAPINFO)FUN_006d10f0(param_4,param_5,param_6,local_10,1);
            lpvBits = (LPVOID)FUN_006b4fa0((int)local_c);
            hdc = local_14;
            h = local_18;
            iVar2 = GetDIBits(local_14,local_18,0,param_5,lpvBits,local_c,0);
            if (iVar2 == 0) {
              RaiseInternalException(-0xfd,DAT_007ed77c,s_E__DKW_WGR_C_dibget_c_007ee2a0,0x3d);
            }
            local_8 = 0;
            g_currentExceptionFrame = local_7c.previous;
          }
          else {
            g_currentExceptionFrame = local_7c.previous;
            FUN_006ab060(&local_c);
            hdc = local_14;
            h = local_18;
            local_8 = DVar3;
          }
        }
      }
    }
  }
LAB_006d76f9:
  if (local_8 == 0xffffff03) {
    local_8 = GetLastError();
  }
  if (local_1c != (HGDIOBJ)0x0) {
    SelectObject(hdc,local_1c);
  }
  if (local_20 != (HPALETTE)0x0) {
    SelectPalette(hdc,local_20,0);
  }
  if (h != (HBITMAP)0x0) {
    DeleteObject(h);
  }
  DeleteObject(hdc);
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__DKW_WGR_C_dibget_c_007ee2a0,0x50);
  }
  return local_c;
}

