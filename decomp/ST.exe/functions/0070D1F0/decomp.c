
/* WARNING: Removing unreachable block (ram,0x0070dd6f) */
/* WARNING: Removing unreachable block (ram,0x0070dd7f) */
/* WARNING: Removing unreachable block (ram,0x0070dd85) */
/* WARNING: Removing unreachable block (ram,0x0070dd95) */
/* WARNING: Removing unreachable block (ram,0x0070dd9e) */
/* WARNING: Removing unreachable block (ram,0x0070ddae) */
/* WARNING: Removing unreachable block (ram,0x0070ddb4) */
/* WARNING: Removing unreachable block (ram,0x0070ddbe) */
/* WARNING: Removing unreachable block (ram,0x0070ddc7) */
/* WARNING: Removing unreachable block (ram,0x0070ddcf) */
/* WARNING: Removing unreachable block (ram,0x0070ddd9) */
/* WARNING: Removing unreachable block (ram,0x0070dde7) */
/* WARNING: Removing unreachable block (ram,0x0070ddf6) */
/* WARNING: Removing unreachable block (ram,0x0070ddfe) */
/* WARNING: Removing unreachable block (ram,0x0070de08) */
/* WARNING: Removing unreachable block (ram,0x0070de17) */
/* WARNING: Removing unreachable block (ram,0x0070de26) */
/* WARNING: Removing unreachable block (ram,0x0070de2e) */
/* WARNING: Removing unreachable block (ram,0x0070de38) */
/* WARNING: Removing unreachable block (ram,0x0070de46) */
/* WARNING: Removing unreachable block (ram,0x0070de55) */
/* WARNING: Removing unreachable block (ram,0x0070de5f) */
/* WARNING: Removing unreachable block (ram,0x0070de6d) */
/* WARNING: Removing unreachable block (ram,0x0070de7d) */
/* WARNING: Removing unreachable block (ram,0x0070de83) */
/* WARNING: Removing unreachable block (ram,0x0070de8e) */
/* WARNING: Removing unreachable block (ram,0x0070de91) */
/* WARNING: Removing unreachable block (ram,0x0070de96) */
/* WARNING: Removing unreachable block (ram,0x0070de9c) */
/* WARNING: Removing unreachable block (ram,0x0070dead) */
/* WARNING: Removing unreachable block (ram,0x0070debf) */
/* WARNING: Removing unreachable block (ram,0x0070dec5) */
/* WARNING: Removing unreachable block (ram,0x0070ded5) */
/* WARNING: Removing unreachable block (ram,0x0070dedb) */

HDC __cdecl
FUN_0070d1f0(uint param_1,LOGFONTA *param_2,uint *param_3,byte *param_4,int param_5,byte *param_6,
            int param_7,int param_8,uint param_9,uint param_10,uint param_11,undefined *param_12)

