
void thunk_FUN_0050e7d0(char param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  LPSTR pCVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 uVar9;
  void *pvVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  undefined4 uVar18;
  short sVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  char *pcVar25;
  undefined4 auStack_84c [68];
  undefined4 auStack_73c [5];
  undefined4 auStack_728 [307];
  undefined4 auStack_25c [84];
  undefined4 uStack_10c;
  undefined4 auStack_108 [16];
  undefined4 auStack_c8 [4];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 *puStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_28;
  undefined4 *puStack_24;
  void *pvStack_20;
  int iStack_1c;
  uint uStack_18;
  char *pcStack_14;
  void *pvStack_10;
  uint uStack_c;
  char *pcStack_8;
  
  uStack_10c = DAT_00858df8;
  DAT_00858df8 = &uStack_10c;
  iVar3 = __setjmp3(auStack_108,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_10c;
    iVar16 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x94e,0,iVar3,&DAT_007a4ccc);
    if (iVar16 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c2700,0x94e);
    return;
  }
  if (param_1 != '\0') {
    thunk_FUN_0054a8d0(DAT_00802a30);
  }
  if (*(uint *)((int)pvStack_20 + 0x302) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*(uint *)((int)pvStack_20 + 0x302));
  }
  *(undefined4 *)((int)pvStack_20 + 0x302) = 0;
  if (*(uint *)((int)pvStack_20 + 0x30c) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*(uint *)((int)pvStack_20 + 0x30c));
  }
  *(undefined4 *)((int)pvStack_20 + 0x30c) = 0;
  if (*(uint *)((int)pvStack_20 + 0x314) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*(uint *)((int)pvStack_20 + 0x314));
  }
  *(undefined4 *)((int)pvStack_20 + 0x314) = 0;
  if (*(uint *)((int)pvStack_20 + 0x318) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*(uint *)((int)pvStack_20 + 0x318));
  }
  *(undefined4 *)((int)pvStack_20 + 0x318) = 0;
  if (*(uint *)((int)pvStack_20 + 0x9d0) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*(uint *)((int)pvStack_20 + 0x9d0));
  }
  *(undefined4 *)((int)pvStack_20 + 0x9d0) = 0;
  puVar15 = (uint *)((int)pvStack_20 + 0xa15);
  iVar3 = 6;
  do {
    if (*puVar15 != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*puVar15);
      *puVar15 = 0;
    }
    puVar15 = puVar15 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar15 = (uint *)((int)pvStack_20 + 0xb1f);
  iVar3 = 6;
  do {
    if (*puVar15 != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*puVar15);
      *puVar15 = 0;
    }
    puVar15 = puVar15 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(uint *)((int)pvStack_20 + 0xb37) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_20 + 0xc),*(uint *)((int)pvStack_20 + 0xb37));
  }
  cVar1 = *(char *)((int)pvStack_20 + 0xbfa);
  *(undefined4 *)((int)pvStack_20 + 0xb37) = 0;
  if (((cVar1 == '\0') || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
    if (*(int *)((int)pvStack_20 + 0x9c4) != 0) {
      *(undefined4 *)((int)pvStack_20 + 0x2c) = 0;
      *(undefined4 *)((int)pvStack_20 + 0x28) = 0x20;
      FUN_006e6080(pvStack_20,2,*(int *)((int)pvStack_20 + 0x9c4),
                   (undefined4 *)((int)pvStack_20 + 0x18));
      DAT_00858df8 = (undefined4 *)uStack_10c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_10c;
    return;
  }
  uStack_18 = uStack_18 & 0xffffff00;
  puVar7 = auStack_70;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iStack_1c = (int)pvStack_20 + 0x86a;
  pcStack_8 = (char *)((int)pvStack_20 + 0xbfe);
  pvVar10 = (void *)(-0xbfe - (int)pvStack_20);
  pvStack_10 = pvVar10;
  do {
    if (*pcStack_8 != '\0') {
      pcStack_14 = pcStack_8 + (int)pvVar10;
      iVar16 = 0xc;
      iVar3 = 0xd;
      if (pcStack_14 == (char *)0x1) {
        iVar16 = 0x49;
      }
      else if (pcStack_14 == (char *)0x2) {
        iVar16 = 0xc;
        iVar3 = 0x27;
      }
      else if (pcStack_14 == (char *)0x3) {
        iVar16 = 0x49;
        iVar3 = 0x27;
      }
      thunk_FUN_004f17d0(pvStack_20,0,(byte)uStack_18);
      if (*(char *)((int)pvStack_20 + 0xbfc) == '\0') {
        uStack_c = 0;
      }
      else {
        uStack_c = (uint)(byte)pcStack_8[6];
      }
      pcVar25 = (char *)0x0;
      uVar24 = 0;
      uVar23 = 1;
      iVar22 = 0;
      iVar13 = iStack_1c;
      pcVar4 = thunk_FUN_00529590(*pcStack_8,*(int *)((int)pvStack_20 + 0xbf5));
      pCVar5 = thunk_FUN_00571240(pcVar4,iVar22);
      thunk_FUN_004f2e40(auStack_84c + iStack_28 * 0x5f,5,uStack_c,iVar16,iVar3,6,pCVar5,uVar23,
                         uVar24,iVar13,pcVar25);
      pcVar4 = pcStack_14;
      iVar16 = iStack_28;
      iVar3 = *(int *)((int)pvStack_20 + 0x2de);
      auStack_73c[iStack_28 * 0x5f] = 1;
      uVar6 = FUN_0070b3a0(iVar3,(int)pcVar4);
      pvVar10 = pvStack_10;
      auStack_728[iVar16 * 0x5f] = uVar6;
      auStack_728[iVar16 * 0x5f + 1] = 0x3c;
      iStack_28 = iStack_28 + 1;
    }
    bVar12 = (char)uStack_18 + 1;
    iStack_1c = iStack_1c + 0x27;
    pcStack_8 = pcStack_8 + 1;
    uStack_18 = CONCAT31(uStack_18._1_3_,bVar12);
  } while (bVar12 < 4);
  uStack_60 = *(undefined4 *)((int)pvStack_20 + 8);
  puStack_24 = auStack_84c;
  auStack_70[0] = 1;
  auStack_70[1] = 0xffffffff;
  uStack_5c = 2;
  uStack_58 = 0xb20f;
  uStack_3c = 2;
  uStack_38 = 0xb210;
  uStack_40 = uStack_60;
  (**(code **)(**(int **)((int)pvStack_20 + 0xc) + 8))(9,(int)pvStack_20 + 0x302,0,auStack_70,0);
  thunk_FUN_004f1610(pvStack_20,'\0');
  if (*(int *)((int)pvStack_20 + 0x9c4) != 0) {
    *(undefined4 *)((int)pvStack_20 + 0x28) = 0x20;
    if (*(char *)((int)pvStack_20 + 0xbfc) == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)*(byte *)((int)pvStack_20 + 0xc0a);
    }
    *(uint *)((int)pvStack_20 + 0x2c) = uVar11;
    FUN_006e6080(pvStack_20,2,*(int *)((int)pvStack_20 + 0x9c4),
                 (undefined4 *)((int)pvStack_20 + 0x18));
  }
  if (*(char *)((int)pvStack_20 + 0xbfb) == '\x02') {
LAB_0050eb47:
    uVar21 = 0;
    uVar20 = 0;
    iVar16 = 0;
    pcVar4 = (char *)0x0;
    iVar3 = 0;
    uVar23 = 0;
    sVar19 = 0;
    uVar18 = 0xb13f;
    uVar6 = 0xb12f;
    pCVar5 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
    uVar11 = (uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0');
  }
  else {
    switch(*(undefined4 *)((int)pvStack_20 + 0xbf5)) {
    case 0x53:
      if (*(char *)((int)pvStack_20 + 0xc3c) != '\x01') {
        DAT_00858df8 = (undefined4 *)uStack_10c;
        return;
      }
      uVar21 = 0;
      uVar20 = 0;
      iVar16 = 0;
      pcVar4 = (char *)0x0;
      iVar3 = 0;
      uVar23 = 0;
      sVar19 = 0;
      uVar18 = 0xb13f;
      uVar6 = 0xb12f;
      pCVar5 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar11 = (uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0');
      break;
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      if (*(char *)((int)pvStack_20 + 0xc31) == '\0') {
        DAT_00858df8 = (undefined4 *)uStack_10c;
        return;
      }
      goto LAB_0050eb47;
    case 0x5b:
      uStack_c = 2;
      puVar7 = auStack_c8;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar7 = auStack_25c;
      for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      pvStack_10 = (void *)(*(int *)((int)pvStack_20 + 0x50) + 0x23);
      iVar16 = 0;
      pcStack_14 = *(char **)((int)pvStack_20 + 0x138);
      puVar7 = auStack_25c + 1;
      iVar3 = 0;
      do {
        pvVar10 = pvStack_10;
        puVar7[-1] = iVar3 + 1;
        *puVar7 = 0;
        puVar7[2] = pvVar10;
        bVar17 = pcStack_14 != (char *)0x0;
        puVar7[4] = 0x1d;
        iVar13 = DAT_00806734;
        if (bVar17) {
          iVar13 = *(int *)((int)pvStack_20 + 0xa8);
        }
        puVar7[3] = iVar13 + 0x59 + iVar16;
        puVar7[5] = 0x11;
        puVar7[0x11] = 0;
        puVar7[0x15] = 0x101;
        puVar7[10] = 0x101;
        puVar7[0x16] = 3;
        puVar7[0xb] = 3;
        puVar7[0xc] = 0x4201;
        puVar7[0x17] = 0x4202;
        *(undefined2 *)(puVar7 + 0x18) = 0;
        *(undefined2 *)(puVar7 + 0xd) = 0;
        *(undefined2 *)((int)puVar7 + 0x62) = 2;
        *(undefined2 *)((int)puVar7 + 0x36) = 2;
        if (iVar3 == 0) {
          uVar6 = 0x3aa9;
LAB_0050edc5:
          puVar7[0x19] = uVar6;
          puVar7[0xe] = uVar6;
        }
        else if (iVar3 == 1) {
          uVar6 = 0x3aaa;
          goto LAB_0050edc5;
        }
        iVar16 = iVar16 + 0x12;
        puVar7 = puVar7 + 0x1c;
        uStack_c = uStack_c + -1;
        iVar3 = iVar3 + 1;
        if (uStack_c == 0) {
          uStack_7c = (uint)*(byte *)((int)pvStack_20 + 0x9d4);
          puStack_80 = auStack_25c;
          uStack_b8 = *(undefined4 *)((int)pvStack_20 + 8);
          auStack_c8[0] = 1;
          auStack_c8[1] = 1;
          uStack_78 = 1;
          uStack_74 = 1;
          uStack_b4 = 2;
          uStack_b0 = 0xb207;
          uStack_94 = 2;
          uStack_90 = 0xb206;
          uStack_98 = uStack_b8;
          (**(code **)(**(int **)((int)pvStack_20 + 0xc) + 8))
                    (5,(int)pvStack_20 + 0x9d0,0,auStack_c8,0);
          pcStack_8 = (char *)((uint)pcStack_8 & 0xffffff00);
          puVar7 = (undefined4 *)((int)pvStack_20 + 0xa2d);
          for (iVar3 = 0x3a; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = 0;
          do {
            if ((*(char *)((int)pvStack_20 + 0x9d4) == '\x01') && ((char)pcStack_8 == '\x03')) {
              uVar9 = 0;
            }
            else {
              uVar9 = 2;
            }
            uVar11 = (uint)pcStack_8 & 0xff;
            pvStack_10 = (void *)(uVar11 * 0x27 + (int)pvStack_20);
            puVar14 = (undefined1 *)((int)pvStack_10 + 0xa2d);
            *puVar14 = uVar9;
            uVar6 = thunk_FUN_00525ef0(*(char *)((int)pvStack_20 + 0x9d4) + '\x02',(char)pcStack_8);
            *(undefined4 *)((int)pvStack_10 + 0xa2e) = uVar6;
            if ((*(char *)((int)pvStack_20 + 0x9d4) == '\x01') && ((char)pcStack_8 == '\x03')) {
              uVar8 = 0;
            }
            else {
              uVar8 = (uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0');
            }
            uVar6 = thunk_FUN_004f3130(5,0,uVar8,0xba,uVar11 * 0xb + 0x55,0,0,uVar11 + 0xb18f,
                                       uVar11 + 0xb19f,1,0,(int)puVar14,(char *)0x0,0x11,10,0);
            *(undefined4 *)((int)pvStack_20 + uVar11 * 4 + 0xa15) = uVar6;
            bVar12 = (char)pcStack_8 + 1;
            pcStack_8 = (char *)CONCAT31(pcStack_8._1_3_,bVar12);
          } while (bVar12 < 4);
          DAT_00858df8 = (undefined4 *)uStack_10c;
          return;
        }
      } while( true );
    case 0x5c:
      if (*(int *)((int)pvStack_20 + 0xc12) == 0) {
        DAT_00858df8 = (undefined4 *)uStack_10c;
        return;
      }
      uVar21 = 0;
      uVar20 = 0;
      iVar16 = 0;
      pcVar4 = (char *)0x0;
      iVar3 = 0;
      uVar23 = 0;
      sVar19 = 0;
      uVar18 = 0xb13f;
      uVar6 = 0xb12f;
      pCVar5 = thunk_FUN_00571240(s_BUT_SMALL_007c23b4,0);
      uVar11 = (uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0');
      break;
    default:
      DAT_00858df8 = (undefined4 *)uStack_10c;
      return;
    case 0x67:
    case 0x68:
      if (*(char *)((int)pvStack_20 + 0xbfc) == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)*(byte *)((int)pvStack_20 + 0xc0b);
      }
      uVar6 = thunk_FUN_004f3130(5,0,uVar11,0x1a,0x5d,1,0x7c2300,0xb211,0xb212,0,0,0,(char *)0x0,0,0
                                 ,0);
      *(undefined4 *)((int)pvStack_20 + 0xb1f) = uVar6;
      if (*(char *)((int)pvStack_20 + 0xbfc) == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)*(byte *)((int)pvStack_20 + 0xc0c);
      }
      uVar6 = thunk_FUN_004f3130(5,0,uVar11,0xba,0x5d,1,0x7c22e4,0xb213,0xb214,0,0,0,(char *)0x0,0,0
                                 ,0);
      *(undefined4 *)((int)pvStack_20 + 0xb23) = uVar6;
      DAT_00858df8 = (undefined4 *)uStack_10c;
      return;
    case 0x6d:
      uVar6 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0'),0x2a,0x7b,1,
                                 0x7c2300,0xb211,0xb212,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)((int)pvStack_20 + 0xb1f) = uVar6;
      uVar6 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0'),0x45,0x7b,1,
                                 0x7c22e4,0xb213,0xb214,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)((int)pvStack_20 + 0xb23) = uVar6;
      uVar6 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0'),0x8f,0x7b,1,
                                 0x7c2300,0xb215,0xb216,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)((int)pvStack_20 + 0xb27) = uVar6;
      uVar6 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0'),0xaa,0x7b,1,
                                 0x7c22e4,0xb217,0xb218,0,0,0,(char *)0x0,0,0,0);
      *(undefined4 *)((int)pvStack_20 + 0xb2b) = uVar6;
      uVar6 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0'),0x17,100,0,0
                                 ,0xb219,0xb21a,0,0,0,(char *)0x0,0x11,10,0);
      *(undefined4 *)((int)pvStack_20 + 0xb2f) = uVar6;
      uVar6 = thunk_FUN_004f3130(5,0,(uint)(*(char *)((int)pvStack_20 + 0xbfc) != '\0'),0xc5,100,0,0
                                 ,0xb21b,0xb21c,0,0,0,(char *)0x0,0x11,10,0);
      *(undefined4 *)((int)pvStack_20 + 0xb33) = uVar6;
      DAT_00858df8 = (undefined4 *)uStack_10c;
      return;
    }
  }
  uVar6 = thunk_FUN_004f3130(5,0,uVar11,0x9a,0x59,1,(int)pCVar5,uVar6,uVar18,sVar19,uVar23,iVar3,
                             pcVar4,iVar16,uVar20,uVar21);
  *(undefined4 *)((int)pvStack_20 + 0x314) = uVar6;
  DAT_00858df8 = (undefined4 *)uStack_10c;
  return;
}

