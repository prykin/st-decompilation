
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7800(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  SettMapTy *extraout_ECX;
  cMf32 *this;
  uint uVar7;
  cMf32 *this_00;
  int iVar8;
  byte *pbVar9;
  void *unaff_EDI;
  DWORD *pDVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  AnonShape_006A00B0_8C09D559 *local_5a80;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,extraout_ECX);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    puVar5 = (undefined4 *)&stack0xffffffc8;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    (**(code **)this_01->field_0000)();
    return;
  }
  (**(code **)(this_01->field_0000 + 0x24))();
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  SettMapTy::PaintSettMap(this_01,'\0');
  Library::DKW::DDX::FUN_006bd740(DAT_008075a8);
  Library::DKW::DDX::FUN_006c4630
            (DAT_0080759c,*(int **)(DAT_0080759c + 0x44),(undefined4 *)&stack0xffffffb8);
  PTR_00811758 = Library::DKW::DDX::FUN_006c4880
                           (DAT_0080759c,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);
  Library::DKW::DDX::FUN_006c44e0(DAT_0080759c,(undefined4 *)&stack0xffffffb8);
  FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  FUN_006b4640(DAT_0080759c,0,0,PTR_00811758,(uint *)0x0);
  Library::DKW::DDX::FUN_006bb370(DAT_0080759c,0,0);
  if ((cMf32 *)this_01->field_1F3F != (cMf32 *)0x0) {
    cMf32::delete(this,(cMf32 *)this_01->field_1F3F);
  }
  if (DAT_0080877e == '\0') goto LAB_005c7ae0;
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
    FUN_006b6160(&this_01->field_0x1a5f,(int)(g_int_00811764 + 6));
    this_01->field_1A7F = 0;
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_01->field_0x1a5f);
  }
  pDVar10 = &DAT_00853de0;
  for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pDVar10 = 0;
    pDVar10 = pDVar10 + 1;
  }
  *(undefined2 *)pDVar10 = 0;
  DAT_00853de0 = this_01->field_1F53;
  _DAT_00853ff4 = (uint)(byte)this_01->field_1F5C;
  cVar2 = this_01->field_1F57;
  if (cVar2 == '\0') {
    uVar4 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00853fec = (uVar4 & 0xf) * 2 + 0x28;
    _DAT_00853ff0 = _DAT_00853fec;
  }
  else {
    if (cVar2 == '\x01') {
      iVar8 = (-(uint)(3 < (byte)this_01->field_1F5C) & 4) + 0x21;
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      iVar3 = 0x2e;
    }
    else {
      if (cVar2 != '\x02') goto LAB_005c7a2c;
      if ((byte)this_01->field_1F5C < 4) {
        iVar8 = 0x2b;
      }
      else {
        iVar8 = (-(uint)(5 < (byte)this_01->field_1F5C) & 5) + 0x30;
      }
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      iVar3 = 0x41;
    }
    _DAT_00853fec = (uVar4 % (uint)(iVar3 - iVar8) + iVar8) * 2;
    _DAT_00853ff0 = _DAT_00853fec;
  }
LAB_005c7a2c:
  uVar4 = Library::MSVCRT::FUN_0072e6c0();
  _DAT_00854001 = (uVar4 & 1) + 4;
  cVar2 = this_01->field_1F5D;
  if (cVar2 == '\0') {
    uVar4 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar4 % 0xb + 0x1e;
  }
  else if (cVar2 == '\x01') {
    uVar4 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar4 % 0xb + 0x28;
  }
  else if (cVar2 == '\x02') {
    uVar4 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar4 % 0xb + 0x32;
  }
  cVar2 = this_01->field_1F5E;
  if (cVar2 == '\0') {
    uVar4 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar4 & 1) + 2;
  }
  else if (cVar2 == '\x01') {
    uVar4 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar4 & 1) + 4;
  }
  else if (cVar2 == '\x02') {
    uVar4 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar4 & 1) + 6;
  }
  DAT_0085400d = this_01->field_1F5F;
  DAT_00853ffc = CONCAT31(DAT_00853ffc._1_3_,*(undefined1 *)&this_01->field_1F58);
