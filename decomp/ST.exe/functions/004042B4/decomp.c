
void thunk_FUN_005ae050(uint param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  ushort *puVar5;
  uint *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  short *psVar18;
  undefined4 *puStack_100;
  undefined4 auStack_fc [16];
  undefined4 *puStack_bc;
  undefined4 auStack_b8 [16];
  undefined4 uStack_78;
  undefined4 auStack_74 [16];
  short asStack_34 [14];
  char *pcStack_18;
  undefined4 *puStack_14;
  void *pvStack_10;
  int iStack_c;
  undefined1 *puStack_8;
  
  uStack_78 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&uStack_78;
  iVar4 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 **)uStack_78;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x2c0,0,iVar4,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar4,0,0x7cc728,0x2c0);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar5 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar5);
  iVar4 = *(int *)(DAT_0081176c + 0x544);
  FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
  if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
  }
  puVar6 = FUN_006b54f0((uint *)0x0,10,10);
  pvVar14 = pvStack_10;
  *(uint **)(DAT_0081176c + 0x548) = puVar6;
  uVar11 = *(uint *)(*(int *)((int)pvStack_10 + 0x1c9f) + 8);
  if ((0 < (int)(*(int *)(*(int *)((int)pvStack_10 + 0x1c97) + 8) + uVar11)) && (uVar11 <= param_1))
  {
    uVar11 = 0xffffffff;
    pcStack_18 = (char *)((int)pvStack_10 + 0x1faf);
    pcVar7 = (char *)((int)pvStack_10 + 0x1da7);
    do {
      pcVar15 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar15;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcVar7 = pcVar15 + -uVar11;
    pcVar15 = pcStack_18;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar15 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar15 = pcVar15 + 1;
    }
    bVar2 = *(byte *)((int)pvStack_10 + 0x1a5f);
    if ((8 < bVar2) && ((bVar2 < 0xd || ((bVar2 == 0x13 && (DAT_00803400 == '\f')))))) {
      uVar11 = 0xffffffff;
      pcVar7 = PTR_DAT_0079c06c;
      do {
        pcVar15 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar15 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      iVar4 = -1;
      pcVar7 = pcStack_18;
      do {
        pcVar17 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar17 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar17;
      } while (cVar1 != '\0');
      pcVar7 = pcVar15 + -uVar11;
      pcVar15 = pcVar17 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar15 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
    iVar4 = param_1 - *(int *)(*(int *)((int)pvStack_10 + 0x1c9f) + 8);
    if (iVar4 < *(int *)(*(int *)((int)pvStack_10 + 0x1c97) + 8)) {
      pcVar7 = *(char **)(*(int *)(*(int *)((int)pvStack_10 + 0x1c97) + 0x14) + iVar4 * 4);
    }
    else {
      pcVar7 = (char *)0x0;
    }
    uVar11 = 0xffffffff;
    do {
      pcVar15 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar15;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar7 = pcStack_18;
    do {
      pcVar17 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar17 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar17;
    } while (cVar1 != '\0');
    pcVar7 = pcVar15 + -uVar11;
    pcVar15 = pcVar17 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar15 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar15 = pcVar15 + 1;
    }
    puStack_bc = DAT_00858df8;
    DAT_00858df8 = &puStack_bc;
    iVar4 = __setjmp3(auStack_b8,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      puStack_14 = FUN_006f0ec0(0x345,(byte *)((int)pvStack_10 + 0x1faf),0,0,0);
    }
    puVar8 = puStack_14;
    pvVar14 = pvStack_10;
    DAT_00858df8 = (undefined4 **)puStack_bc;
    if (puStack_14 != (undefined4 *)0x0) {
      thunk_FUN_005dc050((int)puStack_14,*(char *)((int)pvStack_10 + 0x1a5f));
      FUN_006f1170(puVar8);
    }
    goto LAB_005ae602;
  }
  uVar11 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((*(char *)((int)pvStack_10 + 0x1a5f) == '\x03') &&
     (0 < *(int *)(*(int *)((int)pvStack_10 + 0x1c97) + 8) +
          *(int *)(*(int *)((int)pvStack_10 + 0x1c9f) + 8))) {
    pcVar7 = (char *)((int)pvStack_10 + 0x1da7);
    do {
      pcVar15 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar15;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcStack_18 = (char *)((int)pvStack_10 + 0x1faf);
    pcVar7 = pcVar15 + -uVar11;
    pcVar15 = pcStack_18;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar15 = pcVar15 + 4;
    }
    iStack_c = 1;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar15 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar15 = pcVar15 + 1;
    }
    FUN_006b8280(pcStack_18,pcStack_18);
    pcVar7 = pcStack_18;
    if ((int)param_1 < *(int *)(*(int *)((int)pvVar14 + 0x1c9f) + 8)) {
      pcVar15 = *(char **)(*(int *)(*(int *)((int)pvVar14 + 0x1c9f) + 0x14) + param_1 * 4);
    }
    else {
      pcVar15 = (char *)0x0;
    }
    uVar11 = 0xffffffff;
    do {
      pcVar17 = pcVar15;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar17 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar15 = pcStack_18;
    do {
      pcVar16 = pcVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar1 != '\0');
    pcVar15 = pcVar17 + -uVar11;
    pcVar17 = pcVar16 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar17 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar17 = pcVar17 + 1;
    }
    FUN_006b8280(pcStack_18,pcStack_18);
    uVar11 = 0xffffffff;
    pcVar15 = PTR_s_ADDON_0079c060;
    do {
      pcVar17 = pcVar15;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar17 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    do {
      pcVar15 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar15;
    } while (cVar1 != '\0');
    pcVar7 = pcVar17 + -uVar11;
    pcVar15 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar15 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar15 = pcVar15 + 1;
    }
    puStack_100 = DAT_00858df8;
    DAT_00858df8 = &puStack_100;
    iVar4 = __setjmp3(auStack_fc,0,unaff_EDI,unaff_ESI);
    pvVar14 = pvStack_10;
    if (iVar4 == 0) {
      puVar8 = FUN_006f0ec0(0x345,(byte *)((int)pvStack_10 + 0x1faf),0,0,0);
      puStack_14 = puVar8;
      if (DAT_0080c4cb != (uint *)0x0) {
        FUN_006b5570((byte *)DAT_0080c4cb);
      }
      DAT_0080c4cb = FUN_0071aa10((int)puVar8,PTR_s_OBJECTIVES_0079c074,0);
      puVar8 = (undefined4 *)&DAT_0080ed16;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puStack_8 = &DAT_0080ed16;
      puVar5 = FUN_006f1ce0(0xc,PTR_s_MISSION_0079c064,(int *)&puStack_8,0);
      puVar8 = puStack_14;
      if (puVar5 == (ushort *)0x0) {
        iStack_c = 0;
      }
      iVar4 = iStack_c;
      puStack_8 = &DAT_0080874e;
      FUN_006f1ce0(0xc,PTR_DAT_0079c068,(int *)&puStack_8,0);
      FUN_006f1170(puVar8);
      if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
      }
      if (DAT_0080c4cb == (uint *)0x0) {
        DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
        puVar6 = FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)(DAT_0081176c + 0x548) = puVar6;
      }
      else {
        iVar10 = *(int *)(DAT_0081176c + 0x34);
        *(undefined4 *)(iVar10 + 0x7e) = 1;
        puVar9 = (undefined2 *)(iVar10 + 0x9e);
        *puVar9 = 0;
        *(undefined1 *)puVar9 = DAT_007cc854;
        puVar6 = FUN_007126e0((int)DAT_0080c4cb,(uint *)s________________007c21d8,
                              (uint *)&DAT_007c21ec,
                              *(int *)(*(int *)(DAT_0081176c + 0x544) + 4) + -0x14,0,0xffffffff,
                              (char *)0x0,1);
        *(uint **)(DAT_0081176c + 0x548) = puVar6;
        if (*(int *)(DAT_0081176c + 0x548) == 0) {
          puVar6 = FUN_006b54f0((uint *)0x0,10,10);
          *(uint **)(DAT_0081176c + 0x548) = puVar6;
          DAT_00858df8 = (undefined4 **)puStack_100;
          goto LAB_005ae53a;
        }
      }
      DAT_00858df8 = (undefined4 **)puStack_100;
    }
    else {
      iVar4 = 0;
      DAT_00858df8 = (undefined4 **)puStack_100;
      iStack_c = 0;
    }
  }
  else {
    iVar4 = 0;
    iStack_c = 0;
  }
