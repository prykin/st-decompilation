
void thunk_FUN_0050c620(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  int *piVar12;
  char *pcVar13;
  short *psVar14;
  int *piVar15;
  void *unaff_EDI;
  int *piVar16;
  short *psVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 auStack_140 [4];
  undefined4 uStack_130;
  undefined4 auStack_120 [4];
  undefined4 uStack_110;
  undefined4 auStack_100 [4];
  undefined4 uStack_f0;
  undefined4 auStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 *puStack_c0;
  undefined4 auStack_bc [16];
  void *pvStack_7c;
  int iStack_78;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  short asStack_6f [6];
  char cStack_63;
  short asStack_62 [3];
  char cStack_5c;
  int iStack_5b;
  int iStack_57;
  ushort uStack_51;
  ushort uStack_4d;
  byte abStack_49 [5];
  byte bStack_44;
  byte bStack_43;
  short sStack_3e;
  char cStack_3c;
  char cStack_3a;
  char cStack_31;
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  uint uStack_14;
  int *piStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_c0 = DAT_00858df8;
  DAT_00858df8 = &puStack_c0;
  iVar3 = __setjmp3(auStack_bc,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = puStack_c0;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x8ae,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7c2700,0x8ae);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar15 = (int *)((int)pvStack_7c + 0xbf5);
  piVar12 = piVar15;
  piVar16 = &iStack_78;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar16 = *piVar12;
    piVar12 = piVar12 + 1;
    piVar16 = piVar16 + 1;
  }
  piVar12 = piVar15;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  thunk_FUN_0043beb0(DAT_007fa174,4,piVar15);
  cVar10 = *(char *)((int)pvStack_7c + 0xbfa);
  if ((cStack_73 != cVar10) || (cStack_72 != *(char *)((int)pvStack_7c + 0xbfb))) {
LAB_0050e007:
    thunk_FUN_0050a340();
    thunk_FUN_0050e7d0('\x01');
    thunk_FUN_00506040((int)pvStack_7c);
    DAT_00858df8 = puStack_c0;
    return;
  }
  if ((*(char *)((int)pvStack_7c + 0xbfb) == '\x02') && (cVar10 == '\x01')) {
    cVar10 = '\0';
    cVar11 = '\0';
    uVar4 = 0;
    do {
      if (*(char *)((int)pvStack_7c + uVar4 + 0xbfe) != '\0') {
        cVar11 = cVar11 + '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    uVar4 = 0;
    do {
      if (*(char *)((int)asStack_6f + uVar4) != '\0') {
        cVar10 = cVar10 + '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    if (cVar11 == cVar10) {
      iVar3 = 3;
      bVar19 = true;
      psVar14 = (short *)((int)pvStack_7c + 0xbfe);
      psVar17 = asStack_6f;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar19 = *psVar14 == *psVar17;
        psVar14 = psVar14 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar19);
      if (bVar19) {
        if (*(char *)((int)pvStack_7c + 0xbfd) != cStack_70) {
          thunk_FUN_004f1610(pvStack_7c,'\0');
        }
      }
      else {
        *(undefined4 *)((int)pvStack_7c + 0x28) = 5;
        FUN_006e6080(pvStack_7c,2,*(undefined4 *)((int)pvStack_7c + 0x302),
                     (undefined4 *)((int)pvStack_7c + 0x18));
        uStack_c = uStack_c & 0xffffff00;
        pcVar13 = (char *)((int)pvStack_7c + 0xbfe);
        do {
          if (*pcVar13 != '\0') {
            thunk_FUN_004f17d0(pvStack_7c,0,(byte)uStack_c);
          }
          bVar2 = (char)uStack_c + 1;
          pcVar13 = pcVar13 + 1;
          uStack_c = CONCAT31(uStack_c._1_3_,bVar2);
        } while (bVar2 < 6);
        thunk_FUN_004f1610(pvStack_7c,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar3 = 3;
      bVar19 = true;
      psVar14 = (short *)((int)pvStack_7c + 0xc04);
      psVar17 = asStack_6f + 3;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar19 = *psVar14 == *psVar17;
        psVar14 = psVar14 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar19);
      if ((!bVar19) || (*(char *)((int)pvStack_7c + 0xbfc) != cStack_71)) {
        thunk_FUN_004f4570(pvStack_7c,'\0',(int)pvStack_7c + 0xbf5,(int)&iStack_78);
      }
    }
    else {
      thunk_FUN_0050e7d0('\x01');
    }
    if (((*(char *)((int)pvStack_7c + 0xc0a) != cStack_63) ||
        (*(char *)((int)pvStack_7c + 0xbfc) != cStack_71)) &&
       (*(int *)((int)pvStack_7c + 0x9c4) != 0)) {
      *(undefined4 *)((int)pvStack_7c + 0x28) = 0x20;
      if (*(char *)((int)pvStack_7c + 0xbfc) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(byte *)((int)pvStack_7c + 0xc0a);
      }
      *(uint *)((int)pvStack_7c + 0x2c) = uVar4;
      FUN_006e6080(pvStack_7c,2,*(undefined4 *)((int)pvStack_7c + 0x9c4),
                   (undefined4 *)((int)pvStack_7c + 0x18));
    }
    if (*(int *)((int)pvStack_7c + 0xc12) == iStack_5b) {
      if (*(byte *)((int)pvStack_7c + 0xc24) != abStack_49[0]) {
        uVar4 = ((uint)*(byte *)((int)pvStack_7c + 0xc24) * 0x21) / 100;
        uStack_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          uStack_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar3 = uStack_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        FUN_006b55f0(*(undefined4 **)((int)pvStack_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)pvStack_7c + 0x9e1),0,0x5c,10,0x3c,0x1e);
        thunk_FUN_004f2350(*(int *)((int)pvStack_7c + 0x194),*(ushort *)((int)pvStack_7c + 0xc1c),
                           *(ushort *)((int)pvStack_7c + 0xc20),7,4);
        if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
        }
      }
    }
    else {
      thunk_FUN_0050a340();
      thunk_FUN_0050e7d0('\0');
      thunk_FUN_00506040((int)pvStack_7c);
    }
    if (*(int *)((int)pvStack_7c + 0xc4d) == iStack_20) {
      DAT_00858df8 = puStack_c0;
      return;
    }
    thunk_FUN_00504e60();
    DAT_00858df8 = puStack_c0;
    return;
  }
  if (cVar10 != '\x01') {
    if (cVar10 != '\x04') {
      DAT_00858df8 = puStack_c0;
      return;
    }
    if (iStack_78 == *(int *)((int)pvStack_7c + 0xbf5)) {
      switch(*(int *)((int)pvStack_7c + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfd:
      case 0xfe:
        goto switchD_0050c9ae_caseD_dd;
      default:
        DAT_00858df8 = puStack_c0;
        return;
      }
    }
    goto LAB_0050e007;
  }
  if ((iStack_78 != *(int *)((int)pvStack_7c + 0xbf5)) ||
     (cStack_74 != *(char *)((int)pvStack_7c + 0xbf9))) goto LAB_0050e007;
  cVar10 = '\0';
  cVar11 = '\0';
  uVar4 = 0;
  do {
    if (*(char *)((int)pvStack_7c + uVar4 + 0xbfe) != '\0') {
      cVar11 = cVar11 + '\x01';
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  uVar4 = 0;
  do {
    if (*(char *)((int)asStack_6f + uVar4) != '\0') {
      cVar10 = cVar10 + '\x01';
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  if (cVar11 == cVar10) {
    iVar3 = 3;
    bVar19 = true;
    psVar14 = (short *)((int)pvStack_7c + 0xbfe);
    psVar17 = asStack_6f;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar19 = *psVar14 == *psVar17;
      psVar14 = psVar14 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar19);
    if (bVar19) {
      if (*(char *)((int)pvStack_7c + 0xbfd) != cStack_70) {
        thunk_FUN_004f1610(pvStack_7c,'\0');
      }
    }
    else {
      *(undefined4 *)((int)pvStack_7c + 0x28) = 5;
      FUN_006e6080(pvStack_7c,2,*(undefined4 *)((int)pvStack_7c + 0x302),
                   (undefined4 *)((int)pvStack_7c + 0x18));
      uStack_c = uStack_c & 0xffffff00;
      pcVar13 = (char *)((int)pvStack_7c + 0xbfe);
      do {
        if (*pcVar13 != '\0') {
          thunk_FUN_004f17d0(pvStack_7c,0,(byte)uStack_c);
        }
        bVar2 = (char)uStack_c + 1;
        pcVar13 = pcVar13 + 1;
        uStack_c = CONCAT31(uStack_c._1_3_,bVar2);
      } while (bVar2 < 6);
      thunk_FUN_004f1610(pvStack_7c,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar3 = 3;
    bVar19 = true;
    psVar14 = (short *)((int)pvStack_7c + 0xc04);
    psVar17 = asStack_6f + 3;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar19 = *psVar14 == *psVar17;
      psVar14 = psVar14 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar19);
    if ((!bVar19) || (*(char *)((int)pvStack_7c + 0xbfc) != cStack_71)) {
      thunk_FUN_004f4570(pvStack_7c,'\0',(int)pvStack_7c + 0xbf5,(int)&iStack_78);
    }
  }
  else {
    thunk_FUN_0050e7d0('\x01');
  }
  if (((*(char *)((int)pvStack_7c + 0xc0a) != cStack_63) ||
      (*(char *)((int)pvStack_7c + 0xbfc) != cStack_71)) && (*(int *)((int)pvStack_7c + 0x9c4) != 0)
     ) {
    *(undefined4 *)((int)pvStack_7c + 0x28) = 0x20;
    if (*(char *)((int)pvStack_7c + 0xbfc) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)((int)pvStack_7c + 0xc0a);
    }
    *(uint *)((int)pvStack_7c + 0x2c) = uVar4;
    FUN_006e6080(pvStack_7c,2,*(undefined4 *)((int)pvStack_7c + 0x9c4),
                 (undefined4 *)((int)pvStack_7c + 0x18));
  }
  iVar3 = 3;
  bVar19 = true;
  psVar14 = (short *)((int)pvStack_7c + 0xc0b);
  psVar17 = asStack_62;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar19 = *psVar14 == *psVar17;
    psVar14 = psVar14 + 1;
    psVar17 = psVar17 + 1;
  } while (bVar19);
  if ((!bVar19) || (*(char *)((int)pvStack_7c + 0xbfc) != cStack_71)) {
    uVar4 = 0;
    piVar15 = (int *)((int)pvStack_7c + 0xb1f);
    do {
      if (*piVar15 != 0) {
        *(undefined4 *)((int)pvStack_7c + 0x28) = 0x20;
        if (*(char *)((int)pvStack_7c + 0xbfc) == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = (uint)*(byte *)((int)pvStack_7c + uVar4 + 0xc0b);
        }
        *(uint *)((int)pvStack_7c + 0x2c) = uVar6;
        FUN_006e6080(pvStack_7c,2,*piVar15,(undefined4 *)((int)pvStack_7c + 0x18));
      }
      uVar4 = uVar4 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar4 < 6);
  }
  switch(*(undefined4 *)((int)pvStack_7c + 0xbf5)) {
  case 0x53:
    cVar10 = *(char *)((int)pvStack_7c + 0xc3c);
    if (cStack_31 == cVar10) {
      if (cVar10 == '\x01') {
        FUN_006b55f0(*(undefined4 **)((int)pvStack_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)pvStack_7c + 0x9e1),0,0x5c,10,0x32,0x19);
        thunk_FUN_004f1f60(*(int *)((int)pvStack_7c + 0x194),0x5c,0x50,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(undefined1 *)((int)pvStack_7c + 0xc3d)),0x2714);
        uVar4 = (uint)(*(int *)((int)pvStack_7c + 0xc3d) * 0x21) / 100;
        uStack_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          uStack_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar3 = uStack_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
      }
      else if (cVar10 == '\x02') {
        FUN_006b55f0(*(undefined4 **)((int)pvStack_7c + 0x194),0,0x28,0x79,
                     *(int *)((int)pvStack_7c + 0x9e1),0,0x28,0x33,0x9b,0xf);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)((int)pvStack_7c + 0xc3d));
        FUN_00710a90(*(int *)((int)pvStack_7c + 0x194),0,0x28,0x79,0x9b,0xf);
        FUN_007119c0(&DAT_0080f33a,-1,-1,1);
      }
      else if (cVar10 == '\x04') {
        if (*(char *)((int)pvStack_7c + 0xc31) == cStack_3c) {
          if (*(char *)((int)pvStack_7c + 0xc33) != cStack_3a) {
            FUN_006b55f0(*(undefined4 **)((int)pvStack_7c + 0x194),0,0x5c,0x50,
                         *(int *)((int)pvStack_7c + 0x9e1),0,0x5c,10,0x32,0x19);
            thunk_FUN_005049a0();
          }
        }
        else {
          thunk_FUN_0050a340();
          thunk_FUN_0050e7d0('\x01');
          thunk_FUN_00506040((int)pvStack_7c);
        }
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
      break;
    }
    goto LAB_0050ce3f;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    if (*(char *)((int)pvStack_7c + 0xc31) == cStack_3c) {
      if (*(char *)((int)pvStack_7c + 0xc31) == '\0') {
        if (*(short *)((int)pvStack_7c + 0xc2f) != sStack_3e) {
          thunk_FUN_005061c0(1);
          iVar3 = *(int *)((int)pvStack_7c + 0x302);
          if (iVar3 != 0) {
            puVar18 = auStack_120;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            uStack_110 = 5;
            FUN_006e6080(pvStack_7c,2,iVar3,auStack_120);
          }
        }
      }
      else if (*(char *)((int)pvStack_7c + 0xc33) != cStack_3a) {
        FUN_006b55f0(*(undefined4 **)((int)pvStack_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)pvStack_7c + 0x9e1),0,0x5c,10,0x32,0x19);
        thunk_FUN_005049a0();
        if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
        }
      }
      break;
    }
