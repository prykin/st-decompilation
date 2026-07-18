
void thunk_FUN_00507f60(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char cVar8;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  int *piVar10;
  char *pcVar11;
  short *psVar12;
  int *piVar13;
  void *unaff_EDI;
  int *piVar14;
  undefined4 *puVar15;
  short *psVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  undefined4 auStack_104 [4];
  undefined4 uStack_f4;
  undefined4 auStack_e4 [4];
  undefined4 uStack_d4;
  undefined4 *puStack_c4;
  undefined4 auStack_c0 [16];
  void *pvStack_80;
  int iStack_7c;
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  short asStack_73 [6];
  char cStack_67;
  undefined1 auStack_60 [5];
  int iStack_5b;
  byte abStack_4d [2];
  char cStack_4b;
  char cStack_48;
  short sStack_42;
  char cStack_40;
  char cStack_3e;
  ushort uStack_3d;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  ushort *puStack_18;
  uint uStack_14;
  byte *pbStack_10;
  uint uStack_c;
  byte *pbStack_8;
  
  puStack_c4 = DAT_00858df8;
  DAT_00858df8 = &puStack_c4;
  iVar3 = __setjmp3(auStack_c0,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = puStack_c4;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7c2700,0x497);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar13 = (int *)((int)pvStack_80 + 0xbf5);
  piVar10 = piVar13;
  piVar14 = &iStack_7c;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar14 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar14 = piVar14 + 1;
  }
  piVar10 = piVar13;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  thunk_FUN_0043beb0(DAT_007fa174,4,piVar13);
  cVar7 = *(char *)((int)pvStack_80 + 0xbfa);
  if ((cStack_77 != cVar7) || (cStack_76 != *(char *)((int)pvStack_80 + 0xbfb))) {
LAB_005091b9:
    thunk_FUN_005061c0(1);
    thunk_FUN_005097e0('\x01');
    thunk_FUN_00506040((int)pvStack_80);
    DAT_00858df8 = puStack_c4;
    return;
  }
  if ((*(char *)((int)pvStack_80 + 0xbfb) == '\x02') && (cVar7 == '\x01')) {
    cVar7 = '\0';
    cVar8 = '\0';
    iVar3 = 0;
    do {
      if (*(char *)((int)pvStack_80 + iVar3 + 0xbfe) != '\0') {
        cVar8 = cVar8 + '\x01';
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    iVar3 = 0;
    do {
      if (*(char *)((int)asStack_73 + iVar3) != '\0') {
        cVar7 = cVar7 + '\x01';
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    if (cVar8 == cVar7) {
      iVar3 = 3;
      bVar17 = true;
      psVar12 = (short *)((int)pvStack_80 + 0xbfe);
      psVar16 = asStack_73;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar17 = *psVar12 == *psVar16;
        psVar12 = psVar12 + 1;
        psVar16 = psVar16 + 1;
      } while (bVar17);
      if (bVar17) {
        if (*(char *)((int)pvStack_80 + 0xbfd) != cStack_74) {
          thunk_FUN_004f1610(pvStack_80,'\0');
        }
      }
      else {
        *(undefined4 *)((int)pvStack_80 + 0x28) = 5;
        FUN_006e6080(pvStack_80,2,*(undefined4 *)((int)pvStack_80 + 0x302),
                     (undefined4 *)((int)pvStack_80 + 0x18));
        pbStack_8 = (byte *)((uint)pbStack_8 & 0xffffff00);
        pcVar11 = (char *)((int)pvStack_80 + 0xbfe);
        do {
          if (*pcVar11 != '\0') {
            thunk_FUN_004f17d0(pvStack_80,0,(byte)pbStack_8);
          }
          bVar2 = (byte)pbStack_8 + 1;
          pcVar11 = pcVar11 + 1;
          pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,bVar2);
        } while (bVar2 < 6);
        thunk_FUN_004f1610(pvStack_80,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar3 = 3;
      bVar17 = true;
      psVar12 = (short *)((int)pvStack_80 + 0xc04);
      psVar16 = asStack_73 + 3;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar17 = *psVar12 == *psVar16;
        psVar12 = psVar12 + 1;
        psVar16 = psVar16 + 1;
      } while (bVar17);
      if ((!bVar17) || (*(char *)((int)pvStack_80 + 0xbfc) != cStack_75)) {
        thunk_FUN_004f4570(pvStack_80,'\0',(int)pvStack_80 + 0xbf5,(int)&iStack_7c);
      }
    }
    else {
      thunk_FUN_005097e0('\x01');
    }
    if (((*(char *)((int)pvStack_80 + 0xc0a) != cStack_67) ||
        (*(char *)((int)pvStack_80 + 0xbfc) != cStack_75)) &&
       (*(int *)((int)pvStack_80 + 0x9c4) != 0)) {
      *(undefined4 *)((int)pvStack_80 + 0x28) = 0x20;
      if (*(char *)((int)pvStack_80 + 0xbfc) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(byte *)((int)pvStack_80 + 0xc0a);
      }
      *(uint *)((int)pvStack_80 + 0x2c) = uVar4;
      FUN_006e6080(pvStack_80,2,*(undefined4 *)((int)pvStack_80 + 0x9c4),
                   (undefined4 *)((int)pvStack_80 + 0x18));
    }
    if (*(int *)((int)pvStack_80 + 0xc12) == auStack_60._1_4_) {
      iVar3 = (*(int *)(*(int *)((int)pvStack_80 + 0x194) + 4) -
              *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 4)) / 2;
      if (*(byte *)((int)pvStack_80 + 0xc24) != abStack_4d[0]) {
        FUN_006b4170(*(int *)((int)pvStack_80 + 0x194),0,iVar3 + 0x36,0x5d,7,0x21,0);
        bVar2 = *(byte *)((int)pvStack_80 + 0xc24);
        uStack_c = CONCAT31(uStack_c._1_3_,bVar2);
        cVar7 = (char)(((uint)bVar2 * 0x21) / 100);
        pbStack_10 = (byte *)CONCAT31(pbStack_10._1_3_,cVar7);
        if ((bVar2 != 0) && (cVar7 == '\0')) {
          pbStack_10 = (byte *)CONCAT31(pbStack_10._1_3_,1);
        }
        if (bVar2 < 0x46) {
          iVar9 = (-(uint)(bVar2 < 0x14) & 5) + 5;
        }
        else {
          iVar9 = 0;
        }
        uVar4 = (uint)pbStack_10 & 0xff;
        FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar3 + 0x37,0x7e - uVar4,
                     *(int *)((int)pvStack_80 + 0x28a),0,iVar9,
                     *(int *)(*(int *)((int)pvStack_80 + 0x28a) + 8) - uVar4,5,uVar4);
        FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar3 + 0x3f,0x5c,
                     *(int *)((int)pvStack_80 + 0x9ed),0,0x3f,0xc,0x75,0x11);
        FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar3 + 0x3f,0x6c,
                     *(int *)((int)pvStack_80 + 0x9ed),0,0x3f,0x1c,0x44,0x13);
        thunk_FUN_004f1d90(*(int *)((int)pvStack_80 + 0x194),iVar3 + 0x41,0x5d,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(undefined1 *)((int)pvStack_80 + 0xc24)),0x2714);
        thunk_FUN_004f2130(*(int *)((int)pvStack_80 + 0x194),iVar3 + 0x41,0x68,
                           *(ushort *)((int)pvStack_80 + 0xc1c),*(ushort *)((int)pvStack_80 + 0xc20)
                           ,4,2);
        if (-1 < (int)*(uint *)((int)pvStack_80 + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_80 + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_80 + 0x50),*(uint *)((int)pvStack_80 + 0xa8));
        }
      }
    }
    else {
      thunk_FUN_005061c0(1);
      thunk_FUN_005097e0('\0');
      thunk_FUN_00506040((int)pvStack_80);
    }
    if (*(int *)((int)pvStack_80 + 0xc4d) == iStack_24) {
      DAT_00858df8 = puStack_c4;
      return;
    }
    thunk_FUN_00504e60();
    DAT_00858df8 = puStack_c4;
    return;
  }
  if (cVar7 != '\x01') {
    if (cVar7 != '\x04') {
      DAT_00858df8 = puStack_c4;
      return;
    }
    if (iStack_7c == *(int *)((int)pvStack_80 + 0xbf5)) {
      switch(*(int *)((int)pvStack_80 + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfd:
      case 0xfe:
        goto switchD_00508349_caseD_dd;
      default:
        DAT_00858df8 = puStack_c4;
        return;
      }
    }
    goto LAB_005091b9;
  }
  if ((iStack_7c != *(int *)((int)pvStack_80 + 0xbf5)) ||
     (cStack_78 != *(char *)((int)pvStack_80 + 0xbf9))) goto LAB_005091b9;
  cVar7 = '\0';
  cVar8 = '\0';
  iVar3 = 0;
  do {
    if (*(char *)((int)pvStack_80 + iVar3 + 0xbfe) != '\0') {
      cVar8 = cVar8 + '\x01';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  iVar3 = 0;
  do {
    if (*(char *)((int)asStack_73 + iVar3) != '\0') {
      cVar7 = cVar7 + '\x01';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  if (cVar8 == cVar7) {
    iVar3 = 3;
    bVar17 = true;
    psVar12 = (short *)((int)pvStack_80 + 0xbfe);
    psVar16 = asStack_73;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar17 = *psVar12 == *psVar16;
      psVar12 = psVar12 + 1;
      psVar16 = psVar16 + 1;
    } while (bVar17);
    if (bVar17) {
      if (*(char *)((int)pvStack_80 + 0xbfd) != cStack_74) {
        thunk_FUN_004f1610(pvStack_80,'\0');
      }
    }
    else {
      *(undefined4 *)((int)pvStack_80 + 0x28) = 5;
      FUN_006e6080(pvStack_80,2,*(undefined4 *)((int)pvStack_80 + 0x302),
                   (undefined4 *)((int)pvStack_80 + 0x18));
      pbStack_8 = (byte *)((uint)pbStack_8 & 0xffffff00);
      pcVar11 = (char *)((int)pvStack_80 + 0xbfe);
      do {
        if (*pcVar11 != '\0') {
          thunk_FUN_004f17d0(pvStack_80,0,(byte)pbStack_8);
        }
        bVar2 = (byte)pbStack_8 + 1;
        pcVar11 = pcVar11 + 1;
        pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,bVar2);
      } while (bVar2 < 6);
      thunk_FUN_004f1610(pvStack_80,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar3 = 3;
    bVar17 = true;
    psVar12 = (short *)((int)pvStack_80 + 0xc04);
    psVar16 = asStack_73 + 3;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar17 = *psVar12 == *psVar16;
      psVar12 = psVar12 + 1;
      psVar16 = psVar16 + 1;
    } while (bVar17);
    if ((!bVar17) || (*(char *)((int)pvStack_80 + 0xbfc) != cStack_75)) {
      thunk_FUN_004f4570(pvStack_80,'\0',(int)pvStack_80 + 0xbf5,(int)&iStack_7c);
    }
  }
  else {
    thunk_FUN_005097e0('\x01');
  }
  if (((*(char *)((int)pvStack_80 + 0xc0a) != cStack_67) ||
      (*(char *)((int)pvStack_80 + 0xbfc) != cStack_75)) && (*(int *)((int)pvStack_80 + 0x9c4) != 0)
     ) {
    *(undefined4 *)((int)pvStack_80 + 0x28) = 0x20;
    if (*(char *)((int)pvStack_80 + 0xbfc) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)((int)pvStack_80 + 0xc0a);
    }
    *(uint *)((int)pvStack_80 + 0x2c) = uVar4;
    FUN_006e6080(pvStack_80,2,*(undefined4 *)((int)pvStack_80 + 0x9c4),
                 (undefined4 *)((int)pvStack_80 + 0x18));
  }
  if (((*(int *)((int)pvStack_80 + 0xbf5) == 0x43) || (*(int *)((int)pvStack_80 + 0xbf5) == 0x4c))
     && ((*(char *)((int)pvStack_80 + 0xc11) != auStack_60[0] ||
         (*(char *)((int)pvStack_80 + 0xbfc) != cStack_75)))) {
    *(undefined4 *)((int)pvStack_80 + 0x28) = 0x20;
    if (*(char *)((int)pvStack_80 + 0xbfc) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = (-(uint)(*(char *)((int)pvStack_80 + 0xc11) != '\0') & 2) + 1;
    }
    *(int *)((int)pvStack_80 + 0x2c) = iVar3;
    FUN_006e6080(pvStack_80,2,*(undefined4 *)((int)pvStack_80 + 0x30c),
                 (undefined4 *)((int)pvStack_80 + 0x18));
  }
  switch(*(undefined4 *)((int)pvStack_80 + 0xbf5)) {
  case 0x32:
  case 0x40:
  case 0x44:
  case 0x49:
    if ((*(int *)((int)pvStack_80 + 0xc12) == auStack_60._1_4_) &&
       (*(char *)((int)pvStack_80 + 0xc26) == cStack_4b)) {
      iVar3 = (*(int *)(*(int *)((int)pvStack_80 + 0x194) + 4) -
              *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 4)) / 2;
      if (*(byte *)((int)pvStack_80 + 0xc24) != abStack_4d[0]) {
        FUN_006b4170(*(int *)((int)pvStack_80 + 0x194),0,iVar3 + 0x36,0x5d,7,0x21,0);
        bVar2 = *(byte *)((int)pvStack_80 + 0xc24);
        cVar7 = (char)(((uint)bVar2 * 0x21) / 100);
        uStack_c = CONCAT31(uStack_c._1_3_,cVar7);
        if ((bVar2 != 0) && (cVar7 == '\0')) {
          uStack_c = CONCAT31(uStack_c._1_3_,1);
        }
        if (bVar2 < 0x46) {
          iVar9 = (-(uint)(bVar2 < 0x14) & 5) + 5;
        }
        else {
          iVar9 = 0;
        }
        uVar4 = uStack_c & 0xff;
        FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar3 + 0x37,0x7e - uVar4,
                     *(int *)((int)pvStack_80 + 0x28a),0,iVar9,
                     *(int *)(*(int *)((int)pvStack_80 + 0x28a) + 8) - uVar4,5,uVar4);
        FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar3 + 0x3f,0x5c,
                     *(int *)((int)pvStack_80 + 0x9ed),0,0x3f,0xc,0x75,0x11);
        FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar3 + 0x3f,0x6c,
                     *(int *)((int)pvStack_80 + 0x9ed),0,0x3f,0x1c,0x44,0x13);
        thunk_FUN_004f1d90(*(int *)((int)pvStack_80 + 0x194),iVar3 + 0x41,0x5d,
                           CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                    *(undefined1 *)((int)pvStack_80 + 0xc24)),0x2714);
        thunk_FUN_004f2130(*(int *)((int)pvStack_80 + 0x194),iVar3 + 0x41,0x68,
                           *(ushort *)((int)pvStack_80 + 0xc1c),*(ushort *)((int)pvStack_80 + 0xc20)
                           ,4,2);
        if (-1 < (int)*(uint *)((int)pvStack_80 + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_80 + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_80 + 0x50),*(uint *)((int)pvStack_80 + 0xa8));
        }
      }
      if ((*(int *)((int)pvStack_80 + 0xbf5) != 0x44) ||
         (*(ushort *)((int)pvStack_80 + 0xc34) == uStack_3d)) goto switchD_0050858c_caseD_3b;
      thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),
                         ((*(undefined4 **)((int)pvStack_80 + 0x194))[1] -
                         *(int *)(*(byte **)((int)pvStack_80 + 0xa01) + 4)) / 2,0x37,'\x01',
                         *(byte **)((int)pvStack_80 + 0xa01));
      uVar4 = (uint)*(ushort *)((int)pvStack_80 + 0xc34);
      uVar6 = FUN_006b0140(0x2725,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar6,uVar4);
      FUN_00710a90(*(int *)((int)pvStack_80 + 0x194),0,0x56,0x39,0x6d,0x15);
      FUN_00711b70(&DAT_0080f33a,-2,-1,0,-1,-1);
      uVar4 = *(uint *)((int)pvStack_80 + 0x15c);
      if ((int)uVar4 < 0) goto switchD_0050858c_caseD_3b;
      uVar19 = *(uint *)((int)pvStack_80 + 0xa8);
      uVar18 = *(uint *)((int)pvStack_80 + 0x50);
      goto LAB_0050918d;
    }
    iVar3 = 0;
    goto LAB_00508b35;
  case 0x33:
    if ((*(int *)((int)pvStack_80 + 0xc12) == auStack_60._1_4_) &&
       (*(int *)((int)pvStack_80 + 0xc16) == iStack_5b)) {
      iVar3 = 0x3a;
      uStack_c = 2;
      puStack_18 = (ushort *)((int)pvStack_80 + 0xc1c);
      pbStack_10 = abStack_4d;
      pbStack_8 = (byte *)((int)pvStack_80 + 0xc24);
      iVar9 = (*(int *)(*(int *)((int)pvStack_80 + 0x194) + 4) -
              *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 4)) / 2;
      do {
        if (*pbStack_8 != *pbStack_10) {
          FUN_006b4170(*(int *)((int)pvStack_80 + 0x194),0,iVar9 + 0x36,iVar3,7,0x21,0);
          bVar2 = *pbStack_8;
          uStack_1c = CONCAT31(uStack_1c._1_3_,bVar2);
          cVar7 = (char)(((uint)bVar2 * 0x21) / 100);
          uStack_20 = CONCAT31(uStack_20._1_3_,cVar7);
          if ((bVar2 != 0) && (cVar7 == '\0')) {
            uStack_20 = CONCAT31(uStack_20._1_3_,1);
          }
          if (bVar2 < 0x46) {
            uStack_14 = (-(uint)(bVar2 < 0x14) & 5) + 5;
          }
          else {
            uStack_14 = 0;
          }
          uVar4 = uStack_20 & 0xff;
          FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar9 + 0x37,
                       (iVar3 - uVar4) + 0x21,*(int *)((int)pvStack_80 + 0x28a),0,uStack_14,
                       *(int *)(*(int *)((int)pvStack_80 + 0x28a) + 8) - uVar4,5,uVar4);
          FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar9 + 0x3f,iVar3 + -1,
                       *(int *)((int)pvStack_80 + 0x9ed),0,0x3f,0xc,0x75,0x11);
          FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar9 + 0x3f,iVar3 + 0xf,
                       *(int *)((int)pvStack_80 + 0x9ed),0,0x3f,0x1c,0x44,0x13);
          thunk_FUN_004f1d90(*(int *)((int)pvStack_80 + 0x194),iVar9 + 0x41,iVar3,
                             CONCAT31((int3)((uint)extraout_ECX >> 8),'d' - *pbStack_8),0x36b1);
          thunk_FUN_004f2130(*(int *)((int)pvStack_80 + 0x194),iVar9 + 0x41,iVar3 + 0xb,*puStack_18,
                             puStack_18[2],4,2);
          if (-1 < (int)*(uint *)((int)pvStack_80 + 0x15c)) {
            FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_80 + 0x15c),0xffffffff,
                         *(uint *)((int)pvStack_80 + 0x50),*(uint *)((int)pvStack_80 + 0xa8));
          }
        }
        puStack_18 = puStack_18 + 1;
        pbStack_10 = pbStack_10 + 1;
        pbStack_8 = pbStack_8 + 1;
        iVar3 = iVar3 + 0x23;
        uStack_c = uStack_c + -1;
      } while (uStack_c != 0);
      uStack_c = 0;
      goto switchD_0050858c_caseD_3b;
    }
    break;
  case 0x34:
    thunk_FUN_00505230(pvStack_80,
                       (*(int *)(*(int *)((int)pvStack_80 + 0x194) + 4) -
                       *(int *)(*(int *)((int)pvStack_80 + 0x9f9) + 4)) / 2);
    pbStack_10 = (byte *)((int)pvStack_80 + 0xa2e);
    iVar3 = 0;
    piVar13 = (int *)((int)pvStack_80 + 0xa15);
    do {
      if (*piVar13 != 0) {
        if (DAT_0080874e == '\x01') {
          cVar7 = (*(char *)((int)pvStack_80 + 0x9d4) != '\x01') + '\x01';
        }
        else {
          cVar7 = '\x02' - (*(char *)((int)pvStack_80 + 0x9d4) != '\x01');
        }
        uVar6 = thunk_FUN_00525ef0(cVar7,(char)iVar3);
        *(undefined4 *)pbStack_10 = uVar6;
        if (*(char *)((int)pvStack_80 + 0xbfc) == cStack_75) {
          *(undefined4 *)((int)pvStack_80 + 0x28) = 5;
          iVar9 = *piVar13;
        }
        else {
          *(undefined4 *)((int)pvStack_80 + 0x28) = 0x20;
          *(uint *)((int)pvStack_80 + 0x2c) = (uint)(*(char *)((int)pvStack_80 + 0xbfc) != '\0');
          iVar9 = *piVar13;
        }
        FUN_006e6080(pvStack_80,2,iVar9,(undefined4 *)((int)pvStack_80 + 0x18));
      }
      iVar3 = iVar3 + 1;
      pbStack_10 = pbStack_10 + 0x27;
      piVar13 = piVar13 + 1;
    } while (iVar3 < 6);
    uVar4 = *(uint *)((int)pvStack_80 + 0x15c);
    if ((int)uVar4 < 0) goto switchD_0050858c_caseD_3b;
    uVar19 = *(uint *)((int)pvStack_80 + 0xa8);
    uVar18 = *(uint *)((int)pvStack_80 + 0x50);
    goto LAB_0050918d;
  case 0x35:
    iVar3 = ((*(undefined4 **)((int)pvStack_80 + 0x194))[1] -
            *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 4)) / 2;
    if (*(char *)((int)pvStack_80 + 0xc31) == cStack_40) {
      if (*(char *)((int)pvStack_80 + 0xc31) == '\0') {
        if (*(short *)((int)pvStack_80 + 0xc2f) != sStack_42) {
          thunk_FUN_005061c0(1);
          iVar3 = *(int *)((int)pvStack_80 + 0x302);
          if (iVar3 != 0) {
            puVar15 = auStack_e4;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
            uStack_d4 = 5;
            FUN_006e6080(pvStack_80,2,iVar3,auStack_e4);
          }
        }
        goto switchD_0050858c_caseD_3b;
      }
      if (*(char *)((int)pvStack_80 + 0xc33) == cStack_3e) goto switchD_0050858c_caseD_3b;
      FUN_006b55f0(*(undefined4 **)((int)pvStack_80 + 0x194),0,iVar3 + 0x39,0x65,
                   *(int *)((int)pvStack_80 + 0x9ed),0,0x39,0x15,0x4c,0x1b);
      thunk_FUN_005047c0(iVar3);
      uVar4 = *(uint *)((int)pvStack_80 + 0x15c);
      goto joined_r0x00508b00;
    }
    break;
  case 0x36:
  case 0x37:
  case 0x43:
  case 0x45:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x6f:
    if (*(char *)((int)pvStack_80 + 0xc29) == cStack_48) goto switchD_0050858c_caseD_3b;
    iVar3 = (*(int *)(*(int *)((int)pvStack_80 + 0x194) + 4) -
            *(int *)(*(int *)((int)pvStack_80 + 0x9f5) + 4)) / 2;
    if (*(char *)((int)pvStack_80 + 0xc29) == -1) {
      *(undefined1 *)((int)pvStack_80 + 0xc29) = 0;
    }
    if (0x28 < *(byte *)((int)pvStack_80 + 0xc29)) {
      *(undefined1 *)((int)pvStack_80 + 0xc29) = 0x28;
    }
    pbStack_8 = (byte *)((uint)pbStack_8._1_3_ << 8);
    if (*(char *)((int)pvStack_80 + 0xc29) != '\0') {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),
                           iVar3 + 6 + ((uint)pbStack_8 & 0xff) * 4,0x75,'\x01',pbVar5);
        bVar2 = (byte)pbStack_8 + 1;
        pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,bVar2);
      } while (bVar2 < *(byte *)((int)pvStack_80 + 0xc29));
    }
    if ((byte)pbStack_8 < 0x28) {
      iVar9 = 0x28 - ((uint)pbStack_8 & 0xff);
      iVar3 = iVar3 + 6 + ((uint)pbStack_8 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),iVar3,0x75,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    uVar4 = *(uint *)((int)pvStack_80 + 0x15c);
    goto joined_r0x00508b00;
  case 0x38:
  case 0x39:
  case 0x4f:
    thunk_FUN_005044b0((*(int *)(*(int *)((int)pvStack_80 + 0x194) + 4) -
                       *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 4)) / 2);
    uVar4 = *(uint *)((int)pvStack_80 + 0x15c);
