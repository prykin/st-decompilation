
void thunk_FUN_0050a340(void)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  UINT UVar8;
  char *pcVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  undefined4 uVar15;
  void *unaff_EDI;
  char *pcVar16;
  HINSTANCE pHVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  undefined4 *puStack_64;
  undefined4 auStack_60 [16];
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  byte *pbStack_14;
  undefined4 *puStack_10;
  uint uStack_c;
  byte *pbStack_8;
  
  puStack_64 = DAT_00858df8;
  DAT_00858df8 = &puStack_64;
  iVar4 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = puStack_64;
    iVar13 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x6f0,0,iVar4,&DAT_007a4ccc);
    if (iVar13 == 0) {
      FUN_006a5e40(iVar4,0,0x7c2700,0x6f0);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  switch(*(undefined1 *)(iStack_1c + 0xbfa)) {
  case 0:
  case 3:
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0,0x46,'\x01',
                       *(byte **)(iStack_1c + 0x9d9));
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0,0,'\x06',*(byte **)(iStack_1c + 0x9fd))
    ;
    break;
  case 1:
    if (*(char *)(iStack_1c + 0xbfb) == '\x02') {
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0,0,'\x06',
                         *(byte **)(iStack_1c + 0xa05));
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0,0x46,'\x01',
                         *(byte **)(iStack_1c + 0x9e1));
      break;
    }
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0,0,'\x06',*(byte **)(iStack_1c + 0xa05))
    ;
    switch(*(undefined4 *)(iStack_1c + 0xbf5)) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5c:
    case 0x5d:
    case 0x61:
    case 99:
    case 100:
    case 0x6e:
    case 0x70:
    case 0x72:
    case 0x73:
      pbVar6 = *(byte **)(iStack_1c + 0x9e1);
      puVar18 = *(undefined4 **)(iStack_1c + 0x194);
      break;
    case 0x5b:
      pbVar6 = *(byte **)(iStack_1c + 0x9e5);
      puVar18 = *(undefined4 **)(iStack_1c + 0x194);
      break;
    case 0x5e:
    case 0x6d:
      pbVar6 = *(byte **)(iStack_1c + 0x9dd);
      puVar18 = *(undefined4 **)(iStack_1c + 0x194);
      break;
    default:
      pbVar6 = *(byte **)(iStack_1c + 0x9d9);
      goto LAB_0050a4e4;
    case 0x62:
      pbVar6 = *(byte **)(iStack_1c + 0x9f5);