{
  uint *puVar1;
  LPTEXTMETRICA lptm;
  void **ppvBits;
  byte bVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  InternalExceptionFrame *pIVar6;
  byte *pbVar7;
  HDC pHVar8;
  HDC pHVar9;
  HFONT pHVar10;
  HGDIOBJ pvVar11;
  undefined4 *puVar12;
  LOGPALETTE *plpal;
  HPALETTE pHVar13;
  HBITMAP pHVar14;
  HBRUSH pHVar15;
  int iVar16;
  byte *pbVar17;
  IMAGE_DOS_HEADER *pIVar18;
  undefined2 extraout_var;
  int exceptionCode;
  char cVar19;
  uint uVar20;
  uint uVar21;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar22;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar23;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar24;
  InternalExceptionFrame *pIVar25;
  InternalExceptionFrame *pIVar26;
  uint local_10;
  LOGPALETTE *local_c;
  int local_8;
  
  local_8 = 0;
  pIVar25 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  iVar5 = __setjmp3((undefined4 *)&stack0xffffffa8,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = pIVar25;
    if ((local_8 == 0) &&
       (iVar16 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x1b9,0,iVar5,&DAT_007a4ccc,
                                    s_ccFntTy__operator_new_frow_Windo_007f01a8), iVar16 != 0)) {
      pcVar3 = (code *)swi(3);
      pHVar8 = (HDC)(*pcVar3)();
      return pHVar8;
    }
    RaiseInternalException(iVar5,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x1cc);
    return (HDC)0x0;
  }
  if ((((param_2 == (LOGFONTA *)0x0) || (param_5 == 0)) || (param_6 == (byte *)0x0)) ||
     (((param_7 < 1 || (0xf < param_7)) || (param_8 < 2)))) {
    RaiseInternalException(-0x34,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0xf7);
  }
  pIVar6 = (InternalExceptionFrame *)FUN_006aac10(param_1);
  pIVar6->previous = (InternalExceptionFrame *)0x0;
  *(undefined4 *)((int)pIVar6[2].jumpBuffer + 0xe) = 0;
  pIVar26 = pIVar6;
  for (iVar5 = 0x10; pIVar26 = (InternalExceptionFrame *)pIVar26->jumpBuffer, iVar5 != 0;
      iVar5 = iVar5 + -1) {
    *(int *)pIVar26 = 0;
  }
  pIVar6[1].previous = (InternalExceptionFrame *)0x0;
  pIVar6[1].jumpBuffer[0] = 0;
  pIVar6[1].jumpBuffer[1] = 1;
  pIVar6[1].jumpBuffer[3] = 0;
  pIVar6[1].jumpBuffer[2] = 0;
  pIVar6[1].jumpBuffer[5] = 0;
  pIVar6[1].jumpBuffer[4] = 0;
  pIVar6[1].jumpBuffer[7] = 0;
  pIVar6[1].jumpBuffer[6] = 0;
  pIVar6[1].jumpBuffer[9] = 100;
  pIVar6[1].jumpBuffer[8] = 100;
  *(undefined2 *)(pIVar6[1].jumpBuffer + 10) = 0;
  *(undefined4 *)((int)pIVar6[1].jumpBuffer + 0x2a) = 0;
  *(undefined4 *)((int)pIVar6[1].jumpBuffer + 0x2e) = 0;
  *(undefined4 *)((int)pIVar6[1].jumpBuffer + 0x32) = 0;
  *(undefined4 *)((int)pIVar6[1].jumpBuffer + 0x36) = 1;
  *(undefined2 *)((int)pIVar6[2].jumpBuffer + 0x12) = 0;
  *(undefined1 *)((int)pIVar6[2].jumpBuffer + 0x12) = DAT_007cc854;
  *(undefined4 *)((int)pIVar6[1].jumpBuffer + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)pIVar6[2].jumpBuffer + 10) = 0;
  *(undefined4 *)((int)&pIVar6[2].previous + 2) = 0;
  *(undefined4 *)((int)pIVar6[1].jumpBuffer + 0x3e) = 0;
  *(undefined4 *)((int)pIVar6[2].jumpBuffer + 6) = 0x7ff0;
  *(undefined4 *)((int)pIVar6[2].jumpBuffer + 2) = 0x7ff0;
  pIVar6[2].jumpBuffer[8] = 1;
  *(undefined4 *)((int)&pIVar6[6].previous + 1) = 0;
  *(uint *)((int)pIVar6[5].jumpBuffer + 0x35) = param_11;
  *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x21) = 800;
  *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x21) = 0x80;
  *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x29) = 0x80;
  *(uint *)((int)pIVar6[5].jumpBuffer + 1) = param_9;
  *(uint *)((int)pIVar6[5].jumpBuffer + 5) = param_10;
  *(int *)((int)pIVar6[5].jumpBuffer + 0x31) = param_8;
  uVar21 = param_7 * param_8 + 1;
  pbVar7 = (byte *)FUN_006aac10(uVar21);
  *(byte **)((int)pIVar6[5].jumpBuffer + 0x2d) = pbVar7;
  pbVar17 = param_6;
  for (uVar20 = uVar21 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar17;
    pbVar17 = pbVar17 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
    *pbVar7 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    pbVar7 = pbVar7 + 1;
  }
  if ((param_11 & 0x100) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x15) = 0x100;
  }
  if ((param_11 & 0x200) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x15) = 0x200;
  }
  if ((param_11 & 0x400) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x15) = 0x400;
  }
  if ((param_11 & 0x800) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x15) = 0x800;
  }
  if ((param_11 & 0x1000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x15) = 0x1000;
  }
  if ((param_11 & 0x2000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x15) = 0x2000;
  }
  if ((param_11 & 0x4000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x15) = 0x4000;
  }
  if ((param_11 & 0x100000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x19) = 0x100000;
  }
  if ((param_11 & 0x200000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x19) = 0x200000;
  }
  if ((param_11 & 0x400000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x19) = 0x400000;
  }
  if ((param_11 & 0x800000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x19) = 0x800000;
  }
  if ((param_11 & 0x1000000) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x19) = 0x1000000;
  }
  if ((param_11 & 0x10) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x1d) = 0x10;
  }
  if ((param_11 & 0x20) != 0) {
    *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x1d) = 0x20;
  }
  uVar21 = *(uint *)((int)pIVar6[5].jumpBuffer + 0x19);
  if (uVar21 < 0x400001) {
    if (uVar21 != 0x400000) {
      if (uVar21 == 0x100000) {
        *(uint *)((int)pIVar6[4].jumpBuffer + 0x3d) =
             (param_9 ^ (int)param_9 >> 0x1f) - ((int)param_9 >> 0x1f);
        if ((int)param_9 < 0) {
          *(uint *)((int)pIVar6[4].jumpBuffer + 0x2d) = -param_9;
          *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x35) = 0;
        }
        else {
          *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x2d) = 0;
          *(uint *)((int)pIVar6[4].jumpBuffer + 0x35) = param_9;
        }
        *(uint *)((int)&pIVar6[5].previous + 1) =
             (param_10 ^ (int)param_10 >> 0x1f) - ((int)param_10 >> 0x1f);
        if ((int)param_10 < 0) {
          *(uint *)((int)pIVar6[4].jumpBuffer + 0x31) = -param_10;
          *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x39) = 0;
        }
        else {
          *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x31) = 0;
          *(uint *)((int)pIVar6[4].jumpBuffer + 0x39) = param_10;
        }
        goto LAB_0070d485;
      }
      if (uVar21 != 0x200000) goto LAB_0070d485;
    }
  }
  else if ((uVar21 != 0x800000) && (uVar21 != 0x1000000)) goto LAB_0070d485;
  if ((int)param_9 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_9 * 2;
  }
  *(int *)((int)pIVar6[4].jumpBuffer + 0x3d) = iVar5;
  *(uint *)((int)pIVar6[4].jumpBuffer + 0x2d) = ((int)param_9 < 1) - 1 & param_9;
  *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x35) = 0;
  if ((int)param_10 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_10 * 2;
  }
  *(int *)((int)&pIVar6[5].previous + 1) = iVar5;
  *(uint *)((int)pIVar6[4].jumpBuffer + 0x31) = ((int)param_10 < 1) - 1 & param_10;
  *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x39) = 0;
