
void thunk_FUN_00502360(void)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  LPSTR pCVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  short sVar13;
  int iVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  int iVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined4 auStack_bb0 [68];
  undefined4 auStack_aa0 [502];
  undefined4 auStack_2c8 [112];
  undefined4 auStack_108 [22];
  undefined4 uStack_b0;
  undefined4 auStack_ac [16];
  undefined4 auStack_6c [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_24;
  undefined4 *puStack_20;
  void *pvStack_1c;
  int iStack_18;
  char *pcStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  puVar9 = auStack_108;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = auStack_2c8;
  for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uStack_b0 = DAT_00858df8;
  DAT_00858df8 = &uStack_b0;
  iVar5 = __setjmp3(auStack_ac,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_b0;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x1a0,0,iVar5,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar5,0,0x7c2524,0x1a0);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_0054a8d0(DAT_00802a30);
  if (*(uint *)((int)pvStack_1c + 0x2fe) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_1c + 0xc),*(uint *)((int)pvStack_1c + 0x2fe));
  }
  *(undefined4 *)((int)pvStack_1c + 0x2fe) = 0;
  puVar8 = (uint *)((int)pvStack_1c + 0x960);
  iVar5 = 4;
  do {
    if (*puVar8 != 0) {
      FUN_006e56b0(*(void **)((int)pvStack_1c + 0xc),*puVar8);
      *puVar8 = 0;
    }
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(uint *)((int)pvStack_1c + 0x970) != 0) {
    FUN_006e56b0(*(void **)((int)pvStack_1c + 0xc),*(uint *)((int)pvStack_1c + 0x970));
  }
  cVar1 = *(char *)((int)pvStack_1c + 0xb9e);
  *(undefined4 *)((int)pvStack_1c + 0x970) = 0;
  if (((cVar1 == '\0') || (cVar1 == '\x04')) || (cVar1 == '\x03')) {
    iVar5 = *(int *)((int)pvStack_1c + 0x9c0);
    if (iVar5 == 0) goto LAB_00502622;
    *(undefined4 *)((int)pvStack_1c + 0x28) = 0x20;
    *(undefined4 *)((int)pvStack_1c + 0x2c) = 0;
  }
  else {
    puStack_c = (undefined4 *)((uint)puStack_c & 0xffffff00);
    puVar9 = auStack_6c;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    iStack_8 = (int)pvStack_1c + 0x780;
    pcStack_14 = (char *)((int)pvStack_1c + 0xba2);
    iVar5 = -0xba3 - (int)pvStack_1c;
    iStack_18 = iVar5;
    do {
      if (*pcStack_14 == '\0') goto LAB_0050254c;
      iVar10 = 2;
      iVar7 = 5;
      switch(pcStack_14 + iVar5) {
      case (char *)0x0:
        iVar10 = 0x3f;
        break;
      case (char *)0x1:
        iVar10 = 0x7c;
        break;
      case (char *)0x2:
        goto switchD_0050248c_caseD_2;
      case (char *)0x3:
        iVar10 = 0x7c;
        goto switchD_0050248c_caseD_2;
      case (char *)0x4:
        iVar10 = 0x3f;
switchD_0050248c_caseD_2:
        iVar7 = 0x29;
      }
      thunk_FUN_004f17d0(pvStack_1c,1,(byte)puStack_c);
      if (*(char *)((int)pvStack_1c + 0xba0) == '\0') {
        uStack_10 = 0;
      }
      else {
        uStack_10 = (uint)(byte)pcStack_14[6];
      }
      pcVar19 = (char *)0x0;
      uVar16 = 0;
      uVar15 = 1;
      iVar14 = 0;
      iVar5 = iStack_8;
      pcVar3 = thunk_FUN_00529590(*pcStack_14,*(int *)((int)pvStack_1c + 0xb99));
      pCVar4 = thunk_FUN_00571240(pcVar3,iVar14);
      thunk_FUN_004f2e40(auStack_bb0 + iStack_24 * 0x5f,3,uStack_10,iVar10,iVar7,1,pCVar4,uVar15,
                         uVar16,iVar5,pcVar19);
      iVar5 = iStack_24 * 0x5f;
      iStack_24 = iStack_24 + 1;
      auStack_aa0[iVar5] = 1;
      iVar5 = iStack_18;
LAB_0050254c:
      bVar6 = (char)puStack_c + 1;
      iStack_8 = iStack_8 + 0x27;
      pcStack_14 = pcStack_14 + 1;
      puStack_c = (undefined4 *)CONCAT31(puStack_c._1_3_,bVar6);
    } while (bVar6 < 6);
    uStack_5c = *(undefined4 *)((int)pvStack_1c + 8);
    puStack_20 = auStack_bb0;
    auStack_6c[0] = 1;
    auStack_6c[1] = 0xffffffff;
    uStack_58 = 2;
    uStack_54 = 0xb1ff;
    uStack_38 = 2;
    uStack_34 = 0xb200;
    uStack_3c = uStack_5c;
    (**(code **)(**(int **)((int)pvStack_1c + 0xc) + 8))(9,(int)pvStack_1c + 0x2fe,0,auStack_6c,0);
    thunk_FUN_004f1610(pvStack_1c,'\x01');
    iVar5 = *(int *)((int)pvStack_1c + 0x9c0);
    if (iVar5 == 0) goto LAB_00502622;
    *(undefined4 *)((int)pvStack_1c + 0x28) = 0x20;
    if (*(char *)((int)pvStack_1c + 0xba0) == '\0') {
      *(undefined4 *)((int)pvStack_1c + 0x2c) = 0;
    }
    else {
      *(uint *)((int)pvStack_1c + 0x2c) = (uint)*(byte *)((int)pvStack_1c + 0xbae);
    }
  }
  FUN_006e6080(pvStack_1c,2,iVar5,(undefined4 *)((int)pvStack_1c + 0x18));