LAB_0050a4e4:
      puVar18 = *(undefined4 **)(iStack_1c + 0x194);
      break;
    case 0x67:
    case 0x68:
      pbVar6 = *(byte **)(iStack_1c + 0x9ed);
      puVar18 = *(undefined4 **)(iStack_1c + 0x194);
    }
    thunk_FUN_00540760(puVar18,0,0x46,'\x01',pbVar6);
    break;
  case 4:
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0,0,'\x06',*(byte **)(iStack_1c + 0x9fd))
    ;
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0,0x46,'\x01',
                       *(byte **)(iStack_1c + 0x9dd));
  }
  if (*(char *)(iStack_1c + 0xbfa) != '\x01') {
    if (*(char *)(iStack_1c + 0xbfa) == '\x04') {
      switch(*(undefined4 *)(iStack_1c + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfe:
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x2c,0x52,'\x01',
                           *(byte **)(iStack_1c + 0xa09));
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2d2),(uint)*(byte *)(iStack_1c + 0xc11)
                                     );
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x2e,0x54,'\x01',pbVar6);
        pbVar6 = (byte *)FUN_00710ba0(*(int *)(iStack_1c + 0x9dd),0,0x70,0x12,0x62,0xd,0);
        if (pbVar6 != (byte *)0x0) {
          if (*(int *)(iStack_1c + 0xbf5) == 0xfe) {
            UVar8 = thunk_FUN_00529480(*(undefined1 *)(iStack_1c + 0xc11));
          }
          else {
            UVar8 = thunk_FUN_005293f0(*(int *)(iStack_1c + 0xbf5));
          }
          bVar3 = thunk_FUN_00529500(UVar8);
          uVar15 = CONCAT31(extraout_var,bVar3);
          iVar13 = -1;
          iVar4 = -1;
          puVar10 = (uint *)FUN_006b0140(UVar8,DAT_00807618);
          FUN_007119c0(puVar10,iVar4,iVar13,uVar15);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x70,0x58,'\x01',pbVar6);
          FUN_00710f00();
        }
        pbVar6 = (byte *)FUN_00710ba0(*(int *)(iStack_1c + 0x9dd),0,0x78,0x23,0x5a,0x14,0);
        if (pbVar6 != (byte *)0x0) {
          uVar15 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,*(undefined4 *)(iStack_1c + 0xc12));
          switch(*(undefined1 *)(iStack_1c + 0xc11)) {
          case 0:
            uVar15 = 4;
            break;
          case 1:
          case 3:
            uVar15 = 7;
            break;
          case 2:
            uVar15 = 6;
            break;
          case 4:
            uVar15 = 5;
          }
          FUN_007119c0(&DAT_0080f33a,-1,-1,uVar15);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x78,0x69,'\x01',pbVar6);
          FUN_00710f00();
        }
        break;
      case 0xfd:
        bVar3 = *(byte *)(iStack_1c + 0xc11);
        if ((bVar3 != 0) && (bVar3 < 0x16)) {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2ce),bVar3 - 1);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x29,0x51,'\x01',pbVar6);
        }
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2ca),10);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x27,0x4f,'\x06',pbVar6);
        pbVar6 = (byte *)FUN_00710ba0(*(int *)(iStack_1c + 0x9dd),0,0x5d,0xb,0x73,0x19,0);
        if (pbVar6 != (byte *)0x0) {
          iVar20 = -1;
          iVar19 = -1;
          uVar15 = 5;
          iVar13 = -1;
          iVar4 = -2;
          pHVar17 = DAT_00807618;
          UVar8 = thunk_FUN_00525290(CONCAT31((int3)((uint)pbVar6 >> 8),
                                              *(undefined1 *)(iStack_1c + 0xc11)));
          puVar10 = (uint *)FUN_006b0140(UVar8,pHVar17);
          FUN_00711b70(puVar10,iVar4,iVar13,uVar15,iVar19,iVar20);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x5d,0x51,'\x01',pbVar6);
          FUN_00710f00();
        }
        pbVar6 = (byte *)FUN_00710ba0(*(int *)(iStack_1c + 0x9dd),0,0x27,0x26,0x9f,0x1c,0);
        if (pbVar6 != (byte *)0x0) {
          FUN_00711b70(*(uint **)(iStack_1c + 0xc16),-2,-1,3,-1,-1);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x27,0x6c,'\x01',pbVar6);
          FUN_00710f00();
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (*(char *)(iStack_1c + 0xbfb) == '\x02') {
    if (*(int *)(iStack_1c + 0xc12) != 0) {
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x28,0x50,'\x01',
                         *(byte **)(iStack_1c + 0xa11));
      uVar5 = thunk_FUN_00526ba0(*(undefined4 *)(iStack_1c + 0xc12),*(char *)(iStack_1c + 0xc1a));
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2c2),uVar5);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x2a,0x52,'\x01',pbVar6);
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
      pbVar6 = (byte *)(((uint)*(byte *)(iStack_1c + 0xc24) * 0x21) / 100);
      pbStack_14 = (byte *)0x0;
      if (pbVar6 != (byte *)0x0) {
        iVar4 = 0x35;
        pbStack_14 = pbVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
          iVar4 = iVar4 + 4;
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != (byte *)0x0);
      }
      if (pbStack_14 < (byte *)0x21) {
        iVar4 = (int)pbStack_14 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x5c,0x6c,0x7a,0xb);
      pHVar17 = DAT_00807618;
      UVar8 = thunk_FUN_00523410(*(undefined4 *)(iStack_1c + 0xc12),*(char *)(iStack_1c + 0xc1a),0);
      pcVar9 = (char *)FUN_006b0140(UVar8,pHVar17);
      uVar5 = 0xffffffff;
      do {
        pcVar16 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar16 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar16;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      puVar10 = (uint *)(pcVar16 + -uVar5);
      puVar12 = (uint *)(iStack_1c + 0x1e1);
      for (uVar14 = uVar5 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar12 = (char)*puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
        puVar12 = (uint *)((int)puVar12 + 1);
      }
      for (puVar10 = FUN_0072e560((uint *)(iStack_1c + 0x1e1),'\n'); puVar10 != (uint *)0x0;
          puVar10 = FUN_0072e560(puVar10,'\n')) {
        *(undefined1 *)puVar10 = 0x20;
      }
LAB_0050af64:
      FUN_00711b70((uint *)(iStack_1c + 0x1e1),-2,-1,5,-1,-1);
      thunk_FUN_004f2350(*(int *)(iStack_1c + 0x194),*(ushort *)(iStack_1c + 0xc1c),
                         *(ushort *)(iStack_1c + 0xc20),7,4);
    }
    goto switchD_0050a9c9_caseD_5f;
  }
  iVar4 = *(int *)(iStack_1c + 0xbf5);
  switch(iVar4) {
  case 0x53:
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x24,0x4c,0xa4,0x2b);
    switch(*(undefined1 *)(iStack_1c + 0xc3c)) {
    case 0:
      UVar8 = 0x36bb;
      goto LAB_0050b38b;
    case 1:
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x27,0x51,'\x01',
                         *(byte **)(iStack_1c + 0xa0d));
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x15,0x6c,0xc3,0xb);
      iVar20 = -1;
      iVar19 = -1;
      uVar15 = 5;
      iVar13 = -1;
      iVar4 = -2;
      puVar10 = (uint *)FUN_006b0140(0x36bd,DAT_00807618);
      FUN_00711b70(puVar10,iVar4,iVar13,uVar15,iVar19,iVar20);
      thunk_FUN_004f1f60(*(int *)(iStack_1c + 0x194),0x5c,0x50,
                         CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(iStack_1c + 0xc3d)
                                 ),0x2714);
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
      pbVar6 = (byte *)((uint)(*(int *)(iStack_1c + 0xc3d) * 0x21) / 100);
      pbStack_8 = (byte *)0x0;
      if (pbVar6 != (byte *)0x0) {
        iVar4 = 0x35;
        pbStack_8 = pbVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
          iVar4 = iVar4 + 4;
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != (byte *)0x0);
      }
      if (pbStack_8 < (byte *)0x21) {
        iVar4 = (int)pbStack_8 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      break;
    case 2:
      iVar20 = -1;
      iVar19 = -1;
      uVar15 = 5;
      iVar13 = -1;
      iVar4 = -2;
      puVar10 = (uint *)FUN_006b0140(0x36bc,DAT_00807618);
      FUN_00711b70(puVar10,iVar4,iVar13,uVar15,iVar19,iVar20);
      puVar10 = (uint *)(iStack_1c + 0x1e1);
      wsprintfA((LPSTR)puVar10,&DAT_007c1ae4,*(undefined4 *)(iStack_1c + 0xc3d));
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x28,0x79,0x9b,0xf);
      uVar15 = 1;
      goto LAB_0050bd93;
    case 3:
      UVar8 = 0x36be;