joined_r0x00508b00:
    if (-1 < (int)uVar4) {
LAB_00509179:
      uVar19 = *(uint *)((int)pvStack_80 + 0xa8);
      uVar18 = *(uint *)((int)pvStack_80 + 0x50);
LAB_0050918d:
      FUN_006b3640(DAT_008075a8,uVar4,0xffffffff,uVar18,uVar19);
    }
    goto switchD_0050858c_caseD_3b;
  case 0x3a:
    iVar3 = (*(int *)(*(int *)((int)pvStack_80 + 0x194) + 4) -
            *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 4)) / 2;
    if (*(char *)((int)pvStack_80 + 0xc3a) != cStack_37) {
      pbStack_8 = (byte *)((uint)pbStack_8._1_3_ << 8);
      if (*(char *)((int)pvStack_80 + 0xc3a) != '\0') {
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),
                             iVar3 + 0x70 + ((uint)pbStack_8 & 0xff) * 4,0x54,'\x01',pbVar5);
          bVar2 = (byte)pbStack_8 + 1;
          pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,bVar2);
        } while (bVar2 < *(byte *)((int)pvStack_80 + 0xc3a));
      }
      if ((byte)pbStack_8 < 0xf) {
        uStack_c = 0xf - ((uint)pbStack_8 & 0xff);
        iVar9 = iVar3 + 0x70 + ((uint)pbStack_8 & 0xff) * 4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),iVar9,0x54,'\x01',pbVar5);
          iVar9 = iVar9 + 4;
          uStack_c = uStack_c - 1;
        } while (uStack_c != 0);
      }
      if (-1 < (int)*(uint *)((int)pvStack_80 + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_80 + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_80 + 0x50),*(uint *)((int)pvStack_80 + 0xa8));
      }
    }
    if (*(char *)((int)pvStack_80 + 0xc3b) != cStack_36) {
      pbStack_8 = (byte *)((uint)pbStack_8 & 0xffffff00);
      if (*(char *)((int)pvStack_80 + 0xc3b) != '\0') {
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),
                             iVar3 + 0x70 + ((uint)pbStack_8 & 0xff) * 4,0x5f,'\x01',pbVar5);
          bVar2 = (byte)pbStack_8 + 1;
          pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,bVar2);
        } while (bVar2 < *(byte *)((int)pvStack_80 + 0xc3b));
      }
      if ((byte)pbStack_8 < 0xf) {
        uStack_c = 0xf - ((uint)pbStack_8 & 0xff);
        iVar9 = iVar3 + 0x70 + ((uint)pbStack_8 & 0xff) * 4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),iVar9,0x5f,'\x01',pbVar5);
          iVar9 = iVar9 + 4;
          uStack_c = uStack_c - 1;
        } while (uStack_c != 0);
      }
      if (-1 < (int)*(uint *)((int)pvStack_80 + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_80 + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_80 + 0x50),*(uint *)((int)pvStack_80 + 0xa8));
      }
    }
    if (*(ushort *)((int)pvStack_80 + 0xc34) == uStack_3d) goto switchD_0050858c_caseD_3b;
    pbStack_8 = (byte *)((uint)pbStack_8 & 0xffffff00);
    uStack_c = ((uint)*(ushort *)((int)pvStack_80 + 0xc34) * 0x28) / 400;
    if (uStack_c != 0) {
      uVar4 = 0;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),iVar3 + 0xb + uVar4 * 4,0x76,
                           '\x01',pbVar5);
        bVar2 = (byte)pbStack_8 + 1;
        pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,bVar2);
        uVar4 = (uint)bVar2;
      } while (uVar4 < uStack_c);
    }
    if ((byte)pbStack_8 < 0x28) {
      iVar3 = iVar3 + 0xb + ((uint)pbStack_8 & 0xff) * 4;
      iVar9 = 0x28 - ((uint)pbStack_8 & 0xff);
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),iVar3,0x76,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    uVar4 = *(uint *)((int)pvStack_80 + 0x15c);
    goto joined_r0x00509177;
  default:
    goto switchD_0050858c_caseD_3b;
  case 0x3c:
    cVar7 = *(char *)((int)pvStack_80 + 0xc3c);
    uStack_c = CONCAT31(uStack_c._1_3_,cVar7);
    if (cStack_35 != cVar7) {
      thunk_FUN_005061c0(1);
      thunk_FUN_005097e0('\x01');
      thunk_FUN_00506040((int)pvStack_80);
      goto switchD_0050858c_caseD_3b;
    }
    iVar3 = *(int *)((int)pvStack_80 + 0x9ed);
    puVar15 = *(undefined4 **)((int)pvStack_80 + 0x194);
    iVar9 = (puVar15[1] - *(int *)(iVar3 + 4)) / 2;
    if (cVar7 == '\x01') {
      FUN_006b55f0(puVar15,0,iVar9 + 0x39,0x65,iVar3,0,0x39,0x15,0x4c,0x1b);
      thunk_FUN_004f1d90(*(int *)((int)pvStack_80 + 0x194),iVar9 + 0x39,0x65,
                         CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                  *(undefined1 *)((int)pvStack_80 + 0xc3d)),0x2714);
      uStack_14 = 0;
      uVar4 = (uint)(*(int *)((int)pvStack_80 + 0xc3d) * 0x28) / 100;
      if (uVar4 != 0) {
        iVar3 = iVar9 + 0xb;
        uStack_14 = uVar4;
        uStack_c = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),iVar3,0x5c,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uStack_c = uStack_c - 1;
        } while (uStack_c != 0);
      }
      if (uStack_14 < 0x28) {
        iVar3 = iVar9 + 0xb + uStack_14 * 4;
        iVar9 = 0x28 - uStack_14;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_80 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_80 + 0x194),iVar3,0x5c,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else if (cVar7 == '\x02') {
      FUN_006b55f0(puVar15,0,iVar9,0x71,iVar3,0,0,0x21,*(int *)(iVar3 + 4),
                   *(int *)(iVar3 + 8) + -0x21);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)((int)pvStack_80 + 0xc3d));
      FUN_00710a90(*(int *)((int)pvStack_80 + 0x194),0,iVar9,0x71,
                   *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 4),
                   *(int *)(*(int *)((int)pvStack_80 + 0x9ed) + 8) + -0x21);
      FUN_007119c0(&DAT_0080f33a,-1,-1,0);
    }
    uVar4 = *(uint *)((int)pvStack_80 + 0x15c);
