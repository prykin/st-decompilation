
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_005c7800(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  int *extraout_ECX;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  void *unaff_EDI;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined4 auStackY_5a80 [5654];
  byte abStackY_228 [336];
  undefined4 auStackY_d8 [17];
  undefined4 uStackY_94;
  undefined4 *puStackY_8c;
  undefined4 auStackY_88 [15];
  undefined4 uStackY_4c;
  undefined *puVar14;
  undefined4 uVar15;
  int *piVar16;
  
  FUN_0072da40();
  puStackY_8c = DAT_00858df8;
  DAT_00858df8 = &puStackY_8c;
  piVar16 = extraout_ECX;
  iVar3 = __setjmp3(auStackY_88,0,unaff_EDI,extraout_ECX);
  if (iVar3 != 0) {
    DAT_00858df8 = puStackY_8c;
    puVar5 = (undefined4 *)&stack0xffffffc8;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    (**(code **)*piVar16)();
    return;
  }
  (**(code **)(*piVar16 + 0x24))();
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  thunk_FUN_005c4e20('\0');
  FUN_006bd740(DAT_008075a8);
  FUN_006c4630(DAT_0080759c,*(int **)(DAT_0080759c + 0x44),(undefined4 *)&stack0xffffffb8);
  DAT_00811758 = FUN_006c4880(DAT_0080759c,0,0,DAT_00806730,DAT_00806734,DAT_00806738);
  FUN_006c44e0(DAT_0080759c,(undefined4 *)&stack0xffffffb8);
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  FUN_006b4640(DAT_0080759c,0,0,DAT_00811758,(uint *)0x0);
  FUN_006bb370(DAT_0080759c,0,0);
  if (*(undefined4 **)((int)piVar16 + 7999) != (undefined4 *)0x0) {
    FUN_006f1170(*(undefined4 **)((int)piVar16 + 7999));
  }
  if (DAT_0080877e == '\0') goto LAB_005c7ae0;
  if ((DAT_008067a0 != '\0') && (DAT_00811764 != (undefined4 *)0x0)) {
    FUN_006b6160((char *)((int)piVar16 + 0x1a5f),(int)(DAT_00811764 + 6));
    *(undefined1 *)((int)piVar16 + 0x1a7f) = 0;
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,(char *)((int)piVar16 + 0x1a5f));
  }
  puVar5 = &DAT_00853de0;
  for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  DAT_00853de0 = *(undefined4 *)((int)piVar16 + 0x1f53);
  _DAT_00853ff4 = (uint)*(byte *)(piVar16 + 0x7d7);
  cVar2 = *(char *)((int)piVar16 + 0x1f57);
  if (cVar2 == '\0') {
    uVar4 = FUN_0072e6c0();
    _DAT_00853fec = (uVar4 & 0xf) * 2 + 0x28;
    _DAT_00853ff0 = _DAT_00853fec;
  }
  else {
    if (cVar2 == '\x01') {
      iVar8 = (-(uint)(3 < *(byte *)(piVar16 + 0x7d7)) & 4) + 0x21;
      uVar4 = FUN_0072e6c0();
      iVar3 = 0x2e;
    }
    else {
      if (cVar2 != '\x02') goto LAB_005c7a2c;
      if (*(byte *)(piVar16 + 0x7d7) < 4) {
        iVar8 = 0x2b;
      }
      else {
        iVar8 = (-(uint)(5 < *(byte *)(piVar16 + 0x7d7)) & 5) + 0x30;
      }
      uVar4 = FUN_0072e6c0();
      iVar3 = 0x41;
    }
    _DAT_00853fec = (uVar4 % (uint)(iVar3 - iVar8) + iVar8) * 2;
    _DAT_00853ff0 = _DAT_00853fec;
  }
LAB_005c7a2c:
  uVar4 = FUN_0072e6c0();
  _DAT_00854001 = (uVar4 & 1) + 4;
  cVar2 = *(char *)((int)piVar16 + 0x1f5d);
  if (cVar2 == '\0') {
    uVar4 = FUN_0072e6c0();
    _DAT_00854005 = uVar4 % 0xb + 0x1e;
  }
  else if (cVar2 == '\x01') {
    uVar4 = FUN_0072e6c0();
    _DAT_00854005 = uVar4 % 0xb + 0x28;
  }
  else if (cVar2 == '\x02') {
    uVar4 = FUN_0072e6c0();
    _DAT_00854005 = uVar4 % 0xb + 0x32;
  }
  cVar2 = *(char *)((int)piVar16 + 0x1f5e);
  if (cVar2 == '\0') {
    uVar4 = FUN_0072e6c0();
    _DAT_00854009 = (uVar4 & 1) + 2;
  }
  else if (cVar2 == '\x01') {
    uVar4 = FUN_0072e6c0();
    _DAT_00854009 = (uVar4 & 1) + 4;
  }
  else if (cVar2 == '\x02') {
    uVar4 = FUN_0072e6c0();
    _DAT_00854009 = (uVar4 & 1) + 6;
  }
  DAT_0085400d = *(undefined1 *)((int)piVar16 + 0x1f5f);
  DAT_00853ffc = CONCAT31(DAT_00853ffc._1_3_,(char)piVar16[0x7d6]);
