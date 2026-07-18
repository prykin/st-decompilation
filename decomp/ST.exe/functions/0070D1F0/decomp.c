
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
  HDC pHVar6;
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
  int iVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar23;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar24;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar25;
  HDC pHVar26;
  uint local_10;
  LOGPALETTE *local_c;
  int local_8;
  
  local_8 = 0;
  pHVar26 = DAT_00858df8;
  DAT_00858df8 = (HDC)&stack0xffffffa4;
  iVar5 = __setjmp3((undefined4 *)&stack0xffffffa8,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = pHVar26;
    if ((local_8 == 0) &&
       (iVar16 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x1b9,0,iVar5,&DAT_007a4ccc),
       iVar16 != 0)) {
      pcVar3 = (code *)swi(3);
      pHVar26 = (HDC)(*pcVar3)();
      return pHVar26;
    }
    FUN_006a5e40(iVar5,0,0x7f0190,0x1cc);
    return (HDC)0x0;
  }
  if ((((param_2 == (LOGFONTA *)0x0) || (param_5 == 0)) || (param_6 == (byte *)0x0)) ||
     (((param_7 < 1 || (0xf < param_7)) || (param_8 < 2)))) {
    FUN_006a5e40(-0x34,(int)DAT_007ed77c,0x7f0190,0xf7);
  }
  pHVar6 = (HDC)FUN_006aac10(param_1);
  pHVar6->unused = 0;
  *(undefined4 *)((int)&pHVar6[0x26].unused + 2) = 0;
  pHVar8 = pHVar6;
  for (iVar5 = 0x10; pHVar8 = pHVar8 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    pHVar8->unused = 0;
  }
  pHVar6[0x11].unused = 0;
  pHVar6[0x12].unused = 0;
  pHVar6[0x13].unused = 1;
  pHVar6[0x15].unused = 0;
  pHVar6[0x14].unused = 0;
  pHVar6[0x17].unused = 0;
  pHVar6[0x16].unused = 0;
  pHVar6[0x19].unused = 0;
  pHVar6[0x18].unused = 0;
  pHVar6[0x1b].unused = 100;
  pHVar6[0x1a].unused = 100;
  *(undefined2 *)&pHVar6[0x1c].unused = 0;
  *(undefined4 *)((int)&pHVar6[0x1c].unused + 2) = 0;
  *(undefined4 *)((int)&pHVar6[0x1d].unused + 2) = 0;
  *(undefined4 *)((int)&pHVar6[0x1e].unused + 2) = 0;
  *(undefined4 *)((int)&pHVar6[0x1f].unused + 2) = 1;
  *(undefined2 *)((int)&pHVar6[0x27].unused + 2) = 0;
  *(undefined1 *)((int)&pHVar6[0x27].unused + 2) = DAT_007cc854;
  *(undefined4 *)((int)&pHVar6[0x20].unused + 2) = 0xffffffff;
  *(undefined4 *)((int)&pHVar6[0x25].unused + 2) = 0;
  *(undefined4 *)((int)&pHVar6[0x22].unused + 2) = 0;
  *(undefined4 *)((int)&pHVar6[0x21].unused + 2) = 0;
  *(undefined4 *)((int)&pHVar6[0x24].unused + 2) = 0x7ff0;
  *(undefined4 *)((int)&pHVar6[0x23].unused + 2) = 0x7ff0;
  pHVar6[0x2b].unused = 1;
  *(undefined4 *)((int)&pHVar6[0x66].unused + 1) = 0;
  *(uint *)((int)&pHVar6[99].unused + 1) = param_11;
  *(undefined4 *)((int)&pHVar6[0x4d].unused + 1) = 800;
  *(undefined4 *)((int)&pHVar6[0x5e].unused + 1) = 0x80;
  *(undefined4 *)((int)&pHVar6[0x4f].unused + 1) = 0x80;
  *(uint *)((int)&pHVar6[0x56].unused + 1) = param_9;
  *(uint *)((int)&pHVar6[0x57].unused + 1) = param_10;
  *(int *)((int)&pHVar6[0x62].unused + 1) = param_8;
  uVar22 = param_7 * param_8 + 1;
  pbVar7 = (byte *)FUN_006aac10(uVar22);
  *(byte **)((int)&pHVar6[0x61].unused + 1) = pbVar7;
  pbVar17 = param_6;
  for (uVar21 = uVar22 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar17;
    pbVar17 = pbVar17 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
    *pbVar7 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    pbVar7 = pbVar7 + 1;
  }
  if ((param_11 & 0x100) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5b].unused + 1) = 0x100;
  }
  if ((param_11 & 0x200) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5b].unused + 1) = 0x200;
  }
  if ((param_11 & 0x400) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5b].unused + 1) = 0x400;
  }
  if ((param_11 & 0x800) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5b].unused + 1) = 0x800;
  }
  if ((param_11 & 0x1000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5b].unused + 1) = 0x1000;
  }
  if ((param_11 & 0x2000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5b].unused + 1) = 0x2000;
  }
  if ((param_11 & 0x4000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5b].unused + 1) = 0x4000;
  }
  if ((param_11 & 0x100000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5c].unused + 1) = 0x100000;
  }
  if ((param_11 & 0x200000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5c].unused + 1) = 0x200000;
  }
  if ((param_11 & 0x400000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5c].unused + 1) = 0x400000;
  }
  if ((param_11 & 0x800000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5c].unused + 1) = 0x800000;
  }
  if ((param_11 & 0x1000000) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5c].unused + 1) = 0x1000000;
  }
  if ((param_11 & 0x10) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5d].unused + 1) = 0x10;
  }
  if ((param_11 & 0x20) != 0) {
    *(undefined4 *)((int)&pHVar6[0x5d].unused + 1) = 0x20;
  }
  uVar22 = *(uint *)((int)&pHVar6[0x5c].unused + 1);
  if (uVar22 < 0x400001) {
    if (uVar22 != 0x400000) {
      if (uVar22 == 0x100000) {
        *(uint *)((int)&pHVar6[0x54].unused + 1) =
             (param_9 ^ (int)param_9 >> 0x1f) - ((int)param_9 >> 0x1f);
        if ((int)param_9 < 0) {
          *(uint *)((int)&pHVar6[0x50].unused + 1) = -param_9;
          *(undefined4 *)((int)&pHVar6[0x52].unused + 1) = 0;
        }
        else {
          *(undefined4 *)((int)&pHVar6[0x50].unused + 1) = 0;
          *(uint *)((int)&pHVar6[0x52].unused + 1) = param_9;
        }
        *(uint *)((int)&pHVar6[0x55].unused + 1) =
             (param_10 ^ (int)param_10 >> 0x1f) - ((int)param_10 >> 0x1f);
        if ((int)param_10 < 0) {
          *(uint *)((int)&pHVar6[0x51].unused + 1) = -param_10;
          *(undefined4 *)((int)&pHVar6[0x53].unused + 1) = 0;
        }
        else {
          *(undefined4 *)((int)&pHVar6[0x51].unused + 1) = 0;
          *(uint *)((int)&pHVar6[0x53].unused + 1) = param_10;
        }
        goto LAB_0070d485;
      }
      if (uVar22 != 0x200000) goto LAB_0070d485;
    }
  }
  else if ((uVar22 != 0x800000) && (uVar22 != 0x1000000)) goto LAB_0070d485;
  if ((int)param_9 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_9 * 2;
  }
  *(int *)((int)&pHVar6[0x54].unused + 1) = iVar5;
  *(uint *)((int)&pHVar6[0x50].unused + 1) = ((int)param_9 < 1) - 1 & param_9;
  *(undefined4 *)((int)&pHVar6[0x52].unused + 1) = 0;
  if ((int)param_10 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_10 * 2;
  }
  *(int *)((int)&pHVar6[0x55].unused + 1) = iVar5;
  *(uint *)((int)&pHVar6[0x51].unused + 1) = ((int)param_10 < 1) - 1 & param_10;
  *(undefined4 *)((int)&pHVar6[0x53].unused + 1) = 0;
