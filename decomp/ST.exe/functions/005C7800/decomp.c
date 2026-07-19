
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7800(void)

{
  char cVar1;
  byte bVar2;
  SettMapTy SVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  SettMapTy *extraout_ECX;
  cMf32 *this;
  uint uVar8;
  cMf32 *this_00;
  int iVar9;
  byte *pbVar10;
  void *unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  undefined4 local_5a80 [5654];
  byte local_228 [336];
  undefined4 local_d8 [17];
  undefined4 local_94;
  InternalExceptionFrame local_8c;
  undefined *puVar15;
  undefined4 uVar16;
  SettMapTy *this_01;
  
  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  this_01 = extraout_ECX;
  iVar4 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,extraout_ECX);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    puVar6 = (undefined4 *)&stack0xffffffc8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    (*(code *)**(undefined4 **)this_01)();
    return;
  }
  (**(code **)(*(int *)this_01 + 0x24))();
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  SettMapTy::PaintSettMap(this_01,'\0');
  Library::DKW::DDX::FUN_006bd740(DAT_008075a8);
  Library::DKW::DDX::FUN_006c4630
            (DAT_0080759c,*(int **)(DAT_0080759c + 0x44),(undefined4 *)&stack0xffffffb8);
  DAT_00811758 = Library::DKW::DDX::FUN_006c4880
                           (DAT_0080759c,0,0,DAT_00806730,DAT_00806734,DAT_00806738);
  Library::DKW::DDX::FUN_006c44e0(DAT_0080759c,(undefined4 *)&stack0xffffffb8);
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  FUN_006b4640(DAT_0080759c,0,0,DAT_00811758,(uint *)0x0);
  Library::DKW::DDX::FUN_006bb370(DAT_0080759c,0,0);
  if (*(undefined4 **)(this_01 + 7999) != (undefined4 *)0x0) {
    cMf32::delete(this,*(undefined4 **)(this_01 + 7999));
  }
  if (DAT_0080877e == '\0') goto LAB_005c7ae0;
  if ((DAT_008067a0 != '\0') && (DAT_00811764 != (undefined4 *)0x0)) {
    FUN_006b6160((char *)(this_01 + 0x1a5f),(int)(DAT_00811764 + 6));
    this_01[0x1a7f] = (SettMapTy)0x0;
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,(char *)(this_01 + 0x1a5f));
  }
  puVar6 = &DAT_00853de0;
  for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  DAT_00853de0 = *(undefined4 *)(this_01 + 0x1f53);
  _DAT_00853ff4 = (uint)(byte)this_01[0x1f5c];
  SVar3 = this_01[0x1f57];
  if (SVar3 == (SettMapTy)0x0) {
    uVar5 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00853fec = (uVar5 & 0xf) * 2 + 0x28;
    _DAT_00853ff0 = _DAT_00853fec;
  }
  else {
    if (SVar3 == (SettMapTy)0x1) {
      iVar9 = (-(uint)(3 < (byte)this_01[0x1f5c]) & 4) + 0x21;
      uVar5 = Library::MSVCRT::FUN_0072e6c0();
      iVar4 = 0x2e;
    }
    else {
      if (SVar3 != (SettMapTy)0x2) goto LAB_005c7a2c;
      if ((byte)this_01[0x1f5c] < 4) {
        iVar9 = 0x2b;
      }
      else {
        iVar9 = (-(uint)(5 < (byte)this_01[0x1f5c]) & 5) + 0x30;
      }
      uVar5 = Library::MSVCRT::FUN_0072e6c0();
      iVar4 = 0x41;
    }
    _DAT_00853fec = (uVar5 % (uint)(iVar4 - iVar9) + iVar9) * 2;
    _DAT_00853ff0 = _DAT_00853fec;
  }
LAB_005c7a2c:
  uVar5 = Library::MSVCRT::FUN_0072e6c0();
  _DAT_00854001 = (uVar5 & 1) + 4;
  SVar3 = this_01[0x1f5d];
  if (SVar3 == (SettMapTy)0x0) {
    uVar5 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar5 % 0xb + 0x1e;
  }
  else if (SVar3 == (SettMapTy)0x1) {
    uVar5 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar5 % 0xb + 0x28;
  }
  else if (SVar3 == (SettMapTy)0x2) {
    uVar5 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar5 % 0xb + 0x32;
  }
  SVar3 = this_01[0x1f5e];
  if (SVar3 == (SettMapTy)0x0) {
    uVar5 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar5 & 1) + 2;
  }
  else if (SVar3 == (SettMapTy)0x1) {
    uVar5 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar5 & 1) + 4;
  }
  else if (SVar3 == (SettMapTy)0x2) {
    uVar5 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar5 & 1) + 6;
  }
  DAT_0085400d = this_01[0x1f5f];
  DAT_00853ffc = CONCAT31(DAT_00853ffc._1_3_,this_01[0x1f58]);
