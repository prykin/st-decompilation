#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7800(void)

{
  byte bVar1;
  char cVar2;
  SettMapTy_field_1E26State SVar3;
  DArrayTy *pDVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  SettMapTy *this;
  cMf32 *this_00;
  uint uVar9;
  cMf32 *this_01;
  int iVar10;
  byte *pbVar11;
  DWORD *pDVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  AnonShape_006A00B0_8C09D559 *local_5a80;
  byte local_228 [336];
  undefined4 local_d8 [17];
  undefined4 local_94;
  InternalExceptionFrame local_8c;
  undefined *puVar17;
  undefined4 uVar18;

  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    memset(&stack0xffffffc8, 0, 0x20); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)this->field_0000)();
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)this->field_0000->field_0024)();
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,(uint)PTR_00802a30->field_001C);
    }
  }
  SettMapTy::PaintSettMap(this,'\0');
  Library::DKW::DDX::FUN_006bd740((int *)PTR_008075a8);
  Library::DKW::DDX::FUN_006c4630
            (DAT_0080759c,*(int **)(DAT_0080759c + 0x44),(undefined4 *)&stack0xffffffb8);
  PTR_00811758 = Library::DKW::DDX::FUN_006c4880
                           (DAT_0080759c,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);
  Library::DKW::DDX::FUN_006c44e0(DAT_0080759c,(undefined4 *)&stack0xffffffb8);
  FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  FUN_006b4640(DAT_0080759c,0,0,PTR_00811758,(uint *)0x0);
  Library::DKW::DDX::FUN_006bb370(DAT_0080759c,0,0);
  if (this->field_1F3F != (cMf32 *)0x0) {
    cMf32::delete(this_00,this->field_1F3F);
  }
  if (DAT_0080877e == '\0') goto LAB_005c7ae0;
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
    FUN_006b6160(&this->field_0x1a5f,(int)(g_int_00811764 + 6));
    this->field_1A7F = 0;
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this->field_0x1a5f);
  }
  memset(&DAT_00853de0, 0, 0x232); /* compiler bulk-zero initialization */
  DAT_00853de0 = this->field_1F53;
  _DAT_00853ff4 = (uint)this->field_1F5C;
  cVar2 = this->field_1F57;
  if (cVar2 == '\0') {
    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00853fec = (uVar6 & 0xf) * 2 + 0x28;
    _DAT_00853ff0 = _DAT_00853fec;
  }
  else {
    if (cVar2 == '\x01') {
      iVar10 = (-(uint)(3 < this->field_1F5C) & 4) + 0x21;
      uVar6 = Library::MSVCRT::FUN_0072e6c0();
      iVar5 = 0x2e;
    }
    else {
      if (cVar2 != '\x02') goto LAB_005c7a2c;
      if (this->field_1F5C < 4) {
        iVar10 = 0x2b;
      }
      else {
        iVar10 = (-(uint)(5 < this->field_1F5C) & 5) + 0x30;
      }
      uVar6 = Library::MSVCRT::FUN_0072e6c0();
      iVar5 = 0x41;
    }
    _DAT_00853fec = (uVar6 % (uint)(iVar5 - iVar10) + iVar10) * 2;
    _DAT_00853ff0 = _DAT_00853fec;
  }
LAB_005c7a2c:
  uVar6 = Library::MSVCRT::FUN_0072e6c0();
  _DAT_00854001 = (uVar6 & 1) + 4;
  cVar2 = this->field_1F5D;
  if (cVar2 == '\0') {
    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar6 % 0xb + 0x1e;
  }
  else if (cVar2 == '\x01') {
    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar6 % 0xb + 0x28;
  }
  else if (cVar2 == '\x02') {
    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = uVar6 % 0xb + 0x32;
  }
  cVar2 = this->field_1F5E;
  if (cVar2 == '\0') {
    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar6 & 1) + 2;
  }
  else if (cVar2 == '\x01') {
    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar6 & 1) + 4;
  }
  else if (cVar2 == '\x02') {
    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (uVar6 & 1) + 6;
  }
  DAT_0085400d = this->field_1F5F;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  DAT_00853ffc = CONCAT31(DAT_00853ffc._1_3_,(char)this->field_1F58);
