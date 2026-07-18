
void FUN_0050c620(void)

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
  undefined4 local_140 [4];
  undefined4 local_130;
  undefined4 local_120 [4];
  undefined4 local_110;
  undefined4 local_100 [4];
  undefined4 local_f0;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined4 *local_c0;
  undefined4 local_bc [16];
  void *local_7c;
  int local_78;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  char local_70;
  short local_6f [6];
  char local_63;
  short local_62 [3];
  char local_5c;
  int local_5b;
  int local_57;
  ushort local_51;
  ushort local_4d;
  byte local_49 [5];
  byte local_44;
  byte local_43;
  short local_3e;
  char local_3c;
  char local_3a;
  char local_31;
  int local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_c0 = DAT_00858df8;
  DAT_00858df8 = &local_c0;
  iVar3 = __setjmp3(local_bc,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = local_c0;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x8ae,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7c2700,0x8ae);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar15 = (int *)((int)local_7c + 0xbf5);
  piVar12 = piVar15;
  piVar16 = &local_78;
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
  cVar10 = *(char *)((int)local_7c + 0xbfa);
  if ((local_73 != cVar10) || (local_72 != *(char *)((int)local_7c + 0xbfb))) {
LAB_0050e007:
    thunk_FUN_0050a340();
    thunk_FUN_0050e7d0('\x01');
    thunk_FUN_00506040((int)local_7c);
    DAT_00858df8 = local_c0;
    return;
  }
  if ((*(char *)((int)local_7c + 0xbfb) == '\x02') && (cVar10 == '\x01')) {
    cVar10 = '\0';
    cVar11 = '\0';
    uVar4 = 0;
    do {
      if (*(char *)((int)local_7c + uVar4 + 0xbfe) != '\0') {
        cVar11 = cVar11 + '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    uVar4 = 0;
    do {
      if (*(char *)((int)local_6f + uVar4) != '\0') {
        cVar10 = cVar10 + '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
    if (cVar11 == cVar10) {
      iVar3 = 3;
      bVar19 = true;
      psVar14 = (short *)((int)local_7c + 0xbfe);
      psVar17 = local_6f;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar19 = *psVar14 == *psVar17;
        psVar14 = psVar14 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar19);
      if (bVar19) {
        if (*(char *)((int)local_7c + 0xbfd) != local_70) {
          thunk_FUN_004f1610(local_7c,'\0');
        }
      }
      else {
        *(undefined4 *)((int)local_7c + 0x28) = 5;
        FUN_006e6080(local_7c,2,*(undefined4 *)((int)local_7c + 0x302),
                     (undefined4 *)((int)local_7c + 0x18));
        local_c = local_c & 0xffffff00;
        pcVar13 = (char *)((int)local_7c + 0xbfe);
        do {
          if (*pcVar13 != '\0') {
            thunk_FUN_004f17d0(local_7c,0,(byte)local_c);
          }
          bVar2 = (char)local_c + 1;
          pcVar13 = pcVar13 + 1;
          local_c = CONCAT31(local_c._1_3_,bVar2);
        } while (bVar2 < 6);
        thunk_FUN_004f1610(local_7c,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar3 = 3;
      bVar19 = true;
      psVar14 = (short *)((int)local_7c + 0xc04);
      psVar17 = local_6f + 3;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar19 = *psVar14 == *psVar17;
        psVar14 = psVar14 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar19);
      if ((!bVar19) || (*(char *)((int)local_7c + 0xbfc) != local_71)) {
        thunk_FUN_004f4570(local_7c,'\0',(int)local_7c + 0xbf5,(int)&local_78);
      }
    }
    else {
      thunk_FUN_0050e7d0('\x01');
    }
    if (((*(char *)((int)local_7c + 0xc0a) != local_63) ||
        (*(char *)((int)local_7c + 0xbfc) != local_71)) && (*(int *)((int)local_7c + 0x9c4) != 0)) {
      *(undefined4 *)((int)local_7c + 0x28) = 0x20;
      if (*(char *)((int)local_7c + 0xbfc) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(byte *)((int)local_7c + 0xc0a);
      }
      *(uint *)((int)local_7c + 0x2c) = uVar4;
      FUN_006e6080(local_7c,2,*(undefined4 *)((int)local_7c + 0x9c4),
                   (undefined4 *)((int)local_7c + 0x18));
    }
    if (*(int *)((int)local_7c + 0xc12) == local_5b) {
      if (*(byte *)((int)local_7c + 0xc24) != local_49[0]) {
        uVar4 = ((uint)*(byte *)((int)local_7c + 0xc24) * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        FUN_006b55f0(*(undefined4 **)((int)local_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)local_7c + 0x9e1),0,0x5c,10,0x3c,0x1e);
        thunk_FUN_004f2350(*(int *)((int)local_7c + 0x194),*(ushort *)((int)local_7c + 0xc1c),
                           *(ushort *)((int)local_7c + 0xc20),7,4);
        if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                       *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
        }
      }
    }
    else {
      thunk_FUN_0050a340();
      thunk_FUN_0050e7d0('\0');
      thunk_FUN_00506040((int)local_7c);
    }
    if (*(int *)((int)local_7c + 0xc4d) == local_20) {
      DAT_00858df8 = local_c0;
      return;
    }
    thunk_FUN_00504e60();
    DAT_00858df8 = local_c0;
    return;
  }
  if (cVar10 != '\x01') {
    if (cVar10 != '\x04') {
      DAT_00858df8 = local_c0;
      return;
    }
    if (local_78 == *(int *)((int)local_7c + 0xbf5)) {
      switch(*(int *)((int)local_7c + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfd:
      case 0xfe:
        goto switchD_0050c9ae_caseD_dd;
      default:
        DAT_00858df8 = local_c0;
        return;
      }
    }
    goto LAB_0050e007;
  }
  if ((local_78 != *(int *)((int)local_7c + 0xbf5)) ||
     (local_74 != *(char *)((int)local_7c + 0xbf9))) goto LAB_0050e007;
  cVar10 = '\0';
  cVar11 = '\0';
  uVar4 = 0;
  do {
    if (*(char *)((int)local_7c + uVar4 + 0xbfe) != '\0') {
      cVar11 = cVar11 + '\x01';
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  uVar4 = 0;
  do {
    if (*(char *)((int)local_6f + uVar4) != '\0') {
      cVar10 = cVar10 + '\x01';
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  if (cVar11 == cVar10) {
    iVar3 = 3;
    bVar19 = true;
    psVar14 = (short *)((int)local_7c + 0xbfe);
    psVar17 = local_6f;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar19 = *psVar14 == *psVar17;
      psVar14 = psVar14 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar19);
    if (bVar19) {
      if (*(char *)((int)local_7c + 0xbfd) != local_70) {
        thunk_FUN_004f1610(local_7c,'\0');
      }
    }
    else {
      *(undefined4 *)((int)local_7c + 0x28) = 5;
      FUN_006e6080(local_7c,2,*(undefined4 *)((int)local_7c + 0x302),
                   (undefined4 *)((int)local_7c + 0x18));
      local_c = local_c & 0xffffff00;
      pcVar13 = (char *)((int)local_7c + 0xbfe);
      do {
        if (*pcVar13 != '\0') {
          thunk_FUN_004f17d0(local_7c,0,(byte)local_c);
        }
        bVar2 = (char)local_c + 1;
        pcVar13 = pcVar13 + 1;
        local_c = CONCAT31(local_c._1_3_,bVar2);
      } while (bVar2 < 6);
      thunk_FUN_004f1610(local_7c,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar3 = 3;
    bVar19 = true;
    psVar14 = (short *)((int)local_7c + 0xc04);
    psVar17 = local_6f + 3;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar19 = *psVar14 == *psVar17;
      psVar14 = psVar14 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar19);
    if ((!bVar19) || (*(char *)((int)local_7c + 0xbfc) != local_71)) {
      thunk_FUN_004f4570(local_7c,'\0',(int)local_7c + 0xbf5,(int)&local_78);
    }
  }
  else {
    thunk_FUN_0050e7d0('\x01');
  }
  if (((*(char *)((int)local_7c + 0xc0a) != local_63) ||
      (*(char *)((int)local_7c + 0xbfc) != local_71)) && (*(int *)((int)local_7c + 0x9c4) != 0)) {
    *(undefined4 *)((int)local_7c + 0x28) = 0x20;
    if (*(char *)((int)local_7c + 0xbfc) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)((int)local_7c + 0xc0a);
    }
    *(uint *)((int)local_7c + 0x2c) = uVar4;
    FUN_006e6080(local_7c,2,*(undefined4 *)((int)local_7c + 0x9c4),
                 (undefined4 *)((int)local_7c + 0x18));
  }
  iVar3 = 3;
  bVar19 = true;
  psVar14 = (short *)((int)local_7c + 0xc0b);
  psVar17 = local_62;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar19 = *psVar14 == *psVar17;
    psVar14 = psVar14 + 1;
    psVar17 = psVar17 + 1;
  } while (bVar19);
  if ((!bVar19) || (*(char *)((int)local_7c + 0xbfc) != local_71)) {
    uVar4 = 0;
    piVar15 = (int *)((int)local_7c + 0xb1f);
    do {
      if (*piVar15 != 0) {
        *(undefined4 *)((int)local_7c + 0x28) = 0x20;
        if (*(char *)((int)local_7c + 0xbfc) == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = (uint)*(byte *)((int)local_7c + uVar4 + 0xc0b);
        }
        *(uint *)((int)local_7c + 0x2c) = uVar6;
        FUN_006e6080(local_7c,2,*piVar15,(undefined4 *)((int)local_7c + 0x18));
      }
      uVar4 = uVar4 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar4 < 6);
  }
  switch(*(undefined4 *)((int)local_7c + 0xbf5)) {
  case 0x53:
    cVar10 = *(char *)((int)local_7c + 0xc3c);
    if (local_31 == cVar10) {
      if (cVar10 == '\x01') {
        FUN_006b55f0(*(undefined4 **)((int)local_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)local_7c + 0x9e1),0,0x5c,10,0x32,0x19);
        thunk_FUN_004f1f60(*(int *)((int)local_7c + 0x194),0x5c,0x50,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(undefined1 *)((int)local_7c + 0xc3d)),0x2714);
        uVar4 = (uint)(*(int *)((int)local_7c + 0xc3d) * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
      }
      else if (cVar10 == '\x02') {
        FUN_006b55f0(*(undefined4 **)((int)local_7c + 0x194),0,0x28,0x79,
                     *(int *)((int)local_7c + 0x9e1),0,0x28,0x33,0x9b,0xf);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)((int)local_7c + 0xc3d));
        FUN_00710a90(*(int *)((int)local_7c + 0x194),0,0x28,0x79,0x9b,0xf);
        FUN_007119c0(&DAT_0080f33a,-1,-1,1);
      }
      else if (cVar10 == '\x04') {
        if (*(char *)((int)local_7c + 0xc31) == local_3c) {
          if (*(char *)((int)local_7c + 0xc33) != local_3a) {
            FUN_006b55f0(*(undefined4 **)((int)local_7c + 0x194),0,0x5c,0x50,
                         *(int *)((int)local_7c + 0x9e1),0,0x5c,10,0x32,0x19);
            thunk_FUN_005049a0();
          }
        }
        else {
          thunk_FUN_0050a340();
          thunk_FUN_0050e7d0('\x01');
          thunk_FUN_00506040((int)local_7c);
        }
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
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
    if (*(char *)((int)local_7c + 0xc31) == local_3c) {
      if (*(char *)((int)local_7c + 0xc31) == '\0') {
        if (*(short *)((int)local_7c + 0xc2f) != local_3e) {
          thunk_FUN_005061c0(1);
          iVar3 = *(int *)((int)local_7c + 0x302);
          if (iVar3 != 0) {
            puVar18 = local_120;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            local_110 = 5;
            FUN_006e6080(local_7c,2,iVar3,local_120);
          }
        }
      }
      else if (*(char *)((int)local_7c + 0xc33) != local_3a) {
        FUN_006b55f0(*(undefined4 **)((int)local_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)local_7c + 0x9e1),0,0x5c,10,0x32,0x19);
        thunk_FUN_005049a0();
        if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                       *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
        }
      }
      break;
    }
LAB_0050ce3f:
    thunk_FUN_0050a340();
    thunk_FUN_0050e7d0('\x01');
    thunk_FUN_00506040((int)local_7c);
    break;
  case 0x5b:
    thunk_FUN_00505960();
    uVar4 = 0;
    do {
      if (*(int *)((int)local_7c + uVar4 * 4 + 0xa15) != 0) {
        if (uVar4 == 3) {
          if (*(char *)((int)local_7c + 0x9d4) == '\x01') {
            *(undefined1 *)((int)local_7c + 0xaa2) = 0;
            *(undefined4 *)((int)local_7c + 0x28) = 0x20;
            *(undefined4 *)((int)local_7c + 0x2c) = 0;
            uVar20 = *(undefined4 *)((int)local_7c + 0xa21);
          }
          else {
            *(undefined1 *)((int)local_7c + 0xaa2) = 2;
            uVar20 = thunk_FUN_00525ef0(*(char *)((int)local_7c + 0x9d4) + '\x02',3);
            *(undefined4 *)((int)local_7c + 0xaa3) = uVar20;
            if (*(char *)((int)local_7c + 0xbfc) == local_71) {
              *(undefined4 *)((int)local_7c + 0x28) = 5;
              uVar20 = *(undefined4 *)((int)local_7c + 0xa21);
            }
            else {
              *(undefined4 *)((int)local_7c + 0x28) = 0x20;
              *(uint *)((int)local_7c + 0x2c) = (uint)(*(char *)((int)local_7c + 0xbfc) != '\0');
              uVar20 = *(undefined4 *)((int)local_7c + 0xa21);
            }
          }
        }
        else {
          uVar20 = thunk_FUN_00525ef0(*(char *)((int)local_7c + 0x9d4) + '\x02',(char)uVar4);
          *(undefined4 *)(uVar4 * 0x27 + 0xa2e + (int)local_7c) = uVar20;
          if (*(char *)((int)local_7c + 0xbfc) == local_71) {
            *(undefined4 *)((int)local_7c + 0x28) = 5;
            uVar20 = *(undefined4 *)((int)local_7c + uVar4 * 4 + 0xa15);
          }
          else {
            *(undefined4 *)((int)local_7c + 0x28) = 0x20;
            *(uint *)((int)local_7c + 0x2c) = (uint)(*(char *)((int)local_7c + 0xbfc) != '\0');
            uVar20 = *(undefined4 *)((int)local_7c + uVar4 * 4 + 0xa15);
          }
        }
        FUN_006e6080(local_7c,2,uVar20,(undefined4 *)((int)local_7c + 0x18));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                   *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
    }
    break;
  case 0x5c:
    if (*(int *)((int)local_7c + 0xc12) == local_5b) {
      if (*(byte *)((int)local_7c + 0xc24) != local_49[0]) {
        uVar4 = ((uint)*(byte *)((int)local_7c + 0xc24) * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        FUN_006b55f0(*(undefined4 **)((int)local_7c + 0x194),0,0x5c,0x50,
                     *(int *)((int)local_7c + 0x9e1),0,0x5c,10,0x3c,0x1e);
        thunk_FUN_004f2350(*(int *)((int)local_7c + 0x194),*(ushort *)((int)local_7c + 0xc1c),
                           *(ushort *)((int)local_7c + 0xc20),7,4);
        if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                       *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
        }
      }
    }
    else {
      thunk_FUN_0050a340();
      thunk_FUN_0050e7d0('\0');
      thunk_FUN_00506040((int)local_7c);
    }
    break;
  case 0x5d:
    thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),0,0x46,'\x01',
                       *(byte **)((int)local_7c + 0x9e1));
    thunk_FUN_00505df0();
    break;
  case 0x5e:
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,(uint)*(ushort *)((int)local_7c + 0xc34));
    FUN_00710a90(*(int *)((int)local_7c + 0x194),0,0x91,0x73,0x26,0xf);
    FUN_007119c0(&DAT_0080f33a,-1,-1,4);
    if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                   *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
    }
    break;
  case 0x61:
    if (*(byte *)((int)local_7c + 0xc2a) != local_43) {
      uVar4 = ((uint)*(byte *)((int)local_7c + 0xc2a) * 0x21) / 100;
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x5d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x5d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_7c + 0x9e1),0,0x15,0x22,0xc3,0xc,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28e0,(uint)*(byte *)((int)local_7c + 0xc2a));
        FUN_007119c0(&DAT_0080f33a,-1,-1,5);
        thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),0x15,0x68,'\x01',pbVar5);
        FUN_00710f00();
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    if (*(byte *)((int)local_7c + 0xc29) != local_44) {
      uVar4 = (uint)*(byte *)((int)local_7c + 0xc29);
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    break;
  case 0x62:
    if ((*(int *)((int)local_7c + 0xc12) != local_5b) ||
       (*(int *)((int)local_7c + 0xc16) != local_57)) {
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_7c + 0x9f5),0,0x7f,0x20,0x24,0xb,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)((int)local_7c + 0xc12));
        FUN_007119c0(&DAT_0080f33a,-1,-1,5);
        thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),0x7f,0x66,'\x01',pbVar5);
        FUN_00710f00();
      }
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_7c + 0x9f5),0,0xa5,9,0x24,0xb,0);
      if (pbVar5 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)((int)local_7c + 0xc16));
        FUN_007119c0(&DAT_0080f33a,-1,-1,4);
        thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),0xa5,0x4f,'\x01',pbVar5);
        FUN_00710f00();
      }
      uVar4 = *(uint *)((int)local_7c + 0xc16);
      if (uVar4 < *(uint *)((int)local_7c + 0xc12)) {
        uVar4 = 0x21;
      }
      else if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(uint *)((int)local_7c + 0xc12) * 0x21) / uVar4;
      }
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    break;
  case 99:
    if (*(int *)((int)local_7c + 0xc12) != local_5b) {
      thunk_FUN_0050a340();
      iVar3 = *(int *)((int)local_7c + 0x302);
      if (iVar3 != 0) {
        puVar18 = local_e0;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        local_d0 = 5;
        FUN_006e6080(local_7c,2,iVar3,local_e0);
      }
      break;
    }
    if (*(byte *)((int)local_7c + 0xc24) != local_49[0]) {
      uVar4 = ((uint)*(byte *)((int)local_7c + 0xc24) * 0x21) / 100;
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    if (((*(ushort *)((int)local_7c + 0xc1c) == local_51) &&
        (*(ushort *)((int)local_7c + 0xc20) == local_4d)) ||
       (pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_7c + 0x9dd),0,100,0x13,0x18,0xc,0),
       pbVar5 == (byte *)0x0)) break;
    if (*(ushort *)((int)local_7c + 0xc1c) != local_51) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)((int)local_7c + 0xc1c));
      FUN_007119c0(&DAT_0080f33a,-1,-1,7);
      thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),100,0x59,'\x01',pbVar5);
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    if (*(ushort *)((int)local_7c + 0xc20) != local_4d) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)((int)local_7c + 0xc20));
      FUN_007119c0(&DAT_0080f33a,-1,-1,5);
      thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),0xaf,0x59,'\x01',pbVar5);
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    goto LAB_0050dfdc;
  case 100:
    if ((*(int *)((int)local_7c + 0xc12) != local_5b) ||
       (*(int *)((int)local_7c + 0xc16) != local_57)) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(int *)((int)local_7c + 0xc12));
      FUN_00710a90(*(int *)((int)local_7c + 0x194),0,0x66,0x65,0x24,0xb);
      FUN_007119c0(&DAT_0080f33a,-1,-1,7);
      if (*(uint *)((int)local_7c + 0xc16) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(*(int *)((int)local_7c + 0xc12) * 0x21) / *(uint *)((int)local_7c + 0xc16);
      }
      local_8 = 0;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    break;
  case 0x67:
  case 0x68:
    if (*(char *)((int)local_7c + 0xc11) != local_5c) {
      uVar4 = 0;
      if (*(char *)((int)local_7c + 0xc11) != '\0') {
        iVar3 = 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x52,'\x01',pbVar5);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 < *(byte *)((int)local_7c + 0xc11));
      }
      if (uVar4 < 0x21) {
        iVar3 = uVar4 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x52,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    if (*(int *)((int)local_7c + 0xc12) != local_5b) {
      uVar4 = 0;
      if (*(int *)((int)local_7c + 0xc12) != 0) {
        iVar3 = 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x73,'\x01',pbVar5);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 < *(uint *)((int)local_7c + 0xc12));
      }
      if (uVar4 < 0x21) {
        iVar3 = uVar4 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x73,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
    break;
  case 0x6d:
    local_8 = 0;
    local_c = 99;
    local_14 = 0x2c;
    local_1c = &local_5b;
    local_10 = (int *)((int)local_7c + 0xc12);
    do {
      uVar6 = local_8;
      uVar4 = local_14;
      if (*local_1c != *local_10) {
        thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),local_14 - 2,0x55,'\x01',
                           *(byte **)((int)local_7c + 0xa11));
        uVar8 = thunk_FUN_00526ba0(*local_10,*(char *)(uVar6 + 0xc1a + (int)local_7c));
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2c2),uVar8);
        thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),uVar4,0x57,'\x01',pbVar5);
        if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                       *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
        }
      }
      bVar2 = *(byte *)((int)local_7c + uVar6 + 0xc24);
      if (local_49[uVar6] != bVar2) {
        local_18 = 0;
        uVar4 = bVar2 / 10;
        if (uVar4 != 0) {
          iVar3 = 0x7e;
          local_18 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),7);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),local_c,iVar3,'\x01',pbVar5);
            iVar3 = iVar3 + -4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_18 < 10) {
          iVar3 = local_18 * -4 + 0x7e;
          iVar9 = 10 - local_18;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),8);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),local_c,iVar3,'\x01',pbVar5);
            iVar3 = iVar3 + -4;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                       *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
        }
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      local_c = local_c + 0x1a;
    } while ((int)local_14 < 0xf6);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)*(byte *)((int)local_7c + 0xc24),
              (uint)*(byte *)((int)local_7c + 0xc25));
    pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_7c + 0x9dd),0,0x5f,7,0x2f,0xb,0);
    if (pbVar5 == (byte *)0x0) break;
    FUN_007119c0(&DAT_0080f33a,-1,-1,5);
    thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),0x5f,0x4d,'\x01',pbVar5);