LAB_0070d485:
  pHVar8 = GetDC((HWND)0x0);
  if (pHVar8 == (HDC)0x0) {
    FUN_006a5e40(-0x51,(int)DAT_007ed77c,0x7f0190,0x140);
  }
  pHVar9 = CreateCompatibleDC(pHVar8);
  *(HDC *)((int)&pHVar6[0x3f].unused + 1) = pHVar9;
  ReleaseDC((HWND)0x0,pHVar8);
  if (*(int *)((int)&pHVar6[0x3f].unused + 1) == 0) {
    FUN_006a5e40(-0x51,(int)DAT_007ed77c,0x7f0190,0x143);
  }
  pHVar10 = CreateFontIndirectA(param_2);
  *(HFONT *)((int)&pHVar6[0x40].unused + 1) = pHVar10;
  if (pHVar10 == (HFONT)0x0) {
    FUN_006a5e40(-0x51,(int)DAT_007ed77c,0x7f0190,0x144);
  }
  pvVar11 = SelectObject(*(HDC *)((int)&pHVar6[0x3f].unused + 1),
                         *(HGDIOBJ *)((int)&pHVar6[0x40].unused + 1));
  *(HGDIOBJ *)((int)&pHVar6[0x41].unused + 1) = pvVar11;
  lptm = (LPTEXTMETRICA)(pHVar6 + 0x32);
  GetTextMetricsA(*(HDC *)((int)&pHVar6[0x3f].unused + 1),lptm);
  GetTextCharsetInfo(*(HDC *)((int)&pHVar6[0x3f].unused + 1),(LPFONTSIGNATURE)(pHVar6 + 0x2c),0);
  if ((lptm->tmHeight < 1) || (pHVar6[0x38].unused < 1)) {
    FUN_006a5e40(-0x34,(int)DAT_007ed77c,0x7f0190,0x149);
  }
  *(int *)((int)&pHVar6[0x58].unused + 1) = *(int *)((int)&pHVar6[0x55].unused + 1) + lptm->tmHeight
  ;
  *(int *)((int)&pHVar6[0x59].unused + 1) =
       *(int *)((int)&pHVar6[0x54].unused + 1) + pHVar6[0x38].unused;
  *(undefined4 *)((int)&pHVar6[0x5a].unused + 1) = *(undefined4 *)((int)&pHVar6[0x58].unused + 1);
  puVar12 = FUN_006aac10(*(int *)((int)&pHVar6[0x5e].unused + 1) * 10 + 0x70);
  *(undefined4 **)((int)&pHVar6[0x26].unused + 2) = puVar12;
  *(undefined2 *)puVar12 = (undefined2)param_7;
  *(undefined4 *)((int)&pHVar6[0x65].unused + 1) = 0;
  *(undefined2 *)(*(int *)((int)&pHVar6[0x26].unused + 2) + 100) = 0;
  *(ushort *)(*(int *)((int)&pHVar6[0x26].unused + 2) + 0x42) = (ushort)*param_6;
  plpal = (LOGPALETTE *)
          FUN_006bc3e0(param_5,(undefined2 *)0x0,(undefined4 *)((int)&pHVar6[0x4c].unused + 1));
  *(LOGPALETTE **)((int)&pHVar6[0x4b].unused + 1) = plpal;
  pHVar13 = CreatePalette(plpal);
  *(HPALETTE *)((int)&pHVar6[0x44].unused + 1) = pHVar13;
  local_c = (LOGPALETTE *)FUN_006aac10(0x408);
  local_c->palVersion = 0x300;
  local_c->palNumEntries = 0x100;
  *(undefined1 *)&local_c[0x80].palVersion = 0xff;
  *(undefined1 *)((int)&local_c[0x80].palVersion + 1) = 0xff;
  *(undefined1 *)&local_c[0x80].palNumEntries = 0xff;
  pHVar13 = CreatePalette(local_c);
  *(HPALETTE *)((int)&pHVar6[0x45].unused + 1) = pHVar13;
  FUN_006ab060(&local_c);
  if (*(int *)((int)&pHVar6[0x45].unused + 1) == 0) {
    FUN_006a5e40(-0x51,(int)DAT_007ed77c,0x7f0190,0x15b);
  }
  puVar12 = FUN_006d10f0(*(int *)((int)&pHVar6[0x59].unused + 1),
                         *(int *)((int)&pHVar6[0x5a].unused + 1),8,0x100,1);
  *(undefined4 **)((int)&pHVar6[0x49].unused + 1) = puVar12;
  if (puVar12 == (undefined4 *)0x0) {
    FUN_006a5e40(-0x51,(int)DAT_007ed77c,0x7f0190,0x15d);
  }
  iVar5 = 0;
  do {
    cVar20 = (iVar5 != 0xff) + -1;
    *(char *)(*(int *)((int)&pHVar6[0x49].unused + 1) + 0x2a + iVar5 * 4) = cVar20;
    *(char *)(*(int *)((int)&pHVar6[0x49].unused + 1) + 0x29 + iVar5 * 4) = cVar20;
    *(char *)(*(int *)((int)&pHVar6[0x49].unused + 1) + 0x28 + iVar5 * 4) = (iVar5 != 0xff) + -1;
    *(undefined1 *)(*(int *)((int)&pHVar6[0x49].unused + 1) + 0x2b + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  ppvBits = (void **)((int)&pHVar6[0x4a].unused + 1);
  pHVar14 = CreateDIBSection(*(HDC *)((int)&pHVar6[0x3f].unused + 1),
                             *(BITMAPINFO **)((int)&pHVar6[0x49].unused + 1),0,ppvBits,(HANDLE)0x0,0
                            );
  *(HBITMAP *)((int)&pHVar6[0x47].unused + 1) = pHVar14;
  if (*ppvBits == (void *)0x0) {
    FUN_006a5e40(-0x51,(int)DAT_007ed77c,0x7f0190,0x164);
  }
  pHVar13 = SelectPalette(*(HDC *)((int)&pHVar6[0x3f].unused + 1),
                          *(HPALETTE *)((int)&pHVar6[0x45].unused + 1),0);
  *(HPALETTE *)((int)&pHVar6[0x46].unused + 1) = pHVar13;
  pvVar11 = SelectObject(*(HDC *)((int)&pHVar6[0x3f].unused + 1),
                         *(HGDIOBJ *)((int)&pHVar6[0x47].unused + 1));
  *(HGDIOBJ *)((int)&pHVar6[0x48].unused + 1) = pvVar11;
  pHVar15 = CreateSolidBrush(0);
  *(HBRUSH *)((int)&pHVar6[0x42].unused + 1) = pHVar15;
  if (pHVar15 == (HBRUSH)0x0) {
    FUN_006a5e40(-0x51,(int)DAT_007ed77c,0x7f0190,0x168);
  }
  SetBkMode(*(HDC *)((int)&pHVar6[0x3f].unused + 1),1);
  SetTextAlign(*(HDC *)((int)&pHVar6[0x3f].unused + 1),0);
  SetTextColor(*(HDC *)((int)&pHVar6[0x3f].unused + 1),0xffffff);
  iVar5 = 0;
  *(undefined4 *)((int)&pHVar6[0x4e].unused + 1) = *(undefined4 *)((int)&pHVar6[0x58].unused + 1);
  if (0 < **(short **)((int)&pHVar6[0x26].unused + 2)) {
    pHVar8 = pHVar6;
    do {
      pHVar8 = pHVar8 + 1;
      iVar16 = FUN_006b50c0(*(int *)((int)&pHVar6[0x4d].unused + 1),
                            *(int *)((int)&pHVar6[0x4e].unused + 1),8,0x100,
                            (undefined4 *)(param_5 + 0x28),1);
      pHVar8->unused = iVar16;
      FUN_006b4170(iVar16,0,0,0,*(int *)((int)&pHVar6[0x4d].unused + 1),
                   *(int *)((int)&pHVar6[0x4e].unused + 1),
                   (char)*(undefined2 *)(*(int *)((int)&pHVar6[0x26].unused + 2) + 0x42));
      iVar5 = iVar5 + 1;
    } while (iVar5 < **(short **)((int)&pHVar6[0x26].unused + 2));
  }
  *(undefined4 *)((int)&pHVar6[100].unused + 1) = 2;
  if ((param_11 & 1) != 0) {
    *(uint *)((int)&pHVar6[100].unused + 1) =
         ((uint)*(byte *)((int)&pHVar6[0x3d].unused + 1) - (uint)(byte)pHVar6[0x3d].unused) + 3;
  }
  if (((param_11 & 2) != 0) && (param_3 != (uint *)0x0)) {
    uVar22 = *param_3;
    puVar25 = param_3;
    while (uVar22 != 0xffffffff) {
      if ((ushort)(*puVar25 >> 0x10) <= (ushort)*puVar25) {
        *(uint *)((int)&pHVar6[100].unused + 1) =
             *(int *)((int)&pHVar6[100].unused + 1) +
             ((uint)(ushort)*puVar25 - (*puVar25 >> 0x10)) + 1;
      }
      puVar1 = puVar25 + 1;
      puVar25 = puVar25 + 1;
      uVar22 = *puVar1;
    }
  }
  if ((param_4 != (byte *)0x0) && ((param_11 & 4) != 0)) {
    bVar2 = *param_4;
    pbVar17 = param_4;
    while (bVar2 != 0) {
      pbVar17 = pbVar17 + 1;
      *(int *)((int)&pHVar6[100].unused + 1) = *(int *)((int)&pHVar6[100].unused + 1) + 1;
      bVar2 = *pbVar17;
    }
  }
  pIVar18 = *(IMAGE_DOS_HEADER **)((int)&pHVar6[0x5c].unused + 1);
  if (((pIVar18 == &IMAGE_DOS_HEADER_00400000) || (pIVar18 == (IMAGE_DOS_HEADER *)&DAT_00800000)) ||
     (pIVar18 == (IMAGE_DOS_HEADER *)0x1000000)) {
    pIVar18 = (IMAGE_DOS_HEADER *)FUN_006aac10(0x3ffff);
    *(IMAGE_DOS_HEADER **)((int)&pHVar6[0x66].unused + 1) = pIVar18;
  }
  uVar24 = (undefined2)((uint)pIVar18 >> 0x10);
  if (param_12 != (undefined *)0x0) {
    iVar5 = (*(code *)param_12)(pHVar6);
    uVar24 = 0;
    if (iVar5 != 0) {
      local_8 = 1;
      FUN_006a5e40(iVar5,(int)DAT_007ed77c,0x7f0190,0x183);
      uVar24 = extraout_var;
    }
  }
  FUN_0070e030((int *)pHVar6,CONCAT22(uVar24,(ushort)*(byte *)((int)&pHVar6[0x3d].unused + 2)),0);
  uVar24 = extraout_var_00;
  if ((param_12 != (undefined *)0x0) &&
     (iVar5 = (*(code *)param_12)(pHVar6), uVar24 = extraout_var_01, iVar5 != 0)) {
    local_8 = 1;
    FUN_006a5e40(iVar5,(int)DAT_007ed77c,0x7f0190,0x185);
    uVar24 = extraout_var_02;
  }
  FUN_0070e030((int *)pHVar6,CONCAT22(uVar24,(ushort)*(byte *)((int)&pHVar6[0x3d].unused + 3)),0);
  uVar23 = extraout_ECX;
  if ((param_12 != (undefined *)0x0) &&
     (iVar5 = (*(code *)param_12)(), uVar23 = extraout_ECX_00, iVar5 != 0)) {
    local_8 = 1;
    pHVar26 = DAT_007ed77c;
    FUN_006a5e40(iVar5,(int)DAT_007ed77c,0x7f0190,0x186);
    uVar23 = extraout_ECX_01;
  }
  if ((param_11 & 1) != 0) {
    iVar5 = ((uint)*(byte *)((int)&pHVar6[0x3d].unused + 1) - (uint)(byte)pHVar6[0x3d].unused) + 1;
    if (iVar5 < 0) {
      pHVar26 = DAT_007ed77c;
      FUN_006a5e40(-0x34,(int)DAT_007ed77c,0x7f0190,0x189);
      uVar23 = extraout_ECX_02;
    }
    iVar16 = 0;
    if (0 < iVar5) {
      do {
        pHVar26 = pHVar6;
        FUN_0070e030((int *)pHVar6,
                     CONCAT22((short)((uint)uVar23 >> 0x10),(ushort)(byte)pHVar6[0x3d].unused) +
                     iVar16,0);
        uVar23 = extraout_ECX_03;
        if ((param_12 != (undefined *)0x0) &&
           (iVar19 = (*(code *)param_12)(), uVar23 = extraout_ECX_04, iVar19 != 0)) {
          local_8 = 1;
          pHVar26 = DAT_007ed77c;
          FUN_006a5e40(iVar19,(int)DAT_007ed77c,0x7f0190,0x18c);
          uVar23 = extraout_ECX_05;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar5);
    }
  }
  if (((param_11 & 2) != 0) && (param_3 != (uint *)0x0)) {
    uVar22 = *param_3;
    while (uVar22 != 0xffffffff) {
      uVar21 = *param_3;
      uVar22 = *param_3 >> 0x10;
      uVar4 = (ushort)(*param_3 >> 0x10);
      while (uVar4 <= (ushort)uVar21) {
        pHVar26 = pHVar6;
        FUN_0070e030((int *)pHVar6,uVar22,1);
        if ((param_12 != (undefined *)0x0) && (iVar5 = (*(code *)param_12)(), iVar5 != 0)) {
          local_8 = 1;
          pHVar26 = DAT_007ed77c;
          FUN_006a5e40(iVar5,(int)DAT_007ed77c,0x7f0190,0x198);
        }
        uVar22 = uVar22 + 1;
        uVar4 = (ushort)uVar22;
      }
      puVar25 = param_3 + 1;
      param_3 = param_3 + 1;
      uVar22 = *puVar25;
    }
  }
  if ((param_4 != (byte *)0x0) && ((param_11 & 4) != 0)) {
    bVar2 = *param_4;
    while (bVar2 != 0) {
      local_10 = (uint)*param_4;
      if (((0x1f < *param_4) &&
          (pHVar26 = pHVar6, FUN_0070e030((int *)pHVar6,local_10,1), param_12 != (undefined *)0x0))
         && (iVar5 = (*(code *)param_12)(), iVar5 != 0)) {
        local_8 = 1;
        pHVar26 = DAT_007ed77c;
        FUN_006a5e40(iVar5,(int)DAT_007ed77c,0x7f0190,0x1a7);
      }
      pbVar17 = param_4 + 1;
      param_4 = param_4 + 1;
      bVar2 = *pbVar17;
    }
  }
  if (*(int *)((int)&pHVar6[0x66].unused + 1) != 0) {
    FUN_006ab060((undefined4 *)((int)&pHVar6[0x66].unused + 1));
  }
  if ((param_11 & 8) == 0) {
    pvVar11 = *(HGDIOBJ *)((int)&pHVar6[0x44].unused + 1);
    if (pvVar11 != (HGDIOBJ)0x0) {
      DeleteObject(pvVar11);
      *(undefined4 *)((int)&pHVar6[0x44].unused + 1) = 0;
    }
    if (*(int *)((int)&pHVar6[0x4b].unused + 1) != 0) {
      FUN_006ab060((undefined4 *)((int)&pHVar6[0x4b].unused + 1));
    }
    pvVar11 = *(HGDIOBJ *)((int)&pHVar6[0x42].unused + 1);
    if (pvVar11 != (HGDIOBJ)0x0) {
      DeleteObject(pvVar11);
      *(undefined4 *)((int)&pHVar6[0x42].unused + 1) = 0;
    }
    if (*(int *)((int)&pHVar6[0x40].unused + 1) != 0) {
      pHVar8 = *(HDC *)((int)&pHVar6[0x3f].unused + 1);
      if (pHVar8 != (HDC)0x0) {
        pHVar26 = (HDC)0x70dbad;
        SelectObject(pHVar8,*(HGDIOBJ *)((int)&pHVar6[0x41].unused + 1));
      }
      DeleteObject(*(HGDIOBJ *)((int)&pHVar6[0x40].unused + 1));
      *(undefined4 *)((int)&pHVar6[0x40].unused + 1) = 0;
    }
    if (*(int *)((int)&pHVar6[0x45].unused + 1) != 0) {
      pHVar8 = *(HDC *)((int)&pHVar6[0x3f].unused + 1);
      if (pHVar8 != (HDC)0x0) {
        SelectPalette(pHVar8,*(HPALETTE *)((int)&pHVar6[0x46].unused + 1),0);
        pHVar26 = pHVar8;
      }
      DeleteObject(*(HGDIOBJ *)((int)&pHVar6[0x45].unused + 1));
      *(undefined4 *)((int)&pHVar6[0x45].unused + 1) = 0;
    }
    if (*(int *)((int)&pHVar6[0x47].unused + 1) != 0) {
      pHVar8 = *(HDC *)((int)&pHVar6[0x3f].unused + 1);
      if (pHVar8 != (HDC)0x0) {
        pHVar26 = (HDC)0x70dc0c;
        SelectObject(pHVar8,*(HGDIOBJ *)((int)&pHVar6[0x48].unused + 1));
      }
      DeleteObject(*(HGDIOBJ *)((int)&pHVar6[0x47].unused + 1));
      *(undefined4 *)((int)&pHVar6[0x47].unused + 1) = 0;
    }
    pHVar8 = *(HDC *)((int)&pHVar6[0x3f].unused + 1);
    if (pHVar8 != (HDC)0x0) {
      pHVar26 = (HDC)0x70dc2d;
      ReleaseDC((HWND)0x0,pHVar8);
      *(undefined4 *)((int)&pHVar6[0x3f].unused + 1) = 0;
    }
    if (*(int *)((int)&pHVar6[0x49].unused + 1) != 0) {
      FUN_006ab060((undefined4 *)((int)&pHVar6[0x49].unused + 1));
    }
  }
  DAT_00858df8 = pHVar26;
  return pHVar6;
}