LAB_005c7ae0:
  wsprintfA(&DAT_00853de4,s__s_s_s_007c6edc);
  iVar3 = this_01->field_1F7C;
  if ((DAT_00853ffc & 0xff) < *(uint *)(iVar3 + 0xc)) {
    pcVar11 = (char *)(*(int *)(iVar3 + 8) * (DAT_00853ffc & 0xff) + *(int *)(iVar3 + 0x1c));
  }
  else {
    pcVar11 = (char *)0x0;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar12 = pcVar11;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar11 = pcVar12 + -uVar4;
  pcVar12 = (char *)&DAT_00853ee8;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
  _DAT_0085400e = &LAB_00404c64;
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc);
  PTR_00853ff8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  DAT_00853ffc._1_3_ = SUB43(PTR_00853ff8,0);
  uRam00854000 = (undefined1)((uint)PTR_00853ff8 >> 0x18);
  if (PTR_00853ff8 != (cMf32 *)0x0) {
    thunk_FUN_0069ffb0(&local_5a80);
    DAT_00811754 = timeGetTime();
    cVar2 = this_01->field_1E26;
    if ((((cVar2 != '\x06') && (cVar2 != '\x01')) && (cVar2 != '\x02')) && (DAT_0080877e != '\0')) {
      FUN_00715360(g_int_00811764,0,'\x1e',(char *)&DAT_00853de0,0x232,1,0xffffffff);
      local_8c.jumpBuffer[0xf] = 0x5c7c09;
      FUN_00715360(g_int_00811764,0,' ',(char *)&this_01->field_1F53,0xd,1,0xffffffff);
    }
    thunk_FUN_006952b0(&local_5a80,(AnonShape_006952B0_7A982E30 *)&DAT_00853de0,
                       (byte *)&this_01->field_1F53);
    thunk_FUN_006a00b0((AnonShape_006A00B0_8C09D559 *)&local_5a80);
    cMf32::delete(this_00,PTR_00853ff8);
    thunk_FUN_006a0070((int)&local_5a80);
  }
  puVar5 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_00853de4,0,0,0);
  this_01->field_1F3F = puVar5;
  DAT_008087b6 = 0;
  if (this_01->field_1F3F != 0) {
    if (PTR_0081176c->field_02F4 != 0) {
      FUN_006ab060((LPVOID *)&PTR_0081176c->field_02F4);
    }
    puVar6 = Library::Ourlib::MFIMG::mfImgLoad
                       ((cMf32 *)this_01->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
    PTR_0081176c->field_02F4 = puVar6;
    if ((ushort *)PTR_0081176c->field_02F4 != (ushort *)0x0) {
      FUN_006c7f90((ushort *)PTR_0081176c->field_02F4,(byte *)0x0,
                   *(HPALETTE *)(DAT_0080759c + 0x4b4),0);
    }
    local_94 = DAT_0080995c;
    puVar5 = &DAT_00809960;
    puVar13 = local_d8;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar13 = puVar13 + 1;
    }
    cMf32::RecGet((cMf32 *)this_01->field_1F3F,0,PTR_s_DESCRIPTOR_0079c110,(int *)&stack0xfffffff8,0
                 );
    if (DAT_0080877e == '\0') {
      *(undefined4 *)&this_01->field_0x2121 = 0xffffffff;
      DAT_00808aab = 0xffffffff;
    }
    else {
      *(undefined4 *)&this_01->field_0x2121 = 0;
      DAT_00808aab = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    DAT_00809958 = DAT_008087be;
    DAT_0080995c = local_94;
    puVar5 = local_d8;
    puVar13 = &DAT_00809960;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar13 = puVar13 + 1;
    }
    if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4c7);
    }
    PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                   Library::Ourlib::MFSARR::mfSarLoad
                             ((cMf32 *)this_01->field_1F3F,PTR_s_DESCRIPTION_0079c108,0);
    if (PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                     Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
    }
    PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                   Library::Ourlib::MFSARR::mfSarLoad
                             ((cMf32 *)this_01->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
    if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                     Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    puVar15 = PTR_s_TITLE_MISSION_0079c104;
    puVar5 = &DAT_0080c3c3;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar6 = cMf32::RecGet((cMf32 *)this_01->field_1F3F,0xc,puVar15,(int *)&stack0xfffffff8,0);
    if ((puVar6 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_00853de4,(byte *)0x0,(byte *)0x0,local_228,(byte *)0x0);
      uVar4 = 0xffffffff;
      pbVar9 = local_228;
      do {
        pbVar14 = pbVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pbVar14 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar14;
      } while (bVar1 != 0);
      uVar4 = ~uVar4;
      pbVar9 = pbVar14 + -uVar4;
      pbVar14 = (byte *)&DAT_0080c3c3;
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar14 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar14 = pbVar14 + 1;
      }
    }
    this_01->field_1F47 = 1;
    if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != (int *)0x0)) {
      FUN_006b6160(&this_01->field_0x1a5f,(int)(g_int_00811764 + 6));
      this_01->field_1A7F = 1;
      this_01->field_1A80 = DAT_008087c4._2_1_;
      this_01->field_1A81 = (char)(DAT_008087c2 >> 1);
      puVar15 = &DAT_007cc584;
      uVar16 = DAT_0080995c;
      wsprintfA(&stack0xffffffe8,&DAT_007cc584);
      this_01->field_1A82 = puVar15;
      this_01->field_1A86 = uVar16;
      Library::MSVCRT::_strncpy(&this_01->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
      this_01->field_1C5E = 0;
      CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_01->field_0x1a5f);
    }
  }
  (**(code **)(this_01->field_0000 + 0x28))();
  if (PTR_00811758 != (tagBITMAPINFO *)0x0) {
    FUN_006ab060(&PTR_00811758);
  }
  SettMapTy::PaintSettMap(this_01,'\0');
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return;
}