LAB_0070d485:
  pHVar8 = GetDC((HWND)0x0);
  if (pHVar8 == (HDC)0x0) {
    RaiseInternalException(-0x51,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x140);
  }
  pHVar9 = CreateCompatibleDC(pHVar8);
  *(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d) = pHVar9;
  ReleaseDC((HWND)0x0,pHVar8);
  if (*(int *)((int)pIVar6[3].jumpBuffer + 0x2d) == 0) {
    RaiseInternalException(-0x51,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x143);
  }
  pHVar10 = CreateFontIndirectA(param_2);
  *(HFONT *)((int)pIVar6[3].jumpBuffer + 0x31) = pHVar10;
  if (pHVar10 == (HFONT)0x0) {
    RaiseInternalException(-0x51,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x144);
  }
  pvVar11 = SelectObject(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),
                         *(HGDIOBJ *)((int)pIVar6[3].jumpBuffer + 0x31));
  *(HGDIOBJ *)((int)pIVar6[3].jumpBuffer + 0x35) = pvVar11;
  lptm = (LPTEXTMETRICA)(pIVar6[2].jumpBuffer + 0xf);
  GetTextMetricsA(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),lptm);
  GetTextCharsetInfo(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),
                     (LPFONTSIGNATURE)(pIVar6[2].jumpBuffer + 9),0);
  if ((lptm->tmHeight < 1) || (pIVar6[3].jumpBuffer[4] < 1)) {
    RaiseInternalException(-0x34,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x149);
  }
  *(int *)((int)pIVar6[5].jumpBuffer + 9) = *(int *)((int)&pIVar6[5].previous + 1) + lptm->tmHeight;
  *(int *)((int)pIVar6[5].jumpBuffer + 0xd) =
       *(int *)((int)pIVar6[4].jumpBuffer + 0x3d) + pIVar6[3].jumpBuffer[4];
  *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x11) = *(undefined4 *)((int)pIVar6[5].jumpBuffer + 9)
  ;
  puVar12 = FUN_006aac10(*(int *)((int)pIVar6[5].jumpBuffer + 0x21) * 10 + 0x70);
  *(undefined4 **)((int)pIVar6[2].jumpBuffer + 0xe) = puVar12;
  *(undefined2 *)puVar12 = (undefined2)param_7;
  *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x3d) = 0;
  *(undefined2 *)(*(int *)((int)pIVar6[2].jumpBuffer + 0xe) + 100) = 0;
  *(ushort *)(*(int *)((int)pIVar6[2].jumpBuffer + 0xe) + 0x42) = (ushort)*param_6;
  plpal = (LOGPALETTE *)
          FUN_006bc3e0(param_5,(undefined2 *)0x0,(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x1d));
  *(LOGPALETTE **)((int)pIVar6[4].jumpBuffer + 0x19) = plpal;
  pHVar13 = CreatePalette(plpal);
  *(HPALETTE *)((int)&pIVar6[4].previous + 1) = pHVar13;
  local_c = (LOGPALETTE *)FUN_006aac10(0x408);
  local_c->palVersion = 0x300;
  local_c->palNumEntries = 0x100;
  *(undefined1 *)&local_c[0x80].palVersion = 0xff;
  *(undefined1 *)((int)&local_c[0x80].palVersion + 1) = 0xff;
  *(undefined1 *)&local_c[0x80].palNumEntries = 0xff;
  pHVar13 = CreatePalette(local_c);
  *(HPALETTE *)((int)pIVar6[4].jumpBuffer + 1) = pHVar13;
  FUN_006ab060(&local_c);
  if (*(int *)((int)pIVar6[4].jumpBuffer + 1) == 0) {
    RaiseInternalException(-0x51,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x15b);
  }
  puVar12 = FUN_006d10f0(*(int *)((int)pIVar6[5].jumpBuffer + 0xd),
                         *(int *)((int)pIVar6[5].jumpBuffer + 0x11),8,0x100,1);
  *(undefined4 **)((int)pIVar6[4].jumpBuffer + 0x11) = puVar12;
  if (puVar12 == (undefined4 *)0x0) {
    RaiseInternalException(-0x51,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x15d);
  }
  iVar5 = 0;
  do {
    cVar19 = (iVar5 != 0xff) + -1;
    *(char *)(*(int *)((int)pIVar6[4].jumpBuffer + 0x11) + 0x2a + iVar5 * 4) = cVar19;
    *(char *)(*(int *)((int)pIVar6[4].jumpBuffer + 0x11) + 0x29 + iVar5 * 4) = cVar19;
    *(char *)(*(int *)((int)pIVar6[4].jumpBuffer + 0x11) + 0x28 + iVar5 * 4) = (iVar5 != 0xff) + -1;
    *(undefined1 *)(*(int *)((int)pIVar6[4].jumpBuffer + 0x11) + 0x2b + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  ppvBits = (void **)((int)pIVar6[4].jumpBuffer + 0x15);
  pHVar14 = CreateDIBSection(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),
                             *(BITMAPINFO **)((int)pIVar6[4].jumpBuffer + 0x11),0,ppvBits,
                             (HANDLE)0x0,0);
  *(HBITMAP *)((int)pIVar6[4].jumpBuffer + 9) = pHVar14;
  if (*ppvBits == (void *)0x0) {
    RaiseInternalException(-0x51,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x164);
  }
  pHVar13 = SelectPalette(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),
                          *(HPALETTE *)((int)pIVar6[4].jumpBuffer + 1),0);
  *(HPALETTE *)((int)pIVar6[4].jumpBuffer + 5) = pHVar13;
  pvVar11 = SelectObject(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),
                         *(HGDIOBJ *)((int)pIVar6[4].jumpBuffer + 9));
  *(HGDIOBJ *)((int)pIVar6[4].jumpBuffer + 0xd) = pvVar11;
  pHVar15 = CreateSolidBrush(0);
  *(HBRUSH *)((int)pIVar6[3].jumpBuffer + 0x39) = pHVar15;
  if (pHVar15 == (HBRUSH)0x0) {
    RaiseInternalException(-0x51,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x168);
  }
  SetBkMode(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),1);
  SetTextAlign(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),0);
  SetTextColor(*(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d),0xffffff);
  iVar5 = 0;
  *(undefined4 *)((int)pIVar6[4].jumpBuffer + 0x25) = *(undefined4 *)((int)pIVar6[5].jumpBuffer + 9)
  ;
  if (0 < **(short **)((int)pIVar6[2].jumpBuffer + 0xe)) {
    pIVar26 = pIVar6;
    do {
      pIVar26 = (InternalExceptionFrame *)pIVar26->jumpBuffer;
      iVar16 = FUN_006b50c0(*(int *)((int)pIVar6[4].jumpBuffer + 0x21),
                            *(int *)((int)pIVar6[4].jumpBuffer + 0x25),8,0x100,
                            (undefined4 *)(param_5 + 0x28),1);
      *(int *)pIVar26 = iVar16;
      FUN_006b4170(iVar16,0,0,0,*(int *)((int)pIVar6[4].jumpBuffer + 0x21),
                   *(int *)((int)pIVar6[4].jumpBuffer + 0x25),
                   (char)*(undefined2 *)(*(int *)((int)pIVar6[2].jumpBuffer + 0xe) + 0x42));
      iVar5 = iVar5 + 1;
    } while (iVar5 < **(short **)((int)pIVar6[2].jumpBuffer + 0xe));
  }
  *(undefined4 *)((int)pIVar6[5].jumpBuffer + 0x39) = 2;
  if ((param_11 & 1) != 0) {
    *(uint *)((int)pIVar6[5].jumpBuffer + 0x39) =
         ((uint)*(byte *)((int)pIVar6[3].jumpBuffer + 0x25) - (uint)(byte)pIVar6[3].jumpBuffer[9]) +
         3;
  }
  if (((param_11 & 2) != 0) && (param_3 != (uint *)0x0)) {
    uVar21 = *param_3;
    puVar24 = param_3;
    while (uVar21 != 0xffffffff) {
      if ((ushort)(*puVar24 >> 0x10) <= (ushort)*puVar24) {
        *(uint *)((int)pIVar6[5].jumpBuffer + 0x39) =
             *(int *)((int)pIVar6[5].jumpBuffer + 0x39) +
             ((uint)(ushort)*puVar24 - (*puVar24 >> 0x10)) + 1;
      }
      puVar1 = puVar24 + 1;
      puVar24 = puVar24 + 1;
      uVar21 = *puVar1;
    }
  }
  if ((param_4 != (byte *)0x0) && ((param_11 & 4) != 0)) {
    bVar2 = *param_4;
    pbVar17 = param_4;
    while (bVar2 != 0) {
      pbVar17 = pbVar17 + 1;
      *(int *)((int)pIVar6[5].jumpBuffer + 0x39) = *(int *)((int)pIVar6[5].jumpBuffer + 0x39) + 1;
      bVar2 = *pbVar17;
    }
  }
  pIVar18 = *(IMAGE_DOS_HEADER **)((int)pIVar6[5].jumpBuffer + 0x19);
  if (((pIVar18 == &IMAGE_DOS_HEADER_00400000) || (pIVar18 == (IMAGE_DOS_HEADER *)&DAT_00800000)) ||
     (pIVar18 == (IMAGE_DOS_HEADER *)0x1000000)) {
    pIVar18 = (IMAGE_DOS_HEADER *)FUN_006aac10(0x3ffff);
    *(IMAGE_DOS_HEADER **)((int)&pIVar6[6].previous + 1) = pIVar18;
  }
  uVar23 = (undefined2)((uint)pIVar18 >> 0x10);
  if (param_12 != (undefined *)0x0) {
    iVar5 = (*(code *)param_12)(pIVar6);
    uVar23 = 0;
    if (iVar5 != 0) {
      local_8 = 1;
      RaiseInternalException(iVar5,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x183);
      uVar23 = extraout_var;
    }
  }
  FUN_0070e030((int *)pIVar6,CONCAT22(uVar23,(ushort)*(byte *)((int)pIVar6[3].jumpBuffer + 0x26)),0)
  ;
  uVar23 = extraout_var_00;
  if ((param_12 != (undefined *)0x0) &&
     (iVar5 = (*(code *)param_12)(pIVar6), uVar23 = extraout_var_01, iVar5 != 0)) {
    local_8 = 1;
    RaiseInternalException(iVar5,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x185);
    uVar23 = extraout_var_02;
  }
  FUN_0070e030((int *)pIVar6,CONCAT22(uVar23,(ushort)*(byte *)((int)pIVar6[3].jumpBuffer + 0x27)),0)
  ;
  uVar22 = extraout_ECX;
  if ((param_12 != (undefined *)0x0) &&
     (iVar5 = (*(code *)param_12)(), uVar22 = extraout_ECX_00, iVar5 != 0)) {
    local_8 = 1;
    pIVar25 = DAT_007ed77c;
    RaiseInternalException(iVar5,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x186);
    uVar22 = extraout_ECX_01;
  }
  if ((param_11 & 1) != 0) {
    iVar5 = ((uint)*(byte *)((int)pIVar6[3].jumpBuffer + 0x25) - (uint)(byte)pIVar6[3].jumpBuffer[9]
            ) + 1;
    if (iVar5 < 0) {
      pIVar25 = DAT_007ed77c;
      RaiseInternalException(-0x34,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x189);
      uVar22 = extraout_ECX_02;
    }
    iVar16 = 0;
    if (0 < iVar5) {
      do {
        pIVar25 = pIVar6;
        FUN_0070e030((int *)pIVar6,
                     CONCAT22((short)((uint)uVar22 >> 0x10),(ushort)(byte)pIVar6[3].jumpBuffer[9]) +
                     iVar16,0);
        uVar22 = extraout_ECX_03;
        if ((param_12 != (undefined *)0x0) &&
           (exceptionCode = (*(code *)param_12)(), uVar22 = extraout_ECX_04, exceptionCode != 0)) {
          local_8 = 1;
          pIVar25 = DAT_007ed77c;
          RaiseInternalException
                    (exceptionCode,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x18c);
          uVar22 = extraout_ECX_05;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar5);
    }
  }
  if (((param_11 & 2) != 0) && (param_3 != (uint *)0x0)) {
    uVar21 = *param_3;
    while (uVar21 != 0xffffffff) {
      uVar20 = *param_3;
      uVar21 = *param_3 >> 0x10;
      uVar4 = (ushort)(*param_3 >> 0x10);
      while (uVar4 <= (ushort)uVar20) {
        pIVar25 = pIVar6;
        FUN_0070e030((int *)pIVar6,uVar21,1);
        if ((param_12 != (undefined *)0x0) && (iVar5 = (*(code *)param_12)(), iVar5 != 0)) {
          local_8 = 1;
          pIVar25 = DAT_007ed77c;
          RaiseInternalException(iVar5,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x198);
        }
        uVar21 = uVar21 + 1;
        uVar4 = (ushort)uVar21;
      }
      puVar24 = param_3 + 1;
      param_3 = param_3 + 1;
      uVar21 = *puVar24;
    }
  }
  if ((param_4 != (byte *)0x0) && ((param_11 & 4) != 0)) {
    bVar2 = *param_4;
    while (bVar2 != 0) {
      local_10 = (uint)*param_4;
      if (((0x1f < *param_4) &&
          (pIVar25 = pIVar6, FUN_0070e030((int *)pIVar6,local_10,1), param_12 != (undefined *)0x0))
         && (iVar5 = (*(code *)param_12)(), iVar5 != 0)) {
        local_8 = 1;
        pIVar25 = DAT_007ed77c;
        RaiseInternalException(iVar5,(int)DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x1a7);
      }
      pbVar17 = param_4 + 1;
      param_4 = param_4 + 1;
      bVar2 = *pbVar17;
    }
  }
  if (*(int *)((int)&pIVar6[6].previous + 1) != 0) {
    FUN_006ab060((undefined4 *)((int)&pIVar6[6].previous + 1));
  }
  if ((param_11 & 8) == 0) {
    pvVar11 = *(HGDIOBJ *)((int)&pIVar6[4].previous + 1);
    if (pvVar11 != (HGDIOBJ)0x0) {
      DeleteObject(pvVar11);
      *(undefined4 *)((int)&pIVar6[4].previous + 1) = 0;
    }
    if (*(int *)((int)pIVar6[4].jumpBuffer + 0x19) != 0) {
      FUN_006ab060((undefined4 *)((int)pIVar6[4].jumpBuffer + 0x19));
    }
    pvVar11 = *(HGDIOBJ *)((int)pIVar6[3].jumpBuffer + 0x39);
    if (pvVar11 != (HGDIOBJ)0x0) {
      DeleteObject(pvVar11);
      *(undefined4 *)((int)pIVar6[3].jumpBuffer + 0x39) = 0;
    }
    if (*(int *)((int)pIVar6[3].jumpBuffer + 0x31) != 0) {
      pHVar8 = *(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d);
      if (pHVar8 != (HDC)0x0) {
        pIVar25 = (InternalExceptionFrame *)0x70dbad;
        SelectObject(pHVar8,*(HGDIOBJ *)((int)pIVar6[3].jumpBuffer + 0x35));
      }
      DeleteObject(*(HGDIOBJ *)((int)pIVar6[3].jumpBuffer + 0x31));
      *(undefined4 *)((int)pIVar6[3].jumpBuffer + 0x31) = 0;
    }
    if (*(int *)((int)pIVar6[4].jumpBuffer + 1) != 0) {
      pIVar26 = *(InternalExceptionFrame **)((int)pIVar6[3].jumpBuffer + 0x2d);
      if (pIVar26 != (InternalExceptionFrame *)0x0) {
        SelectPalette((HDC)pIVar26,*(HPALETTE *)((int)pIVar6[4].jumpBuffer + 5),0);
        pIVar25 = pIVar26;
      }
      DeleteObject(*(HGDIOBJ *)((int)pIVar6[4].jumpBuffer + 1));
      *(undefined4 *)((int)pIVar6[4].jumpBuffer + 1) = 0;
    }
    if (*(int *)((int)pIVar6[4].jumpBuffer + 9) != 0) {
      pHVar8 = *(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d);
      if (pHVar8 != (HDC)0x0) {
        pIVar25 = (InternalExceptionFrame *)0x70dc0c;
        SelectObject(pHVar8,*(HGDIOBJ *)((int)pIVar6[4].jumpBuffer + 0xd));
      }
      DeleteObject(*(HGDIOBJ *)((int)pIVar6[4].jumpBuffer + 9));
      *(undefined4 *)((int)pIVar6[4].jumpBuffer + 9) = 0;
    }
    pHVar8 = *(HDC *)((int)pIVar6[3].jumpBuffer + 0x2d);
    if (pHVar8 != (HDC)0x0) {
      pIVar25 = (InternalExceptionFrame *)0x70dc2d;
      ReleaseDC((HWND)0x0,pHVar8);
      *(undefined4 *)((int)pIVar6[3].jumpBuffer + 0x2d) = 0;
    }
    if (*(int *)((int)pIVar6[4].jumpBuffer + 0x11) != 0) {
      FUN_006ab060((undefined4 *)((int)pIVar6[4].jumpBuffer + 0x11));
    }
  }
  g_currentExceptionFrame = pIVar25;
  return (HDC)pIVar6;
}

