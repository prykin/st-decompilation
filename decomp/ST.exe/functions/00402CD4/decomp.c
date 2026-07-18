
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_005ab300(undefined1 param_1,byte param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *this;
  int iVar4;
  HANDLE pvVar5;
  undefined4 uVar6;
  ushort *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  char *pcVar13;
  char *pcVar14;
  void *unaff_EDI;
  char *pcVar15;
  int iVar16;
  char cVar17;
  undefined4 auStack_86c [256];
  char acStack_46c [32];
  undefined1 uStack_44c;
  undefined4 auStack_26c [7];
  undefined4 *puStack_250;
  undefined4 auStack_24c [16];
  undefined4 uStack_20c;
  undefined4 uStack_1ff;
  undefined4 uStack_1fb;
  undefined4 uStack_1f7;
  undefined4 uStack_1e5;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1be;
  undefined4 uStack_1b1;
  undefined4 uStack_1ad;
  undefined4 uStack_1a9;
  undefined4 uStack_149;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_122;
  undefined4 uStack_115;
  undefined4 uStack_111;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  void *pvStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_250 = DAT_00858df8;
  DAT_00858df8 = &puStack_250;
  iVar4 = __setjmp3(auStack_24c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = puStack_250;
    iVar16 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x15a,0,iVar4,&DAT_007a4ccc);
    if (iVar16 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cc728,0x15a);
    return;
  }
  *(undefined1 *)((int)pvStack_10 + 0x1a5f) = param_1;
  if (2 < *(byte *)(DAT_0081176c + 0x2eb)) {
    *(undefined1 *)(DAT_0081176c + 0x2eb) = 2;
  }
  _DAT_0080f32e = 0;
  if (DAT_00802a30 != (void *)0x0) {
    if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
    }
    else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
    }
  }
  uVar11 = 0xffffffff;
  pcVar13 = (char *)((int)pvStack_10 + 0x1ca3);
  pcVar14 = &DAT_00807680;
  do {
    pcVar15 = pcVar14;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar14 + 1;
    cVar17 = *pcVar14;
    pcVar14 = pcVar15;
  } while (cVar17 != '\0');
  uVar11 = ~uVar11;
  pcVar14 = pcVar15 + -uVar11;
  pcVar15 = pcVar13;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar15 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar15 = pcVar15 + 1;
  }
  switch(*(undefined1 *)((int)pvStack_10 + 0x1a5f)) {
  case 1:
  case 2:
  case 4:
  case 5:
    uStack_c = 0xffffffff;
    pcVar14 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar15 = pcVar14;
      if (uStack_c == 0) break;
      uStack_c = uStack_c - 1;
      pcVar15 = pcVar14 + 1;
      cVar17 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar17 != '\0');
    uStack_c = ~uStack_c;
    pcVar15 = pcVar15 + -uStack_c;
    iVar4 = -1;
    pcVar14 = pcVar13;
    do {
      pcVar13 = pcVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar14 + 1;
      cVar17 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar17 != '\0');
    goto LAB_005ab4dc;
  case 3:
    uVar11 = 0xffffffff;
    pcVar14 = PTR_s_MISSIONS__0079c054;
    do {
      pcVar15 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar14 + 1;
      cVar17 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar17 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    do {
      pcVar14 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar13 + 1;
      cVar17 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar17 != '\0');
    pcVar15 = pcVar15 + -uVar11;
    pcVar13 = pcVar14 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    goto LAB_005ab4e5;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
switchD_005ab3e3_caseD_9:
    uVar11 = 0xffffffff;
    pcVar13 = PTR_s_SAVEGAME__0079c04c;
    do {
      pcVar14 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar14 = pcVar13 + 1;
      cVar17 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar17 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar13 = (char *)((int)pvStack_10 + 0x1ca3);
    do {
      pcVar15 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar13 + 1;
      cVar17 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar17 != '\0');
    pcVar13 = pcVar14 + -uVar11;
    pcVar14 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar13 = (char *)&DAT_00807ddd;
    do {
      pcVar14 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar14 = pcVar13 + 1;
      cVar17 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar17 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar13 = (char *)((int)pvStack_10 + 0x1ca3);
    do {
      pcVar15 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar13 + 1;
      cVar17 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar17 != '\0');
    pcVar13 = pcVar14 + -uVar11;
    pcVar14 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    FUN_006b8280((char *)((int)pvStack_10 + 0x1ca3),(char *)((int)pvStack_10 + 0x1ca3));
    break;
  case 0x13:
    if (DAT_00803400 == 0xc) goto switchD_005ab3e3_caseD_9;
    uStack_c = 0xffffffff;
    pcVar14 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar15 = pcVar14;
      if (uStack_c == 0) break;
      uStack_c = uStack_c - 1;
      pcVar15 = pcVar14 + 1;
      cVar17 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar17 != '\0');
    uStack_c = ~uStack_c;
    pcVar15 = pcVar15 + -uStack_c;
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar13 + 1;
      cVar17 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar17 != '\0');
LAB_005ab4dc:
    pcVar13 = pcVar13 + -1;
    for (uVar12 = uStack_c >> 2; uVar11 = uStack_c, uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
LAB_005ab4e5:
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  uVar11 = 0xffffffff;
  pcVar13 = (char *)((int)pvStack_10 + 0x1da7);
  pcVar14 = (char *)((int)pvStack_10 + 0x1ca3);
  do {
    pcVar15 = pcVar14;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar14 + 1;
    cVar17 = *pcVar14;
    pcVar14 = pcVar15;
  } while (cVar17 != '\0');
  uVar11 = ~uVar11;
  pcVar14 = pcVar15 + -uVar11;
  pcVar15 = pcVar13;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar15 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_006b78c0(pcVar13,pcVar13);
  pvVar5 = FindFirstChangeNotificationA((LPCSTR)((int)pvStack_10 + 0x1da7),0,1);
  *(HANDLE *)((int)pvStack_10 + 0x1c8f) = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffff) {
    *(undefined4 *)((int)pvStack_10 + 0x1c8f) = 0;
  }
  FUN_006b8280((char *)((int)pvStack_10 + 0x1ca3),(char *)((int)pvStack_10 + 0x1ca3));
  FUN_006b8280((char *)((int)pvStack_10 + 0x1da7),(char *)((int)pvStack_10 + 0x1da7));
  uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
  *(undefined4 *)((int)pvStack_10 + 0x5d) = *(undefined4 *)(DAT_0081176c + 0x2c);
  FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),auStack_86c,(int *)0x0);
  *(undefined4 *)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x140) = 0x1f;
  FUN_00718780((int)auStack_86c,0,0x100,0x8b,0x15,
               (undefined4 *)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x144));
  puVar7 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_FILE_LIST_007cc084,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)((int)pvStack_10 + 0x1c7f) = puVar7;
  puVar7 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar7);
  *(undefined4 *)((int)pvStack_10 + 0x20b3) = 0x1010101;
  *(undefined1 *)((int)pvStack_10 + 0x20b7) = 1;
  switch(*(undefined1 *)((int)pvStack_10 + 0x1a5f)) {
  case 1:
  case 2:
  case 3:
  case 9:
  case 10:
  case 0xb:
switchD_005ab64d_caseD_1:
    *(undefined1 *)((int)pvStack_10 + 0x20b7) = 0;
    goto switchD_005ab66b_caseD_6;
  default:
    switch(param_2) {
    case 4:
    case 5:
    case 7:
    case 0xc:
    case 0x14:
      goto switchD_005ab64d_caseD_1;
    default:
switchD_005ab66b_caseD_6:
      switch(param_2) {
      case 1:
      case 2:
      case 4:
      case 5:
      case 0x14:
        *(undefined1 *)((int)pvStack_10 + 0x20b4) = 0;
      case 6:
      case 7:
        *(undefined1 *)((int)pvStack_10 + 0x20b5) = 0;
      default:
        iVar4 = *(int *)(DAT_0081176c + 0x544);
        uStack_c = param_2 - 1;
        FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
        if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
          FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
        }
        puVar8 = FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)(DAT_0081176c + 0x548) = puVar8;
        uVar11 = param_2 - 1;
        if (*(int *)(DAT_0081176c + 0x389) != 0) {
          *(undefined4 *)((int)pvStack_10 + 0x2d) = 0x28;
          *(undefined2 *)((int)pvStack_10 + 0x31) = 1;
          *(undefined2 *)((int)pvStack_10 + 0x33) =
               *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
          FUN_006e6080(pvStack_10,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)((int)pvStack_10 + 0x1d));
          *(undefined4 *)((int)pvStack_10 + 0x2d) = 0x22;
          *(undefined2 *)((int)pvStack_10 + 0x31) = 0;
          *(undefined2 *)((int)pvStack_10 + 0x33) = 0;
          FUN_006e6080(pvStack_10,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)((int)pvStack_10 + 0x1d));
          uVar11 = uStack_c;
        }
        switch(uVar11) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          thunk_FUN_0055dbf0(DAT_0080759c,1,0);
        }
        if (*(int *)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6) != 0) {
          thunk_FUN_005b7210();
          *(undefined4 *)(*(int *)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6) + 0x1cab) =
               *(undefined4 *)((int)pvStack_10 + 8);
        }
        thunk_FUN_005ad050('\x01');
        FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
        (**(code **)(*(int *)((int)pvStack_10 + 0x1a70) + 4))
                  (DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
        *(undefined4 *)((int)pvStack_10 + 0x1a8c) = 0x2f8;
        *(undefined4 *)((int)pvStack_10 + 0x1a90) = 0x3c;
        *(undefined4 *)((int)pvStack_10 + 0x1a78) = 0;
        FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
        (**(code **)(*(int *)((int)pvStack_10 + 0x1b01) + 4))
                  (DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
        *(undefined4 *)((int)pvStack_10 + 0x1b1d) = 0x2f8;
        *(undefined4 *)((int)pvStack_10 + 0x1b21) = 0x1b8;
        *(undefined4 *)((int)pvStack_10 + 0x1b09) = 0;
        FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
        (**(code **)(*(int *)((int)pvStack_10 + 0x1b92) + 4))
                  (DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
        iVar4 = 1;
        *(undefined4 *)((int)pvStack_10 + 0x1bae) = 0x2fe;
        *(undefined4 *)((int)pvStack_10 + 0x1bb2) = 0x5c;
        puVar9 = (undefined4 *)(*(int *)((int)pvStack_10 + 0x5d) + 0x28);
        *(undefined4 *)((int)pvStack_10 + 0x1b9a) = 0;
        uVar11 = FUN_006b4fe0(*(int *)((int)pvStack_10 + 0x5d));
        iVar4 = FUN_006b50c0(0x1e4,399,(uint)*(ushort *)(*(int *)((int)pvStack_10 + 0x5d) + 0xe),
                             uVar11,puVar9,iVar4);
        *(int *)((int)pvStack_10 + 0x1c7b) = iVar4;
        uVar11 = *(uint *)(iVar4 + 0x14);
        if (uVar11 == 0) {
          uVar11 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar4 + 8);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        puVar8 = (uint *)((int)pvStack_10 + 0x1c23);
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar11 = 0x3f;
        do {
          FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x40213a,
                       *(uint *)(*(int *)((int)pvStack_10 + 0x1c7b) + 4),0x13,(uint)pvStack_10);
          FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0x114,uVar11);
          uVar11 = uVar11 + 0x13;
          puVar8 = puVar8 + 1;
        } while ((int)uVar11 < 0x1e1);
        thunk_FUN_005aeab0('\0');
        thunk_FUN_005afd00(pvStack_10,*(uint *)((int)pvStack_10 + 0x1c93));
        FUN_006b2330((uint)DAT_008075a8,&uStack_8,0x32,0x4042d2,0x204,0x19d,
                     *(int *)((int)pvStack_10 + 0x1a5b) + 0x140);
        FUN_006b3640(DAT_008075a8,uStack_8,0xffffffff,0x112,0x38);
        puVar10 = (undefined1 *)FUN_0072e530(0x33);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          puVar10[2] = 1;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 3) = 0xffffffff;
          puVar10[1] = 2;
          *(undefined4 *)(puVar10 + 7) = 0;
          *(undefined4 *)(puVar10 + 0xb) = 0;
          *(undefined4 *)(puVar10 + 0xf) = 0;
          *(undefined4 *)(puVar10 + 0x1b) = 1;
          *(undefined4 *)(puVar10 + 0x13) = 1;
          *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
          *(undefined4 *)(puVar10 + 0x27) = 0;
          *(undefined4 *)(puVar10 + 0x23) = 0;
          *(undefined4 *)(puVar10 + 0x2f) = 1;
          *(undefined4 *)(puVar10 + 0x2b) = 1;
        }
        *(undefined1 **)((int)pvStack_10 + 0x20b8) = puVar10;
        if (puVar10 != (undefined1 *)0x0) {
          uVar12 = 0;
          cVar17 = '\x01';
          uVar11 = 0x10;
          iVar16 = 1;
          iVar4 = FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
          uVar11 = thunk_FUN_005aacb0(2,0x112,0x38,iVar4,iVar16,uVar11,cVar17,uVar12);
          if (uVar11 != 0) {
            iVar4 = *(int *)((int)pvStack_10 + 0x20b8);
            *(undefined1 *)(iVar4 + 2) = 1;
            *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
            uVar11 = *(uint *)(*(int *)((int)pvStack_10 + 0x20b8) + 3);
            if (-1 < (int)uVar11) {
              FUN_006b3af0(DAT_008075a8,uVar11);
            }
            if (*(uint *)((int)pvStack_10 + 0x1a74) != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)pvStack_10 + 0x1ab8),*(uint *)((int)pvStack_10 + 0x1a74));
            }
            if (*(uint *)((int)pvStack_10 + 0x1b05) != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)pvStack_10 + 0x1b49),*(uint *)((int)pvStack_10 + 0x1b05));
            }
            if (*(uint *)((int)pvStack_10 + 0x1b96) != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)pvStack_10 + 0x1bda),*(uint *)((int)pvStack_10 + 0x1b96));
            }
            puVar8 = (uint *)((int)pvStack_10 + 0x1c23);
            iVar4 = 0x16;
            do {
              FUN_006b3af0(DAT_008075a8,*puVar8);
              puVar8 = puVar8 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        if (uStack_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,uStack_8);
          uStack_8 = 0xffffffff;
        }
        if (*(char *)((int)pvStack_10 + 0x20b4) == '\0') {
          if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
            FUN_006b34d0(*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe
                         ,*(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
          }
          if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
            FUN_006b34d0(*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe
                         ,*(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
          }
          if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
            FUN_006b34d0(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe
                         ,*(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
          }
          FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
        }
        else {
          FUN_006b2330((uint)DAT_008075a8,&uStack_8,0x32,0x4042d2,0xf9,0x121,
                       *(int *)((int)pvStack_10 + 0x1a5b) + 0x140);
          FUN_006b3640(DAT_008075a8,uStack_8,0xffffffff,10,0xb4);
          puVar10 = (undefined1 *)FUN_0072e530(0x33);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = (undefined1 *)0x0;
          }
          else {
            puVar10[2] = 1;
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 3) = 0xffffffff;
            puVar10[1] = 2;
            *(undefined4 *)(puVar10 + 7) = 0;
            *(undefined4 *)(puVar10 + 0xb) = 0;
            *(undefined4 *)(puVar10 + 0xf) = 0;
            *(undefined4 *)(puVar10 + 0x1b) = 1;
            *(undefined4 *)(puVar10 + 0x13) = 1;
            *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
            *(undefined4 *)(puVar10 + 0x27) = 0;
            *(undefined4 *)(puVar10 + 0x23) = 0;
            *(undefined4 *)(puVar10 + 0x2f) = 1;
            *(undefined4 *)(puVar10 + 0x2b) = 1;
          }
          *(undefined1 **)((int)pvStack_10 + 0x20bc) = puVar10;
          if (puVar10 != (undefined1 *)0x0) {
            uVar12 = 0;
            cVar17 = '\x01';
            uVar11 = 0x10;
            iVar16 = 1;
            iVar4 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
            uVar11 = thunk_FUN_005aacb0(4,10,0xb4,iVar4,iVar16,uVar11,cVar17,uVar12);
            if (uVar11 != 0) {
              iVar4 = *(int *)((int)pvStack_10 + 0x20bc);
              *(undefined1 *)(iVar4 + 2) = 1;
              *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
              uVar11 = *(uint *)(*(int *)((int)pvStack_10 + 0x20bc) + 3);
              if (-1 < (int)uVar11) {
                FUN_006b3af0(DAT_008075a8,uVar11);
              }
              if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
              }
              if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
              }
              if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
              }
              FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
            }
          }
          if (uStack_8 != 0xffffffff) {
            FUN_006b3bb0(DAT_008075a8,uStack_8);
            uStack_8 = 0xffffffff;
          }
        }
        if (*(char *)((int)pvStack_10 + 0x20b7) == '\0') {
          cVar17 = *(char *)((int)pvStack_10 + 0x1a5f);
          if ((((cVar17 == '\f') || (cVar17 == '\x04')) || (cVar17 == '\x05')) || (cVar17 == '\x13')
             ) {
            if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
              FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),
                           0xfffffffe,*(uint *)(DAT_0081176c + 0x578),
                           *(uint *)(DAT_0081176c + 0x57c));
            }
            if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
              FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),
                           0xfffffffe,*(uint *)(DAT_0081176c + 0x609),
                           *(uint *)(DAT_0081176c + 0x60d));
            }
            FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
            FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
          }
          else {
            if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
              FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
            }
            if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
              FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
            }
            FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
            FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
          }
        }
        else {
          FUN_006b2330((uint)DAT_008075a8,&uStack_8,0x32,0x403b61,400,0x62,
                       *(int *)((int)pvStack_10 + 0x1a5b) + 0x140);
          FUN_006b3640(DAT_008075a8,uStack_8,0xffffffff,200,0x1f1);
          if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
            FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe
                         ,*(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
          }
          if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
            FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe
                         ,*(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
          }
          puVar10 = (undefined1 *)FUN_0072e530(0x33);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = (undefined1 *)0x0;
          }
          else {
            puVar10[2] = 1;
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 3) = 0xffffffff;
            puVar10[1] = 2;
            *(undefined4 *)(puVar10 + 7) = 0;
            *(undefined4 *)(puVar10 + 0xb) = 0;
            *(undefined4 *)(puVar10 + 0xf) = 0;
            *(undefined4 *)(puVar10 + 0x1b) = 1;
            *(undefined4 *)(puVar10 + 0x13) = 1;
            *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
            *(undefined4 *)(puVar10 + 0x27) = 0;
            *(undefined4 *)(puVar10 + 0x23) = 0;
            *(undefined4 *)(puVar10 + 0x2f) = 1;
            *(undefined4 *)(puVar10 + 0x2b) = 1;
          }
          *(undefined1 **)((int)pvStack_10 + 0x20c0) = puVar10;
          if (puVar10 != (undefined1 *)0x0) {
            uVar12 = 0;
            cVar17 = '\x01';
            uVar11 = 0x10;
            iVar16 = 1;
            iVar4 = FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
            uVar11 = thunk_FUN_005aacb0(1,200,0x1f1,iVar4,iVar16,uVar11,cVar17,uVar12);
            if (uVar11 != 0) {
              iVar4 = *(int *)((int)pvStack_10 + 0x20c0);
              *(undefined1 *)(iVar4 + 2) = 1;
              *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
              uVar11 = *(uint *)(*(int *)((int)pvStack_10 + 0x20c0) + 3);
              if (-1 < (int)uVar11) {
                FUN_006b3af0(DAT_008075a8,uVar11);
              }
              if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
              }
              if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
              }
              FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
              FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
            }
          }
          if (uStack_8 != 0xffffffff) {
            FUN_006b3bb0(DAT_008075a8,uStack_8);
            uStack_8 = 0xffffffff;
          }
        }
        iVar4 = 1;
        puVar9 = (undefined4 *)(*(int *)((int)pvStack_10 + 0x5d) + 0x28);
        uVar11 = FUN_006b4fe0(*(int *)((int)pvStack_10 + 0x5d));
        iVar4 = FUN_006b50c0(0x172,0x18,(uint)*(ushort *)(*(int *)((int)pvStack_10 + 0x5d) + 0xe),
                             uVar11,puVar9,iVar4);
        *(int *)((int)pvStack_10 + 0x1c8b) = iVar4;
        uVar11 = *(uint *)(iVar4 + 0x14);
        if (uVar11 == 0) {
          uVar11 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar4 + 8);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0xff;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_006b5b10(*(int *)((int)pvStack_10 + 0x1c8b),0,0,1,
                     *(int *)(*(int *)((int)pvStack_10 + 0x1c8b) + 4) + -1,1,
                     (byte)*(undefined4 *)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x140),0xd);
        uVar11 = *(uint *)((int)pvStack_10 + 0x1c8b);
        puVar8 = (uint *)((int)pvStack_10 + 0x1c87);
        FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x404acf,*(uint *)(uVar11 + 4),
                     *(uint *)(uVar11 + 8),uVar11);
        FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0x112,0x1d3);
        FUN_006b3af0(DAT_008075a8,*puVar8);
        switch(uStack_c) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)((int)pvStack_10 + 0x5d),10,2);
        }
        pcVar13 = *(char **)((int)pvStack_10 + 0x20b8);
        if (((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) && (-1 < (int)*(uint *)(pcVar13 + 3)))
        {
          FUN_006b3430(DAT_008075a8,*(uint *)(pcVar13 + 3));
        }
        pcVar13 = *(char **)((int)pvStack_10 + 0x20bc);
        if (((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) && (-1 < (int)*(uint *)(pcVar13 + 3)))
        {
          FUN_006b3430(DAT_008075a8,*(uint *)(pcVar13 + 3));
        }
        pcVar13 = *(char **)((int)pvStack_10 + 0x20c0);
        if (((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) && (-1 < (int)*(uint *)(pcVar13 + 3)))
        {
          FUN_006b3430(DAT_008075a8,*(uint *)(pcVar13 + 3));
        }
        this = DAT_00802a30;
        if (DAT_00802a30 != (void *)0x0) {
          uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
          uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
          *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
          *(undefined2 *)((int)this + 0x494) = 0xffff;
          thunk_FUN_0054bf40(0,uVar2,uVar6);
          thunk_FUN_00543c90(this,*(int *)((int)this + 0xc5),*(int *)((int)this + 0xc9));
          *(undefined1 *)((int)this + 0xd2) = 0;
          *(undefined4 *)((int)this + 0x4df) = 0xffffffff;
        }
        puVar9 = &uStack_20c;
        for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        uVar1 = *(undefined1 *)((int)pvStack_10 + 0x1a5f);
        *(undefined2 *)puVar9 = 0;
        *(undefined1 *)((int)puVar9 + 2) = 0;
        uStack_13c = *(undefined4 *)((int)pvStack_10 + 8);
        *(undefined1 *)((int)pvStack_10 + 0x65) = 3;
        uStack_149 = 0x2340;
        uStack_138 = 2;
        uStack_134 = 0x6943;
        uStack_122 = 0x24bc;
        uStack_111 = 2;
        switch(uVar1) {
        case 4:
        case 5:
        case 0xc:
          uStack_10d = 0x694d;
          break;
        default:
          uStack_10d = 0x6943;
          uStack_109 = 1;
          break;
        case 0x13:
          uStack_10d = 0x6951;
        }
      }
      switch(uVar1) {
      case 1:
      case 2:
        uStack_20c = 0x2348;
        uStack_1fb = 2;
        uStack_1f7 = 0x694b;
        uStack_1e5 = 0x2343;
        uStack_1d4 = 2;
        uStack_1d0 = 0x694a;
        uStack_1be = 0x2349;
        uStack_1ad = 2;
        uStack_1a9 = 0x694c;
        uStack_1ff = uStack_13c;
        uStack_1d8 = uStack_13c;
        uStack_1b1 = uStack_13c;
        break;
      case 3:
        *(undefined1 *)((int)pvStack_10 + 0x20b5) = 0;
        uStack_1e5 = 0x2343;
        uStack_1d4 = 2;
        uStack_1d0 = 0x6956;
        uStack_1d8 = uStack_13c;
        break;
      case 4:
      case 5:
        uStack_1e5 = 0x2357;
        uStack_1d4 = 2;
        uStack_1d0 = 0x694e;
        uStack_1be = 0x2349;
        uStack_1ad = 2;
        uStack_1a9 = 0x694c;
        uStack_1d8 = uStack_13c;
        uStack_1b1 = uStack_13c;
        break;
      case 9:
      case 10:
      case 0xb:
        uStack_1e5 = 0x233e;
        uStack_1d4 = 2;
        uStack_1d0 = 0x6949;
        uStack_1d8 = uStack_13c;
        break;
      case 0x13:
        if (DAT_00803400 != 0xc) {
          uStack_1e5 = 0x2357;
          uStack_1d4 = 2;
          uStack_1d0 = 0x694e;
          uStack_1d8 = uStack_13c;
          if ((3 < DAT_00803400) && (DAT_00803400 < 6)) {
            uStack_1be = 0x2349;
            uStack_1ad = 2;
            uStack_1a9 = 0x694c;
            uStack_1b1 = uStack_13c;
          }
          break;
        }
      case 0xc:
        uStack_1e5 = 0x233e;
        uStack_1d4 = 2;
        uStack_1d0 = 0x694e;
        uStack_1d8 = uStack_13c;
      }
      iVar4 = *(int *)((int)pvStack_10 + 0x1a5b);
      uStack_115 = uStack_13c;
      if (*(int *)(iVar4 + 0x2e6) != 0) {
        puVar9 = auStack_26c;
        for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0xffff;
        thunk_FUN_005b87d0(*(void **)(iVar4 + 0x2e6),0,(int)&uStack_20c,0,0);
        thunk_FUN_005b9010(*(void **)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6),(int)auStack_26c);
      }
      if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
        FUN_006b6160(acStack_46c,DAT_00811764 + 0x18);
        uStack_44c = 0;
        CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,acStack_46c);
      }
      thunk_FUN_00568bc0(&DAT_00807658,0);
      if ((DAT_00807300._1_1_ & 8) != 0) {
        thunk_FUN_0056a130(&DAT_00807658,0x14,'\x02',0,(uint *)0x0);
      }
      thunk_FUN_005b6730(pvStack_10,0xb,'\0',-1);
      DAT_00858df8 = puStack_250;
      return;
    }
  }
}