LAB_0050ce3f:
    thunk_FUN_0050a340();
    thunk_FUN_0050e7d0('\x01');
    thunk_FUN_00506040((int)pvStack_7c);
    break;
  case 0x5b:
    thunk_FUN_00505960();
    uVar4 = 0;
    do {
      if (*(int *)((int)pvStack_7c + uVar4 * 4 + 0xa15) != 0) {
        if (uVar4 == 3) {
          if (*(char *)((int)pvStack_7c + 0x9d4) == '\x01') {
            *(undefined1 *)((int)pvStack_7c + 0xaa2) = 0;
            *(undefined4 *)((int)pvStack_7c + 0x28) = 0x20;
            *(undefined4 *)((int)pvStack_7c + 0x2c) = 0;
            uVar20 = *(undefined4 *)((int)pvStack_7c + 0xa21);
          }
          else {
            *(undefined1 *)((int)pvStack_7c + 0xaa2) = 2;
            uVar20 = thunk_FUN_00525ef0(*(char *)((int)pvStack_7c + 0x9d4) + '\x02',3);
            *(undefined4 *)((int)pvStack_7c + 0xaa3) = uVar20;
            if (*(char *)((int)pvStack_7c + 0xbfc) == cStack_71) {
              *(undefined4 *)((int)pvStack_7c + 0x28) = 5;
              uVar20 = *(undefined4 *)((int)pvStack_7c + 0xa21);
            }
            else {
              *(undefined4 *)((int)pvStack_7c + 0x28) = 0x20;
              *(uint *)((int)pvStack_7c + 0x2c) = (uint)(*(char *)((int)pvStack_7c + 0xbfc) != '\0')
              ;
              uVar20 = *(undefined4 *)((int)pvStack_7c + 0xa21);
            }
          }
        }
        else {
          uVar20 = thunk_FUN_00525ef0(*(char *)((int)pvStack_7c + 0x9d4) + '\x02',(char)uVar4);
          *(undefined4 *)(uVar4 * 0x27 + 0xa2e + (int)pvStack_7c) = uVar20;
          if (*(char *)((int)pvStack_7c + 0xbfc) == cStack_71) {
            *(undefined4 *)((int)pvStack_7c + 0x28) = 5;
            uVar20 = *(undefined4 *)((int)pvStack_7c + uVar4 * 4 + 0xa15);
          }
          else {
            *(undefined4 *)((int)pvStack_7c + 0x28) = 0x20;
            *(uint *)((int)pvStack_7c + 0x2c) = (uint)(*(char *)((int)pvStack_7c + 0xbfc) != '\0');
            uVar20 = *(undefined4 *)((int)pvStack_7c + uVar4 * 4 + 0xa15);
          }
        }
        FUN_006e6080(pvStack_7c,2,uVar20,(undefined4 *)((int)pvStack_7c + 0x18));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                   *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
    }
    break;
  case 0x5c:
    if (*(int *)((int)pvStack_7c + 0xc12) == iStack_5b) {
      if (*(byte *)((int)pvStack_7c + 0xc24) != abStack_49[0]) {
        uVar4 = ((uint)*(byte *)((int)pvStack_7c + 0xc24) * 0x21) / 100;
        uStack_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          uStack_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar3 = uStack_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        FUN_006b55f0(*(undefined4 **)((int)pvStack_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)pvStack_7c + 0x9e1),0,0x5c,10,0x3c,0x1e);
        thunk_FUN_004f2350(*(int *)((int)pvStack_7c + 0x194),*(ushort *)((int)pvStack_7c + 0xc1c),
                           *(ushort *)((int)pvStack_7c + 0xc20),7,4);
        if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
        }
      }
    }
    else {
      thunk_FUN_0050a340();
      thunk_FUN_0050e7d0('\0');
      thunk_FUN_00506040((int)pvStack_7c);
    }
    break;
  case 0x5d:
    thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),0,0x46,'\x01',
                       *(byte **)((int)pvStack_7c + 0x9e1));
    thunk_FUN_00505df0();
    break;
  case 0x5e:
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,(uint)*(ushort *)((int)pvStack_7c + 0xc34));
    FUN_00710a90(*(int *)((int)pvStack_7c + 0x194),0,0x91,0x73,0x26,0xf);
    FUN_007119c0(&DAT_0080f33a,-1,-1,4);
    if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                   *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
    }
    break;
  case 0x61:
    if (*(byte *)((int)pvStack_7c + 0xc2a) != bStack_43) {
      uVar4 = ((uint)*(byte *)((int)pvStack_7c + 0xc2a) * 0x21) / 100;
      uStack_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        uStack_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x5d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar3 = uStack_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x5d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)pvStack_7c + 0x9e1),0,0x15,0x22,0xc3,0xc,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28e0,(uint)*(byte *)((int)pvStack_7c + 0xc2a));
        FUN_007119c0(&DAT_0080f33a,-1,-1,5);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),0x15,0x68,'\x01',pbVar5);
        FUN_00710f00();
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    if (*(byte *)((int)pvStack_7c + 0xc29) != bStack_44) {
      uVar4 = (uint)*(byte *)((int)pvStack_7c + 0xc29);
      uStack_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        uStack_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar3 = uStack_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    break;
  case 0x62:
    if ((*(int *)((int)pvStack_7c + 0xc12) != iStack_5b) ||
       (*(int *)((int)pvStack_7c + 0xc16) != iStack_57)) {
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)pvStack_7c + 0x9f5),0,0x7f,0x20,0x24,0xb,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)((int)pvStack_7c + 0xc12));
        FUN_007119c0(&DAT_0080f33a,-1,-1,5);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),0x7f,0x66,'\x01',pbVar5);
        FUN_00710f00();
      }
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)pvStack_7c + 0x9f5),0,0xa5,9,0x24,0xb,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)((int)pvStack_7c + 0xc16));
        FUN_007119c0(&DAT_0080f33a,-1,-1,4);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),0xa5,0x4f,'\x01',pbVar5);
        FUN_00710f00();
      }
      uVar4 = *(uint *)((int)pvStack_7c + 0xc16);
      if (uVar4 < *(uint *)((int)pvStack_7c + 0xc12)) {
        uVar4 = 0x21;
      }
      else if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(uint *)((int)pvStack_7c + 0xc12) * 0x21) / uVar4;
      }
      uStack_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        uStack_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar3 = uStack_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    break;
  case 99:
    if (*(int *)((int)pvStack_7c + 0xc12) != iStack_5b) {
      thunk_FUN_0050a340();
      iVar3 = *(int *)((int)pvStack_7c + 0x302);
      if (iVar3 != 0) {
        puVar18 = auStack_e0;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        uStack_d0 = 5;
        FUN_006e6080(pvStack_7c,2,iVar3,auStack_e0);
      }
      break;
    }
    if (*(byte *)((int)pvStack_7c + 0xc24) != abStack_49[0]) {
      uVar4 = ((uint)*(byte *)((int)pvStack_7c + 0xc24) * 0x21) / 100;
      uStack_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        uStack_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar3 = uStack_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    if (((*(ushort *)((int)pvStack_7c + 0xc1c) == uStack_51) &&
        (*(ushort *)((int)pvStack_7c + 0xc20) == uStack_4d)) ||
       (pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)pvStack_7c + 0x9dd),0,100,0x13,0x18,0xc,0),
       pbVar5 == (byte *)0x0)) break;
    if (*(ushort *)((int)pvStack_7c + 0xc1c) != uStack_51) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)((int)pvStack_7c + 0xc1c));
      FUN_007119c0(&DAT_0080f33a,-1,-1,7);
      thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),100,0x59,'\x01',pbVar5);
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    if (*(ushort *)((int)pvStack_7c + 0xc20) != uStack_4d) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)((int)pvStack_7c + 0xc20));
      FUN_007119c0(&DAT_0080f33a,-1,-1,5);
      thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),0xaf,0x59,'\x01',pbVar5);
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    goto LAB_0050dfdc;
  case 100:
    if ((*(int *)((int)pvStack_7c + 0xc12) != iStack_5b) ||
       (*(int *)((int)pvStack_7c + 0xc16) != iStack_57)) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(int *)((int)pvStack_7c + 0xc12));
      FUN_00710a90(*(int *)((int)pvStack_7c + 0x194),0,0x66,0x65,0x24,0xb);
      FUN_007119c0(&DAT_0080f33a,-1,-1,7);
      if (*(uint *)((int)pvStack_7c + 0xc16) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(*(int *)((int)pvStack_7c + 0xc12) * 0x21) /
                *(uint *)((int)pvStack_7c + 0xc16);
      }
      uStack_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        uStack_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar3 = uStack_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    break;
  case 0x67:
  case 0x68:
    if (*(char *)((int)pvStack_7c + 0xc11) != cStack_5c) {
      uVar4 = 0;
      if (*(char *)((int)pvStack_7c + 0xc11) != '\0') {
        iVar3 = 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x52,'\x01',pbVar5);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 < *(byte *)((int)pvStack_7c + 0xc11));
      }
      if (uVar4 < 0x21) {
        iVar3 = uVar4 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x52,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    if (*(int *)((int)pvStack_7c + 0xc12) != iStack_5b) {
      uVar4 = 0;
      if (*(int *)((int)pvStack_7c + 0xc12) != 0) {
        iVar3 = 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x73,'\x01',pbVar5);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 < *(uint *)((int)pvStack_7c + 0xc12));
      }
      if (uVar4 < 0x21) {
        iVar3 = uVar4 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x73,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
    break;
  case 0x6d:
    uStack_8 = 0;
    uStack_c = 99;
    uStack_14 = 0x2c;
    piStack_1c = &iStack_5b;
    piStack_10 = (int *)((int)pvStack_7c + 0xc12);
    do {
      uVar6 = uStack_8;
      uVar4 = uStack_14;
      if (*piStack_1c != *piStack_10) {
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),uStack_14 - 2,0x55,'\x01',
                           *(byte **)((int)pvStack_7c + 0xa11));
        uVar8 = thunk_FUN_00526ba0(*piStack_10,*(char *)(uVar6 + 0xc1a + (int)pvStack_7c));
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2c2),uVar8);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),uVar4,0x57,'\x01',pbVar5);
        if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
        }
      }
      bVar2 = *(byte *)((int)pvStack_7c + uVar6 + 0xc24);
      if (abStack_49[uVar6] != bVar2) {
        uStack_18 = 0;
        uVar4 = bVar2 / 10;
        if (uVar4 != 0) {
          iVar3 = 0x7e;
          uStack_18 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),7);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),uStack_c,iVar3,'\x01',
                               pbVar5);
            iVar3 = iVar3 + -4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (uStack_18 < 10) {
          iVar3 = uStack_18 * -4 + 0x7e;
          iVar9 = 10 - uStack_18;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),8);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),uStack_c,iVar3,'\x01',
                               pbVar5);
            iVar3 = iVar3 + -4;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
        }
      }
      piStack_10 = piStack_10 + 1;
      piStack_1c = piStack_1c + 1;
      uStack_14 = uStack_14 + 0x65;
      uStack_8 = uStack_8 + 1;
      uStack_c = uStack_c + 0x1a;
    } while ((int)uStack_14 < 0xf6);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)*(byte *)((int)pvStack_7c + 0xc24),
              (uint)*(byte *)((int)pvStack_7c + 0xc25));
    pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)pvStack_7c + 0x9dd),0,0x5f,7,0x2f,0xb,0);
    if (pbVar5 == (byte *)0x0) break;
    FUN_007119c0(&DAT_0080f33a,-1,-1,5);
    thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),0x5f,0x4d,'\x01',pbVar5);