LAB_00502622:
  if (((((*(char *)((int)pvStack_1c + 0xb9e) == '\x01') ||
        (*(char *)((int)pvStack_1c + 0xb9e) == '\x03')) &&
       ((iVar5 = *(int *)((int)pvStack_1c + 0xb99), iVar5 != 9 &&
        ((iVar5 != 0x15 && (iVar5 != 0xbd)))))) && (iVar5 != 0xa7)) &&
     ((iVar5 != 0xa6 && (iVar5 != 0xaf)))) {
    uVar20 = 0;
    uVar18 = 0;
    iVar7 = 0;
    pcVar3 = (char *)0x0;
    iVar5 = 0x3b04;
    uVar15 = 0;
    sVar13 = 2;
    uVar12 = 0xb118;
    uVar11 = 0xb117;
    pCVar4 = thunk_FUN_00571240(s_BUT_SHOWUPD_007c23a4,0);
    uVar11 = thunk_FUN_004f3130(3,0,(uint)(*(char *)((int)pvStack_1c + 0xba0) != '\0'),0x4a,100,1,
                                (int)pCVar4,uVar11,uVar12,sVar13,uVar15,iVar5,pcVar3,iVar7,uVar18,
                                uVar20);
    *(undefined4 *)((int)pvStack_1c + 0x970) = uVar11;
  }
  if (*(char *)((int)pvStack_1c + 0xb9e) == '\x02') {
    uVar20 = 0;
    uVar18 = 0;
    iVar7 = 0;
    pcVar3 = (char *)0x0;
    iVar5 = 0x3b05;
    uVar15 = 0;
    sVar13 = 2;
    uVar12 = 0xb11a;
    uVar11 = 0xb119;
    pCVar4 = thunk_FUN_00571240(s_BUT_SHOWFRM_007c2394,0);
    uVar11 = thunk_FUN_004f3130(3,0,(uint)(*(char *)((int)pvStack_1c + 0xba0) != '\0'),0x4a,100,1,
                                (int)pCVar4,uVar11,uVar12,sVar13,uVar15,iVar5,pcVar3,iVar7,uVar18,
                                uVar20);
    *(undefined4 *)((int)pvStack_1c + 0x970) = uVar11;
  }
  if ((((*(char *)((int)pvStack_1c + 0xb9e) == '\x01') && (*(int *)((int)pvStack_1c + 0xb99) != 9))
      && (*(int *)((int)pvStack_1c + 0xb99) != 0x15)) ||
     (((*(char *)((int)pvStack_1c + 0xb9e) == '\x02' && (*(int *)((int)pvStack_1c + 0xb99) != 9)) &&
      (*(int *)((int)pvStack_1c + 0xb99) != 0x15)))) {
    puStack_c = (undefined4 *)((int)pvStack_1c + 0x960);
    bVar6 = 0;
    iVar5 = 0xb230;
    iStack_8 = 0xf;
    do {
      if (*(char *)((int)pvStack_1c + 0xba0) == '\0') {
        uStack_10 = 0;
      }
      else {
        uStack_10 = (uint)*(byte *)((int)pvStack_1c + iVar5 + -0xa661);
      }
      uVar12 = 0;
      uVar11 = 0;
      iVar17 = 0;
      iVar14 = 0x4e36 - (uint)(bVar6 != 0);
      pcVar3 = (char *)0x0;
      uVar15 = 0;
      sVar13 = 2;
      iVar7 = iVar5 + -0x10;
      iVar10 = iVar5;
      pCVar4 = thunk_FUN_00571240(s_BUT_BEHREPAIR0_007c2350,0);
      uVar11 = thunk_FUN_004f3130(3,0,uStack_10,iStack_8,0x80,1,(int)pCVar4,iVar7,iVar10,sVar13,
                                  uVar15,iVar14,pcVar3,iVar17,uVar11,uVar12);
      bVar6 = bVar6 + 1;
      *puStack_c = uVar11;
      puStack_c = puStack_c + 1;
      iVar5 = iVar5 + 1;
      iStack_8 = iStack_8 + 0x35;
    } while (bVar6 < 3);
  }
  DAT_00858df8 = (undefined4 *)uStack_b0;
  return;
}