LAB_005ae53a:
  *(undefined4 *)((int)pvVar14 + 0x2d) = 0x28;
  *(undefined2 *)((int)pvVar14 + 0x31) = 1;
  puVar8 = (undefined4 *)((int)pvVar14 + 0x1d);
  *(undefined2 *)((int)pvVar14 + 0x33) = *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
  FUN_006e6080(pvVar14,2,*(undefined4 *)(DAT_0081176c + 0x389),puVar8);
  *(undefined4 *)((int)pvVar14 + 0x2d) = 0x22;
  *(undefined2 *)((int)pvVar14 + 0x31) = 0;
  *(undefined2 *)((int)pvVar14 + 0x33) = 0;
  FUN_006e6080(pvVar14,2,*(undefined4 *)(DAT_0081176c + 0x389),puVar8);
  *(undefined4 *)((int)pvVar14 + 0x2d) = 0x20;
  *(uint *)((int)pvVar14 + 0x31) = (uint)(iVar4 != 0);
  FUN_006e6080(pvVar14,2,*(undefined4 *)(DAT_0081176c + 0x389),puVar8);
  iVar10 = *(int *)((int)pvVar14 + 0x1a5b);
  if (*(int *)(iVar10 + 0x2e6) != 0) {
    psVar18 = asStack_34;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      psVar18[0] = 0;
      psVar18[1] = 0;
      psVar18 = psVar18 + 2;
    }
    *psVar18 = 0;
    asStack_34[0] = (-(ushort)(iVar4 != 0) & 2) - 1;
    asStack_34[1] = asStack_34[0];
    thunk_FUN_005b9010(*(void **)(iVar10 + 0x2e6),(int)asStack_34);
  }
LAB_005ae602:
  if ((*(char *)((int)pvVar14 + 0x1a5f) != '\x03') && (-1 < (int)*(uint *)(DAT_0081176c + 0x2ec))) {
    FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
  }
  if (-1 < (int)*(uint *)(DAT_0081176c + 0x540)) {
    FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
  }
  DAT_00858df8 = (undefined4 **)uStack_78;
  return;
}