LAB_005c7ae0:
  wsprintfA(&DAT_00853de4,s__s_s_s_007c6edc);
  iVar3 = piVar16[0x7df];
  if ((DAT_00853ffc & 0xff) < *(uint *)(iVar3 + 0xc)) {
    pcVar10 = (char *)(*(int *)(iVar3 + 8) * (DAT_00853ffc & 0xff) + *(int *)(iVar3 + 0x1c));
  }
  else {
    pcVar10 = (char *)0x0;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar11 = pcVar10;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar10 = pcVar11 + -uVar4;
  pcVar11 = (char *)&DAT_00853ee8;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  _DAT_0085400e = &LAB_00404c64;
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc);
  DAT_00853ff8 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  DAT_00853ffc._1_3_ = SUB43(DAT_00853ff8,0);
  uRam00854000 = (undefined1)((uint)DAT_00853ff8 >> 0x18);
  if (DAT_00853ff8 != (undefined4 *)0x0) {
    thunk_FUN_0069ffb0(auStackY_5a80);
    DAT_00811754 = timeGetTime();
    cVar2 = *(char *)((int)piVar16 + 0x1e26);
    if ((((cVar2 != '\x06') && (cVar2 != '\x01')) && (cVar2 != '\x02')) && (DAT_0080877e != '\0')) {
      FUN_00715360(DAT_00811764,0,'\x1e',(char *)&DAT_00853de0,0x232,1,0xffffffff);
      uStackY_4c = 0x5c7c09;
      FUN_00715360(DAT_00811764,0,' ',(char *)((int)piVar16 + 0x1f53),0xd,1,0xffffffff);
    }
    thunk_FUN_006952b0(auStackY_5a80,(byte *)&DAT_00853de0,(byte *)((int)piVar16 + 0x1f53));
    thunk_FUN_006a00b0((int)auStackY_5a80);
    FUN_006f1170(DAT_00853ff8);
    thunk_FUN_006a0070((int)auStackY_5a80);
  }
  puVar5 = FUN_006f0ec0(0x345,&DAT_00853de4,0,0,0);
  *(undefined4 **)((int)piVar16 + 7999) = puVar5;
  DAT_008087b6 = 0;
  if (*(int *)((int)piVar16 + 7999) != 0) {
    if (*(int *)(DAT_0081176c + 0x2f4) != 0) {
      FUN_006ab060((undefined4 *)(DAT_0081176c + 0x2f4));
    }
    puVar6 = FUN_0070a5a0(*(undefined4 *)((int)piVar16 + 7999),0xc,PTR_s_SMALL_MAP_0079c114,2,0);
    *(ushort **)(DAT_0081176c + 0x2f4) = puVar6;
    if (*(int *)(DAT_0081176c + 0x2f4) != 0) {
      FUN_006c7f90(*(int *)(DAT_0081176c + 0x2f4),(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),0)
      ;
    }
    uStackY_94 = DAT_0080995c;
    puVar5 = &DAT_00809960;
    puVar12 = auStackY_d8;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar12 = puVar12 + 1;
    }
    FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079c110,(int *)&stack0xfffffff8,0);
    if (DAT_0080877e == '\0') {
      *(undefined4 *)((int)piVar16 + 0x2121) = 0xffffffff;
      DAT_00808aab = 0xffffffff;
    }
    else {
      *(undefined4 *)((int)piVar16 + 0x2121) = 0;
      DAT_00808aab = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    DAT_00809958 = DAT_008087be;
    DAT_0080995c = uStackY_94;
    puVar5 = auStackY_d8;
    puVar12 = &DAT_00809960;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar12 = puVar12 + 1;
    }
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(*(int *)((int)piVar16 + 7999),PTR_s_DESCRIPTION_0079c108,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = FUN_0071aa10(*(int *)((int)piVar16 + 7999),PTR_s_OBJECTIVES_0079c10c,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
    }
    puVar14 = PTR_s_TITLE_MISSION_0079c104;
    puVar5 = &DAT_0080c3c3;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar6 = FUN_006f1ce0(0xc,puVar14,(int *)&stack0xfffffff8,0);
    if ((puVar6 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      FUN_0072e730(&DAT_00853de4,(byte *)0x0,(byte *)0x0,abStackY_228,(byte *)0x0);
      uVar4 = 0xffffffff;
      pbVar9 = abStackY_228;
      do {
        pbVar13 = pbVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pbVar13 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar13;
      } while (bVar1 != 0);
      uVar4 = ~uVar4;
      pbVar9 = pbVar13 + -uVar4;
      pbVar13 = (byte *)&DAT_0080c3c3;
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar13 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar13 + 1;
      }
    }
    *(undefined4 *)((int)piVar16 + 0x1f47) = 1;
    if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (DAT_00811764 != (undefined4 *)0x0)) {
      FUN_006b6160((char *)((int)piVar16 + 0x1a5f),(int)(DAT_00811764 + 6));
      *(undefined1 *)((int)piVar16 + 0x1a7f) = 1;
      *(undefined1 *)(piVar16 + 0x6a0) = DAT_008087c4._2_1_;
      *(char *)((int)piVar16 + 0x1a81) = (char)(DAT_008087c2 >> 1);
      puVar14 = &DAT_007cc584;
      uVar15 = DAT_0080995c;
      wsprintfA(&stack0xffffffe8,&DAT_007cc584);
      *(undefined **)((int)piVar16 + 0x1a82) = puVar14;
      *(undefined4 *)((int)piVar16 + 0x1a86) = uVar15;
      _strncpy((char *)((int)piVar16 + 0x1a8a),(char *)&DAT_0080c3c3,0x1d5);
      *(undefined1 *)((int)piVar16 + 0x1c5e) = 0;
      CFsgsConnection::UpdateGame
                ((CFsgsConnection *)&DAT_00802a90,4,(char *)((int)piVar16 + 0x1a5f));
    }
  }
  (**(code **)(*piVar16 + 0x28))();
  if (DAT_00811758 != (BITMAPINFO *)0x0) {
    FUN_006ab060(&DAT_00811758);
  }
  thunk_FUN_005c4e20('\0');
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      DAT_00858df8 = puStackY_8c;
      return;
    }
  }
  DAT_00858df8 = puStackY_8c;
  return;
}