LAB_005c7ae0:
  wsprintfA(&DAT_00853de4,"%s%s%s");
  pDVar4 = this->field_1F7C;
  if ((DAT_00853ffc & 0xff) < pDVar4->count) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, (DAT_00853ffc & 0xff)) (runtime stride) */
    pcVar13 = (char *)(pDVar4->elementSize * (DAT_00853ffc & 0xff) + (int)pDVar4->data);
  }
  else {
    pcVar13 = (char *)0x0;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar14 = pcVar13;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar14 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar14;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar13 = pcVar14 + -uVar6;
  pcVar14 = (char *)&DAT_00853ee8;
  for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar14 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar14 = pcVar14 + 1;
  }
  _DAT_0085400e = &LAB_00404c64;
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s");
  PTR_00853ff8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  DAT_00853ffc._1_3_ = SUB43(PTR_00853ff8,0);
  uRam00854000 = (undefined1)((uint)PTR_00853ff8 >> 0x18);
  if (PTR_00853ff8 != (cMf32 *)0x0) {
    thunk_FUN_0069ffb0(&local_5a80);
    DAT_00811754 = timeGetTime();
    SVar3 = this->field_1E26;
    if ((((SVar3 != 6) && (SVar3 != 1)) && (SVar3 != 2)) && (DAT_0080877e != '\0')) {
      FUN_00715360(g_int_00811764,0,'\x1e',(char *)&DAT_00853de0,0x232,1,0xffffffff);
      local_8c.jumpBuffer[0xf] = 0x5c7c09;
      FUN_00715360(g_int_00811764,0,' ',(char *)&this->field_1F53,0xd,1,0xffffffff);
    }
    thunk_FUN_006952b0(&local_5a80,(AnonShape_006952B0_7A982E30 *)&DAT_00853de0,
                       (byte *)&this->field_1F53);
    thunk_FUN_006a00b0((AnonShape_006A00B0_8C09D559 *)&local_5a80);
    cMf32::delete(this_01,PTR_00853ff8);
    thunk_FUN_006a0070((int)&local_5a80);
  }
  puVar7 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_00853de4,0,0,0);
  this->field_1F3F = puVar7;
  DAT_008087b6 = 0;
  if (this->field_1F3F != (void *)0x0) {
    if (PTR_0081176c->field_02F4 != (ushort *)0x0) {
      FreeAndNull(&PTR_0081176c->field_02F4);
    }
    puVar8 = Library::Ourlib::MFIMG::mfImgLoad(this->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
    PTR_0081176c->field_02F4 = puVar8;
    if (PTR_0081176c->field_02F4 != (ushort *)0x0) {
      FUN_006c7f90(PTR_0081176c->field_02F4,(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),0);
    }
    local_94 = DAT_0080995c;
    puVar7 = &DAT_00809960;
    puVar15 = local_d8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar15 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar15 = puVar15 + 1;
    }
    cMf32::RecGet(this->field_1F3F,0,PTR_s_DESCRIPTOR_0079c110,(int *)&stack0xfffffff8,0);
    if (DAT_0080877e == '\0') {
      *(undefined4 *)&this->field_0x2121 = 0xffffffff;
      DAT_00808aab = 0xffffffff;
    }
    else {
      *(undefined4 *)&this->field_0x2121 = 0;
      DAT_00808aab = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    DAT_00809958 = DAT_008087be;
    DAT_0080995c = local_94;
    puVar7 = local_d8;
    puVar15 = &DAT_00809960;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar15 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar15 = puVar15 + 1;
    }
    if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4c7);
    }
    PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                   Library::Ourlib::MFSARR::mfSarLoad(this->field_1F3F,PTR_s_DESCRIPTION_0079c108,0)
    ;
    if (PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                     Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
    }
    PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                   Library::Ourlib::MFSARR::mfSarLoad(this->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
    if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                     Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    puVar17 = PTR_s_TITLE_MISSION_0079c104;
    memset(&DAT_0080c3c3, 0, 0x104); /* compiler bulk-zero initialization */
    puVar8 = cMf32::RecGet(this->field_1F3F,0xc,puVar17,(int *)&stack0xfffffff8,0);
    if ((puVar8 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_00853de4,(byte *)0x0,(byte *)0x0,local_228,(byte *)0x0);
      uVar6 = 0xffffffff;
      pbVar11 = local_228;
      do {
        pbVar16 = pbVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar16 = pbVar11 + 1;
        bVar1 = *pbVar11;
        pbVar11 = pbVar16;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      pbVar11 = pbVar16 + -uVar6;
      pbVar16 = (byte *)&DAT_0080c3c3;
      for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar16 = pbVar16 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar16 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar16 = pbVar16 + 1;
      }
    }
    this->field_1F47 = 1;
    if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != (int *)0x0)) {
      FUN_006b6160(&this->field_0x1a5f,(int)(g_int_00811764 + 6));
      this->field_1A7F = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_1A80 = DAT_008087c4._2_1_;
      this->field_1A81 = (char)(DAT_008087c2 >> 1);
      puVar17 = "%08x";
      uVar18 = DAT_0080995c;
      wsprintfA(&stack0xffffffe8,"%08x");
      this->field_1A82 = puVar17;
      this->field_1A86 = uVar18;
      Library::MSVCRT::_strncpy(&this->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
      this->field_1C5E = 0;
      CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this->field_0x1a5f);
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)this->field_0000->field_0028)();
  if (PTR_00811758 != (tagBITMAPINFO *)0x0) {
    FreeAndNull(&PTR_00811758);
  }
  SettMapTy::PaintSettMap(this,'\0');
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,(uint)PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return;
}