LAB_0050dfdc:
    FUN_00710f00();
    break;
  case 0x6e:
    if (*(int *)((int)local_7c + 0xc12) == local_5b) {
      if (*(int *)((int)local_7c + 0xc12) == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,(uint)*(ushort *)((int)local_7c + 0xc2f));
        FUN_00710a90(*(int *)((int)local_7c + 0x194),0,0x1c,0x58,0xb7,0xf);
        FUN_007119c0(&DAT_0080f33a,-1,-1,5);
      }
      else if (*(byte *)((int)local_7c + 0xc24) != local_49[0]) {
        uVar4 = ((uint)*(byte *)((int)local_7c + 0xc24) * 0x21) / 100;
        local_8 = 0;
        if (uVar4 != 0) {
          iVar3 = 0x35;
          local_8 = uVar4;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_8 < 0x21) {
          iVar3 = local_8 * 4 + 0x35;
          do {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0xb9);
        }
        if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                       *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
        }
      }
    }
    else {
      thunk_FUN_0050a340();
      iVar3 = *(int *)((int)local_7c + 0x302);
      if (iVar3 != 0) {
        puVar18 = local_100;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        local_f0 = 5;
        FUN_006e6080(local_7c,2,iVar3,local_100);
      }
    }
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    if (*(byte *)((int)local_7c + 0xc29) != local_44) {
      uVar4 = (uint)*(byte *)((int)local_7c + 0xc29);
      local_8 = 0;
      local_14 = uVar4;
      if (uVar4 != 0) {
        iVar3 = 0x35;
        local_8 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (local_8 < 0x21) {
        iVar3 = local_8 * 4 + 0x35;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_7c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),iVar3,0x7d,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xb9);
      }
      pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_7c + 0x9e1),0,0x24,6,0xa4,0x2b,0);
      if (pbVar5 != (byte *)0x0) {
        iVar22 = -1;
        iVar21 = -1;
        uVar20 = 5;
        iVar9 = -1;
        iVar3 = -1;
        puVar7 = (uint *)FUN_006b0140(0x36c4 - (local_14 < 0x21),DAT_00807618);
        FUN_00711b70(puVar7,iVar3,iVar9,uVar20,iVar21,iVar22);
        thunk_FUN_00540760(*(undefined4 **)((int)local_7c + 0x194),0x24,0x4c,'\x01',pbVar5);
        FUN_00710f00();
      }
      if (-1 < (int)*(uint *)((int)local_7c + 0x15c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_7c + 0x15c),0xffffffff,
                     *(uint *)((int)local_7c + 0x50),*(uint *)((int)local_7c + 0xa8));
      }
    }
  }
  if (*(int *)((int)local_7c + 0xc4d) == local_20) {
    DAT_00858df8 = local_c0;
    return;
  }
  thunk_FUN_00504e60();
  DAT_00858df8 = local_c0;
  return;
switchD_0050c9ae_caseD_dd:
  thunk_FUN_0050a340();
  iVar3 = *(int *)((int)local_7c + 0x302);
  if (iVar3 == 0) {
    DAT_00858df8 = local_c0;
    return;
  }
  puVar18 = local_140;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  local_130 = 5;
  FUN_006e6080(local_7c,2,iVar3,local_140);
  DAT_00858df8 = local_c0;
  return;
}