LAB_0050dfdc:
    FUN_00710f00();
    break;
  case 0x6e:
    if (*(int *)((int)pvStack_7c + 0xc12) == iStack_5b) {
      if (*(int *)((int)pvStack_7c + 0xc12) == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,(uint)*(ushort *)((int)pvStack_7c + 0xc2f));
        FUN_00710a90(*(int *)((int)pvStack_7c + 0x194),0,0x1c,0x58,0xb7,0xf);
        FUN_007119c0(&DAT_0080f33a,-1,-1,5);
      }
      else if (*(byte *)((int)pvStack_7c + 0xc24) != abStack_49[0]) {
        uVar4 = ((uint)*(byte *)((int)pvStack_7c + 0xc24) * 0x21) / 100;
        uStack_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          uStack_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (uStack_8 < 0x21) {
          iVar3 = uStack_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                       *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
        }
      }
    }
    else {
      thunk_FUN_0050a340();
      iVar3 = *(int *)((int)pvStack_7c + 0x302);
      if (iVar3 != 0) {
        puVar18 = auStack_100;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        uStack_f0 = 5;
        FUN_006e6080(pvStack_7c,2,iVar3,auStack_100);
      }
    }
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    if (*(byte *)((int)pvStack_7c + 0xc29) != bStack_44) {
      uVar4 = (uint)*(byte *)((int)pvStack_7c + 0xc29);
      uStack_8 = 0;
      uStack_14 = uVar4;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        uStack_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uStack_8 < 0x21) {
        iVar3 = uStack_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)pvStack_7c + 0x9e1),0,0x24,6,0xa4,0x2b,0);
      if (pbVar5 != (byte *)0x0) {
        iVar22 = -1;
        iVar21 = -1;
        uVar20 = 5;
        iVar9 = -1;
        iVar3 = -1;
        puVar7 = (uint *)FUN_006b0140(0x36c4 - (uStack_14 < 0x21),DAT_00807618);
        FUN_00711b70(puVar7,iVar3,iVar9,uVar20,iVar21,iVar22);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_7c + 0x194),0x24,0x4c,'\x01',pbVar5);
        FUN_00710f00();
      }
      if (-1 < (int)*(uint *)((int)pvStack_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_7c + 0x15c),0xffffffff,
                     *(uint *)((int)pvStack_7c + 0x50),*(uint *)((int)pvStack_7c + 0xa8));
      }
    }
  }
  if (*(int *)((int)pvStack_7c + 0xc4d) == iStack_20) {
    DAT_00858df8 = puStack_c0;
    return;
  }
  thunk_FUN_00504e60();
  DAT_00858df8 = puStack_c0;
  return;
switchD_0050c9ae_caseD_dd:
  thunk_FUN_0050a340();
  iVar3 = *(int *)((int)pvStack_7c + 0x302);
  if (iVar3 == 0) {
    DAT_00858df8 = puStack_c0;
    return;
  }
  puVar18 = auStack_140;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  uStack_130 = 5;
  FUN_006e6080(pvStack_7c,2,iVar3,auStack_140);
  DAT_00858df8 = puStack_c0;
  return;
}