LAB_0050b38b:
      iVar20 = -1;
      iVar19 = -1;
      uVar15 = 5;
      iVar13 = -1;
      iVar4 = -2;
      puVar10 = (uint *)FUN_006b0140(UVar8,DAT_00807618);
      FUN_00711b70(puVar10,iVar4,iVar13,uVar15,iVar19,iVar20);
      break;
    case 4:
      if (*(char *)(iStack_1c + 0xc31) != '\0') {
        thunk_FUN_00504cf0();
        thunk_FUN_005049a0();
      }
    }
    break;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    if (*(char *)(iStack_1c + 0xc31) == '\0') {
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x24,0x4c,0xa4,0x2b);
      if (*(short *)(iStack_1c + 0xc2f) == 0) goto LAB_0050b386;
      uVar15 = FUN_006b0140(0x273c,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(uint)*(ushort *)(iStack_1c + 0xc2f),uVar15);
      FUN_00711b70(&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    else {
      thunk_FUN_00504cf0();
      thunk_FUN_005049a0();
    }
    break;
  case 0x5b:
    thunk_FUN_00505960();
    break;
  case 0x5c:
  case 0x6e:
    if (*(int *)(iStack_1c + 0xc12) != 0) {
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x28,0x50,'\x01',
                         *(byte **)(iStack_1c + 0xa11));
      uVar5 = thunk_FUN_00526ba0(*(undefined4 *)(iStack_1c + 0xc12),*(char *)(iStack_1c + 0xc1a));
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2ba),uVar5);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x2a,0x52,'\x01',pbVar6);
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
      pbVar6 = (byte *)(((uint)*(byte *)(iStack_1c + 0xc24) * 0x21) / 100);
      pbStack_14 = (byte *)0x0;
      if (pbVar6 != (byte *)0x0) {
        iVar4 = 0x35;
        pbStack_14 = pbVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
          iVar4 = iVar4 + 4;
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != (byte *)0x0);
      }
      if (pbStack_14 < (byte *)0x21) {
        iVar4 = (int)pbStack_14 * 4 + 0x35;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0xb9);
      }
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x5c,0x6c,0x7a,0xb);
      pHVar17 = DAT_00807618;
      UVar8 = thunk_FUN_00523410(*(undefined4 *)(iStack_1c + 0xc12),*(char *)(iStack_1c + 0xc1a),0);
      pcVar9 = (char *)FUN_006b0140(UVar8,pHVar17);
      uVar5 = 0xffffffff;
      do {
        pcVar16 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar16 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar16;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      puVar10 = (uint *)(pcVar16 + -uVar5);
      puVar12 = (uint *)(iStack_1c + 0x1e1);
      for (uVar14 = uVar5 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar12 = (char)*puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
        puVar12 = (uint *)((int)puVar12 + 1);
      }
      for (puVar10 = FUN_0072e560((uint *)(iStack_1c + 0x1e1),'\n'); puVar10 != (uint *)0x0;
          puVar10 = FUN_0072e560(puVar10,'\n')) {
        *(undefined1 *)puVar10 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (iVar4 == 0x5c) {
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x24,0x4c,0xa4,0x2b);
      goto LAB_0050b386;
    }
    if (iVar4 == 0x6e) {
      wsprintfA((LPSTR)(iStack_1c + 0x1e1),&DAT_007c1890,(uint)*(ushort *)(iStack_1c + 0xc2f));
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x1c,0x58,0xb7,0xf);
      FUN_007119c0((uint *)(iStack_1c + 0x1e1),-1,-1,5);
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x16,0x69,0xc3,0xe);
      UVar8 = 0x273b;
      goto LAB_0050b38b;
    }
    break;
  case 0x5d:
    thunk_FUN_00505df0();
    break;
  case 0x5e:
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x2c,0x52,'\x01',
                       *(byte **)(iStack_1c + 0xa09));
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2d2),0);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x2e,0x54,'\x01',pbVar6);
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x73,0x50,0x5f,0xb);
    iVar20 = -1;
    iVar19 = -1;
    uVar15 = 2;
    iVar13 = -1;
    iVar4 = -2;
    puVar10 = (uint *)FUN_006b0140(0x271d,DAT_00807618);
    FUN_00711b70(puVar10,iVar4,iVar13,uVar15,iVar19,iVar20);
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x73,0x5d,0x5f,0x17);
    iVar20 = -1;
    iVar19 = -1;
    uVar15 = 5;
    iVar13 = -1;
    iVar4 = -2;
    puVar10 = (uint *)FUN_006b0140(0x2721,DAT_00807618);
    FUN_00711b70(puVar10,iVar4,iVar13,uVar15,iVar19,iVar20);
    puVar10 = (uint *)(iStack_1c + 0x1e1);
    wsprintfA((LPSTR)puVar10,&DAT_007c28fc,(uint)*(ushort *)(iStack_1c + 0xc34));
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x91,0x73,0x26,0xf);
    uVar15 = 4;
    goto LAB_0050bd93;
  case 0x61:
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x25,0x50,0xa5,0xc);
    uVar15 = 5;
    iVar13 = -1;
    iVar4 = -1;
    puVar10 = (uint *)FUN_006b0140(0x2738,DAT_00807618);
    FUN_007119c0(puVar10,iVar4,iVar13,uVar15);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x5b,'\x01',pbVar6);
    pbVar6 = (byte *)(((uint)*(byte *)(iStack_1c + 0xc2a) * 0x21) / 100);
    pbVar7 = (byte *)0x0;
    if (pbVar6 != (byte *)0x0) {
      iVar4 = 0x35;
      pbStack_14 = pbVar6;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x5d,'\x01',pbVar7);
        iVar4 = iVar4 + 4;
        pbStack_14 = pbStack_14 + -1;
        pbVar7 = pbVar6;
      } while (pbStack_14 != (byte *)0x0);
    }
    if (pbVar7 < (byte *)0x21) {
      iVar4 = (int)pbVar7 * 4 + 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x5d,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    wsprintfA((LPSTR)(iStack_1c + 0x1e1),&DAT_007c28e0,(uint)*(byte *)(iStack_1c + 0xc2a));
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x15,0x68,0xc3,0xc);
    FUN_007119c0((uint *)(iStack_1c + 0x1e1),-1,-1,5);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
    pbVar6 = (byte *)(uint)*(byte *)(iStack_1c + 0xc29);
    pbStack_8 = (byte *)0x0;
    if (pbVar6 != (byte *)0x0) {
      iVar4 = 0x35;
      pbStack_8 = pbVar6;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
        iVar4 = iVar4 + 4;
        pbVar6 = pbVar6 + -1;
      } while (pbVar6 != (byte *)0x0);
    }
    if (pbStack_8 < (byte *)0x21) {
      iVar4 = (int)pbStack_8 * 4 + 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    break;
  case 0x62:
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x15,0x66,0x66,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar4 = -1;
    puVar10 = (uint *)FUN_006b0140(0x2725,DAT_00807618);
    FUN_007119c0(puVar10,iVar4,iVar13,uVar15);
    puVar10 = (uint *)(iStack_1c + 0x1e1);
    wsprintfA((LPSTR)puVar10,&DAT_007c1890,*(undefined4 *)(iStack_1c + 0xc12));
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x7f,0x66,0x24,0xb);
    FUN_007119c0(puVar10,-1,-1,5);
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x8e,0x4f,0x17,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar4 = -1;
    puVar12 = (uint *)FUN_006b0140(0x2740,DAT_00807618);
    FUN_007119c0(puVar12,iVar4,iVar13,uVar15);
    wsprintfA((LPSTR)puVar10,&DAT_007c1890,*(undefined4 *)(iStack_1c + 0xc16));
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0xa5,0x4f,0x24,0xb);
    FUN_007119c0(puVar10,-1,-1,4);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
    uVar5 = *(uint *)(iStack_1c + 0xc16);
    if (uVar5 < *(uint *)(iStack_1c + 0xc12)) {
      pbVar6 = (byte *)0x21;
    }
    else if (uVar5 == 0) {
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar6 = (byte *)((*(uint *)(iStack_1c + 0xc12) * 0x21) / uVar5);
    }
    pbVar7 = (byte *)0x0;
    if (pbVar6 != (byte *)0x0) {
      iVar4 = 0x35;
      pbStack_8 = pbVar6;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
        iVar4 = iVar4 + 4;
        pbVar6 = pbVar6 + -1;
        pbVar7 = pbStack_8;
      } while (pbVar6 != (byte *)0x0);
    }
    if (pbVar7 < (byte *)0x21) {
      iVar4 = (int)pbVar7 * 4 + 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    break;
  case 99:
    if (*(int *)(iStack_1c + 0xc12) == 0) {
      FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x24,0x4c,0xa4,0x2b);
LAB_0050b386:
      UVar8 = 0x2713;
      goto LAB_0050b38b;
    }
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x28,0x50,'\x01',
                       *(byte **)(iStack_1c + 0xa11));
    uVar5 = thunk_FUN_00526ba0(*(undefined4 *)(iStack_1c + 0xc12),*(char *)(iStack_1c + 0xc1a));
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2ba),uVar5);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x2a,0x52,'\x01',pbVar6);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
    pbVar6 = (byte *)(((uint)*(byte *)(iStack_1c + 0xc24) * 0x21) / 100);
    pbStack_14 = (byte *)0x0;
    if (pbVar6 != (byte *)0x0) {
      iVar4 = 0x35;
      pbStack_14 = pbVar6;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
        iVar4 = iVar4 + 4;
        pbVar6 = pbVar6 + -1;
      } while (pbVar6 != (byte *)0x0);
    }
    if (pbStack_14 < (byte *)0x21) {
      iVar4 = (int)pbStack_14 * 4 + 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x5c,0x69,0x7a,0xb);
    pHVar17 = DAT_00807618;
    UVar8 = thunk_FUN_00523410(*(undefined4 *)(iStack_1c + 0xc12),*(char *)(iStack_1c + 0xc1a),0);
    pcVar9 = (char *)FUN_006b0140(UVar8,pHVar17);
    uVar5 = 0xffffffff;
    do {
      pcVar16 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar16 + -uVar5);
    puVar12 = (uint *)(iStack_1c + 0x1e1);
    for (uVar14 = uVar5 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar12 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    for (puVar10 = FUN_0072e560((uint *)(iStack_1c + 0x1e1),'\n'); puVar10 != (uint *)0x0;
        puVar10 = FUN_0072e560(puVar10,'\n')) {
      *(undefined1 *)puVar10 = 0x20;
    }
    FUN_00711b70((uint *)(iStack_1c + 0x1e1),-2,-1,5,-1,-1);
    pbVar6 = (byte *)FUN_00710ba0(*(int *)(iStack_1c + 0x9dd),0,100,0x13,0x18,0xc,0);
    if (pbVar6 != (byte *)0x0) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)(iStack_1c + 0xc1c));
      FUN_007119c0(&DAT_0080f33a,-1,-1,7);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),100,0x59,'\x01',pbVar6);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,(uint)*(ushort *)(iStack_1c + 0xc20));
      FUN_007119c0(&DAT_0080f33a,-1,-1,5);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0xaf,0x59,'\x01',pbVar6);
      FUN_00710f00();
    }
    puVar11 = FUN_00709af0(DAT_00806794,1,(byte *)s_BUT_RCTTYPESI04_007c28e8,0xffffffff,0,1,0,
                           (undefined4 *)0x0);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x82,0x56,'\x01',(byte *)puVar11);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0xb1b),0);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0xa1,0x56,'\x01',pbVar6);
    break;
  case 100:
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x19,0x59,0xbb,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar4 = -1;
    puVar10 = (uint *)FUN_006b0140(0x272d,DAT_00807618);
    FUN_007119c0(puVar10,iVar4,iVar13,uVar15);
    wsprintfA((LPSTR)(iStack_1c + 0x1e1),&DAT_007c1ae4,*(undefined4 *)(iStack_1c + 0xc12));
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x66,0x65,0x24,0xb);
    FUN_007119c0((uint *)(iStack_1c + 0x1e1),-1,-1,7);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
    if (*(uint *)(iStack_1c + 0xc16) == 0) {
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar6 = (byte *)((uint)(*(int *)(iStack_1c + 0xc12) * 0x21) / *(uint *)(iStack_1c + 0xc16));
    }
    pbStack_8 = (byte *)0x0;
    if (pbVar6 != (byte *)0x0) {
      iVar4 = 0x35;
      pbStack_8 = pbVar6;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
        iVar4 = iVar4 + 4;
        pbVar6 = pbVar6 + -1;
      } while (pbVar6 != (byte *)0x0);
    }
    if (pbStack_8 < (byte *)0x21) {
      iVar4 = (int)pbStack_8 * 4 + 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    break;
  case 0x67:
  case 0x68:
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x34,0x5d,0x85,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar4 = -1;
    puVar10 = (uint *)FUN_006b0140(0x272b,DAT_00807618);
    FUN_007119c0(puVar10,iVar4,iVar13,uVar15);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x50,'\x01',pbVar6);
    uVar5 = 0;
    if (*(char *)(iStack_1c + 0xc11) != '\0') {
      iVar4 = 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x52,'\x01',pbVar6);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(byte *)(iStack_1c + 0xc11));
    }
    if (uVar5 < 0x21) {
      iVar4 = uVar5 * 4 + 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x52,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x34,0x7d,0x85,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar4 = -1;
    puVar10 = (uint *)FUN_006b0140(0x272c,DAT_00807618);
    FUN_007119c0(puVar10,iVar4,iVar13,uVar15);
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x71,'\x01',pbVar6);
    uVar5 = 0;
    if (*(int *)(iStack_1c + 0xc12) != 0) {
      iVar4 = 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x73,'\x01',pbVar6);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(uint *)(iStack_1c + 0xc12));
    }
    if (uVar5 < 0x21) {
      iVar4 = uVar5 * 4 + 0x35;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x73,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    break;
  case 0x6d:
    pbStack_8 = (byte *)(iStack_1c + 0xc24);
    puStack_10 = (undefined4 *)(iStack_1c + 0xc12);
    iStack_20 = -0xc24 - iStack_1c;
    iVar4 = 99;
    pbStack_14 = (byte *)0x2c;
    do {
      pbVar6 = pbStack_14;
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),(int)(pbStack_14 + -2),0x55,'\x01',
                         *(byte **)(iStack_1c + 0xa11));
      uVar5 = thunk_FUN_00526ba0(*puStack_10,pbStack_8[-10]);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2c2),uVar5);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),(int)pbVar6,0x57,'\x01',pbVar7);
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),4);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4 + -2,0x58,'\x01',pbVar6);
      uStack_c = 0;
      uVar5 = *pbStack_8 / 10;
      if (uVar5 != 0) {
        iVar13 = 0x7e;
        uStack_18 = uVar5;
        uStack_c = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),7);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,iVar13,'\x01',pbVar6);
          iVar13 = iVar13 + -4;
          uStack_18 = uStack_18 - 1;
        } while (uStack_18 != 0);
      }
      if (uStack_c < 10) {
        iVar13 = uStack_c * -4 + 0x7e;
        uStack_18 = 10 - uStack_c;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),8);
          thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,iVar13,'\x01',pbVar6);
          iVar13 = iVar13 + -4;
          uStack_18 = uStack_18 - 1;
        } while (uStack_18 != 0);
      }
      puStack_10 = puStack_10 + 1;
      pbStack_14 = pbStack_14 + 0x65;
      pbStack_8 = pbStack_8 + 1;
      iVar4 = iVar4 + 0x1a;
    } while (pbStack_8 + iStack_20 < (byte *)0x2);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d_____d_007c28d4,(uint)*(byte *)(iStack_1c + 0xc24),
              (uint)*(byte *)(iStack_1c + 0xc25));
    FUN_00710a90(*(int *)(iStack_1c + 0x194),0,0x5f,0x4d,0x2f,0xb);
    uVar15 = 5;
    puVar10 = &DAT_0080f33a;