LAB_005c7ae0:
  wsprintfA(&DAT_00853de4,s__s_s_s_007c6edc);
  iVar4 = *(int *)(this_01 + 0x1f7c);
  if ((DAT_00853ffc & 0xff) < *(uint *)(iVar4 + 0xc)) {
    pcVar11 = (char *)(*(int *)(iVar4 + 8) * (DAT_00853ffc & 0xff) + *(int *)(iVar4 + 0x1c));
  }
  else {
    pcVar11 = (char *)0x0;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar12 = pcVar11;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar11 = pcVar12 + -uVar5;
  pcVar12 = (char *)&DAT_00853ee8;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
  _DAT_0085400e = &LAB_00404c64;
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc);
  DAT_00853ff8 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  DAT_00853ffc._1_3_ = SUB43(DAT_00853ff8,0);
  uRam00854000 = (undefined1)((uint)DAT_00853ff8 >> 0x18);
  if (DAT_00853ff8 != (undefined4 *)0x0) {
    thunk_FUN_0069ffb0(local_5a80);
    DAT_00811754 = timeGetTime();
    SVar3 = this_01[0x1e26];
    if ((((SVar3 != (SettMapTy)0x6) && (SVar3 != (SettMapTy)0x1)) && (SVar3 != (SettMapTy)0x2)) &&
       (DAT_0080877e != '\0')) {
      FUN_00715360(DAT_00811764,0,'\x1e',(char *)&DAT_00853de0,0x232,1,0xffffffff);
      local_8c.jumpBuffer[0xf] = 0x5c7c09;
      FUN_00715360(DAT_00811764,0,' ',(char *)(this_01 + 0x1f53),0xd,1,0xffffffff);
    }
    thunk_FUN_006952b0(local_5a80,(byte *)&DAT_00853de0,(byte *)(this_01 + 0x1f53));
    thunk_FUN_006a00b0((int)local_5a80);
    cMf32::delete(this_00,DAT_00853ff8);
    thunk_FUN_006a0070((int)local_5a80);
  }
  puVar6 = FUN_006f0ec0(0x345,&DAT_00853de4,0,0,0);
  *(undefined4 **)(this_01 + 7999) = puVar6;
  DAT_008087b6 = 0;
  if (*(int *)(this_01 + 7999) != 0) {
    if (*(int *)(DAT_0081176c + 0x2f4) != 0) {
      FUN_006ab060((undefined4 *)(DAT_0081176c + 0x2f4));
    }
    puVar7 = FUN_0070a5a0(*(undefined4 *)(this_01 + 7999),0xc,PTR_s_SMALL_MAP_0079c114,2,0);
    *(ushort **)(DAT_0081176c + 0x2f4) = puVar7;
    if (*(int *)(DAT_0081176c + 0x2f4) != 0) {
      FUN_006c7f90(*(int *)(DAT_0081176c + 0x2f4),(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),0)
      ;
    }
    local_94 = DAT_0080995c;
    puVar6 = &DAT_00809960;
    puVar13 = local_d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar13 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar13 = puVar13 + 1;
    }
    cMf32::RecGet(*(cMf32 **)(this_01 + 7999),0,PTR_s_DESCRIPTOR_0079c110,(int *)&stack0xfffffff8,0)
    ;
    if (DAT_0080877e == '\0') {
      *(undefined4 *)(this_01 + 0x2121) = 0xffffffff;
      DAT_00808aab = 0xffffffff;
    }
    else {
      *(undefined4 *)(this_01 + 0x2121) = 0;
      DAT_00808aab = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    DAT_00809958 = DAT_008087be;
    DAT_0080995c = local_94;
    puVar6 = local_d8;
    puVar13 = &DAT_00809960;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar13 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar13 = puVar13 + 1;
    }
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(*(int *)(this_01 + 7999),PTR_s_DESCRIPTION_0079c108,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = FUN_0071aa10(*(int *)(this_01 + 7999),PTR_s_OBJECTIVES_0079c10c,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    puVar15 = PTR_s_TITLE_MISSION_0079c104;
    puVar6 = &DAT_0080c3c3;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar7 = cMf32::RecGet(*(cMf32 **)(this_01 + 7999),0xc,puVar15,(int *)&stack0xfffffff8,0);
    if ((puVar7 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_00853de4,(byte *)0x0,(byte *)0x0,local_228,(byte *)0x0);
      uVar5 = 0xffffffff;
      pbVar10 = local_228;
      do {
        pbVar14 = pbVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pbVar14 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar10 = pbVar14;
      } while (bVar2 != 0);
      uVar5 = ~uVar5;
      pbVar10 = pbVar14 + -uVar5;
      pbVar14 = (byte *)&DAT_0080c3c3;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar14 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar14 = pbVar14 + 1;
      }
    }
    *(undefined4 *)(this_01 + 0x1f47) = 1;
    if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (DAT_00811764 != (undefined4 *)0x0)) {
      FUN_006b6160((char *)(this_01 + 0x1a5f),(int)(DAT_00811764 + 6));
      this_01[0x1a7f] = (SettMapTy)0x1;
      this_01[0x1a80] = DAT_008087c4._2_1_;
      this_01[0x1a81] = SUB21(DAT_008087c2 >> 1,0);
      puVar15 = &DAT_007cc584;
      uVar16 = DAT_0080995c;
      wsprintfA(&stack0xffffffe8,&DAT_007cc584);
      *(undefined **)(this_01 + 0x1a82) = puVar15;
      *(undefined4 *)(this_01 + 0x1a86) = uVar16;
      Library::MSVCRT::_strncpy((char *)(this_01 + 0x1a8a),(char *)&DAT_0080c3c3,0x1d5);
      this_01[0x1c5e] = (SettMapTy)0x0;
      CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,(char *)(this_01 + 0x1a5f));
    }
  }
  (**(code **)(*(int *)this_01 + 0x28))();
  if (DAT_00811758 != (BITMAPINFO *)0x0) {
    FUN_006ab060(&DAT_00811758);
  }
  SettMapTy::PaintSettMap(this_01,'\0');
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                 *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return;
}