joined_r0x00509177:
    if ((int)uVar4 < 0) goto switchD_0050858c_caseD_3b;
    goto LAB_00509179;
  case 0x50:
    iVar3 = 3;
    bVar17 = true;
    psVar12 = (short *)((int)pvStack_80 + 0xc11);
    psVar16 = (short *)auStack_60;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar17 = *psVar12 == *psVar16;
      psVar12 = psVar12 + 1;
      psVar16 = psVar16 + 1;
    } while (bVar17);
    if (!bVar17) {
      piVar13 = (int *)((int)pvStack_80 + 0xa15);
      iVar3 = 6;
      do {
        if (*piVar13 != 0) {
          if (*(char *)((int)pvStack_80 + 0xbfc) == cStack_75) {
            *(undefined4 *)((int)pvStack_80 + 0x28) = 5;
            iVar9 = *piVar13;
          }
          else {
            *(undefined4 *)((int)pvStack_80 + 0x28) = 0x20;
            *(uint *)((int)pvStack_80 + 0x2c) = (uint)(*(char *)((int)pvStack_80 + 0xbfc) != '\0');
            iVar9 = *piVar13;
          }
          FUN_006e6080(pvStack_80,2,iVar9,(undefined4 *)((int)pvStack_80 + 0x18));
        }
        piVar13 = piVar13 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    goto switchD_0050858c_caseD_3b;
  }
  iVar3 = 1;
LAB_00508b35:
  thunk_FUN_005061c0(iVar3);
  thunk_FUN_005097e0('\0');
  thunk_FUN_00506040((int)pvStack_80);
switchD_0050858c_caseD_3b:
  if (*(int *)((int)pvStack_80 + 0xc4d) == iStack_24) {
    DAT_00858df8 = puStack_c4;
    return;
  }
  thunk_FUN_00504e60();
  DAT_00858df8 = puStack_c4;
  return;
switchD_00508349_caseD_dd:
  thunk_FUN_005061c0(1);
  iVar3 = *(int *)((int)pvStack_80 + 0x302);
  if (iVar3 == 0) {
    DAT_00858df8 = puStack_c4;
    return;
  }
  puVar15 = auStack_104;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  uStack_f4 = 5;
  FUN_006e6080(pvStack_80,2,iVar3,auStack_104);
  DAT_00858df8 = puStack_c4;
  return;
}

