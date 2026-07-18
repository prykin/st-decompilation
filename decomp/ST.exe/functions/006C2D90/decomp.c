
int FUN_006c2d90(int *param_1)

{
  int iVar1;
  int iVar2;
  void *lpBits;
  int iVar3;
  BOOL BVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_ac;
  undefined4 local_a8 [16];
  tagMSG local_68;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  HDC local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  BITMAPINFO *local_8;
  
  local_2c = 0x10;
  local_c = 0;
  local_8 = (BITMAPINFO *)0x0;
  DAT_008568c8 = 0;
  DAT_008568cc = 0;
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || ((param_1[2] & 0x40000000U) == 0)) {
    iVar2 = FUN_006a5e40(-0x34,DAT_007ed77c,0x7ede64,0x113);
    return iVar2;
  }
  if (*(int *)(param_1[1] + 0x20) < 9) {
    iVar2 = FUN_006a5e40(-0x30,DAT_007ed77c,0x7ede64,0x114);
    return iVar2;
  }
  FUN_006c3340((int)param_1);
  local_4c = param_1[7];
  local_44 = param_1[0xf];
  local_40 = param_1[9];
  local_10 = param_1[0x10];
  local_48 = param_1[8];
  local_18 = param_1[10];
  local_28 = 0;
  if ((((local_44 != local_40) || (local_10 != local_18)) ||
      ((param_1[5] < local_44 || (param_1[6] < local_10)))) ||
     (((*(byte *)(param_1 + 2) & 4) != 0 && ((local_44 != param_1[5] || (local_10 != param_1[6])))))
     ) {
    iVar2 = param_1[1];
    local_28 = 1;
    local_2c = *(int *)(iVar2 + 0x20);
    local_3c = *(undefined4 *)(iVar2 + 0x4c4);
    local_38 = *(undefined4 *)(iVar2 + 0x4c8);
    local_34 = *(undefined4 *)(iVar2 + 0x4cc);
    iVar3 = *(int *)(iVar2 + 0x20);
    if (iVar3 == 0x10) {
      if (*(int *)(iVar2 + 0x4c4) == 0x7c00) {
        param_1[0xc] = 9;
      }
      else if (*(int *)(iVar2 + 0x4c4) == 0xf800) {
        param_1[0xc] = 10;
      }
      else if (*(int *)(iVar2 + 0x4c8) == 0x3e0) {
        param_1[0xc] = 0xb;
      }
      else if (*(int *)(iVar2 + 0x4c8) == 0x3f0) {
        param_1[0xc] = 0xc;
      }
      else {
        param_1[0xc] = 10;
        local_3c = 0xf800;
        local_38 = 0x7e0;
        local_34 = 0x1f;
      }
    }
    else if (iVar3 == 0x18) {
      if (*(int *)(iVar2 + 0x4c4) == 0xff0000) {
        param_1[0xc] = 1;
      }
      else {
        param_1[0xc] = 2;
      }
    }
    else {
      if (iVar3 != 0x20) {
        iVar2 = FUN_006a5e40(-0x30,DAT_007ed77c,0x7ede64,0x14d);
        return iVar2;
      }
      if (*(int *)(iVar2 + 0x4c4) == 0xff0000) {
        param_1[0xc] = 3;
      }
      else {
        param_1[0xc] = 4;
      }
    }
  }
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    local_1c = (param_1[5] - local_40) / 2 + param_1[3];
    local_14 = (param_1[6] - local_18) / 2 + param_1[4];
    local_24 = local_40;
    local_20 = local_18;
  }
  else {
    local_1c = param_1[3];
    local_14 = param_1[4];
    local_24 = param_1[5];
    local_20 = param_1[6];
  }
  local_ac = DAT_00858df8;
  DAT_00858df8 = &local_ac;
  iVar2 = __setjmp3(local_a8,0,unaff_EDI,unaff_ESI);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    DAT_008568c8 = SetWindowLongA(*(HWND *)(param_1[1] + 4),-4,0x6c3480);
    iVar2 = local_44;
    if (local_28 == 0) {
      iVar3 = _BinkDDSurfaceType_4(*(undefined4 *)(param_1[1] + 0x40));
      param_1[0xc] = iVar3;
      iVar2 = local_c;
      if (iVar3 == -1) {
        FUN_006a5e40(-0x34,DAT_007ed77c,0x7ede64,0x192);
        iVar2 = local_c;
      }
      do {
        iVar3 = _BinkWait_4(*param_1);
        while (iVar3 != 0) {
          BVar4 = PeekMessageA(&local_68,(HWND)0x0,0,0,1);
          if (BVar4 != 0) {
            if (local_68.message == 0x12) {
              DAT_008568cc = 1;
              break;
            }
            TranslateMessage(&local_68);
            DispatchMessageA(&local_68);
          }
          Sleep(10);
          iVar3 = _BinkWait_4(*param_1);
        }
        iVar3 = local_c;
        if (DAT_008568cc != 0) goto LAB_006c32cd;
        _BinkDoFrame_4(*param_1);
        iVar2 = FUN_006bb8b0(param_1[1]);
        local_c = iVar2;
        if (iVar2 != 0) {
          FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede64,0x1a9);
        }
        iVar3 = param_1[1];
        _BinkCopyToBuffer_28
                  (*param_1,*(undefined4 *)(iVar3 + 0x474),*(undefined4 *)(iVar3 + 0x478),
                   *(undefined4 *)(iVar3 + 0x1c),local_1c,local_14,param_1[0xc]);
        FUN_006bb980(param_1[1]);
        FUN_006bb370(param_1[1],0,0);
        iVar1 = *param_1;
        iVar3 = local_c;
        if (*(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 8)) goto LAB_006c32cd;
        _BinkNextFrame_4(iVar1);
      } while( true );
    }
    local_8 = (BITMAPINFO *)FUN_006b50c0(local_44,local_10,local_2c,3,&local_3c,1);
    lpBits = (void *)FUN_006b4fa0((int)local_8);
    (local_8->bmiHeader).biHeight = -local_10;
    FUN_006b4170((int)local_8,0,0,0,iVar2,local_10,0);
    iVar2 = local_c;
    do {
      iVar3 = _BinkWait_4(*param_1);
      while (iVar3 != 0) {
        BVar4 = PeekMessageA(&local_68,(HWND)0x0,0,0,1);
        if (BVar4 != 0) {
          if (local_68.message == 0x12) {
            DAT_008568cc = 1;
            break;
          }
          TranslateMessage(&local_68);
          DispatchMessageA(&local_68);
        }
        Sleep(10);
        iVar3 = _BinkWait_4(*param_1);
      }
      iVar3 = local_c;
      if (DAT_008568cc != 0) break;
      _BinkDoFrame_4(*param_1);
      _BinkCopyToBuffer_28
                (*param_1,lpBits,
                 (uint)(local_8->bmiHeader).biBitCount * (local_8->bmiHeader).biWidth + 0x1f >> 3 &
                 0x1ffffffc,local_10,0,0,param_1[0xc]);
      iVar2 = FUN_006ce770(param_1[1],&local_30);
      local_c = iVar2;
      if (iVar2 != 0) {
        FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede64,0x180);
      }
      StretchDIBits(local_30,local_1c,local_14,local_24,local_20,local_4c,local_48,local_40,local_18
                    ,lpBits,local_8,0,0xcc0020);
      FUN_006ce8c0(param_1[1],local_30);
      FUN_006bb370(param_1[1],0,0);
      iVar1 = *param_1;
      iVar3 = local_c;
      if (*(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 8)) break;
      _BinkNextFrame_4(iVar1);
    } while( true );
  }
LAB_006c32cd:
  local_c = iVar3;
  DAT_00858df8 = (undefined4 *)local_ac;
  if (DAT_008568c8 != 0) {
    SetWindowLongA(*(HWND *)(param_1[1] + 4),-4,DAT_008568c8);
  }
  FUN_006ab060(&local_8);
  if (iVar2 != 0) {
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede64,0x1bf);
    return iVar2;
  }
  return 0;
}