LAB_0050bd93:
    FUN_007119c0(puVar10,-1,-1,uVar15);
    break;
  case 0x70:
  case 0x72:
  case 0x73:
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x33,0x7b,'\x01',pbVar6);
    pbVar6 = (byte *)(uint)*(byte *)(iStack_1c + 0xc29);
    pbStack_8 = (byte *)0x0;
    pbStack_14 = pbVar6;
    if (pbVar6 != (byte *)0x0) {
      iVar4 = 0x35;
      pbStack_8 = pbVar6;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
        iVar4 = iVar4 + 4;
        pbVar6 = pbVar6 + -1;
      } while (pbVar6 != (byte *)0x0);
    }
    pbVar6 = pbStack_14;
    if (pbStack_8 < (byte *)0x21) {
      iVar4 = (int)pbStack_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)(iStack_1c + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),iVar4,0x7d,'\x01',pbVar7);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xb9);
    }
    pbVar7 = (byte *)FUN_00710ba0(*(int *)(iStack_1c + 0x9e1),0,0x24,6,0xa4,0x2b,0);
    if (pbVar7 != (byte *)0x0) {
      iVar20 = -1;
      iVar19 = -1;
      uVar15 = 5;
      iVar13 = -1;
      iVar4 = -1;
      puVar10 = (uint *)FUN_006b0140(0x36c4 - (pbVar6 < (byte *)0x21),DAT_00807618);
      FUN_00711b70(puVar10,iVar4,iVar13,uVar15,iVar19,iVar20);
      thunk_FUN_00540760(*(undefined4 **)(iStack_1c + 0x194),0x24,0x4c,'\x01',pbVar7);
      FUN_00710f00();
    }
  }
switchD_0050a9c9_caseD_5f:
  thunk_FUN_00504e60();
switchD_0050a52e_caseD_df:
  if (-1 < (int)*(uint *)(iStack_1c + 0x15c)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(iStack_1c + 0x15c),0xffffffff,*(uint *)(iStack_1c + 0x50),
                 *(uint *)(iStack_1c + 0xa8));
  }
  DAT_00858df8 = puStack_64;
  return;
}

