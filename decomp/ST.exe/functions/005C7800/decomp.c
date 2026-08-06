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
  cMf32 *pcVar7;
  ushort *puVar8;
  SettMapTy *this;
  uint uVar9;
  int iVar10;
  byte *puVar11;
  byte *pbVar12;
  DWORD *pDVar13;
  char *pcVar14;
  char *pcVar15;
  byte *puVar16;
  byte *pbVar17;
  AnonShape_006A00B0_8C09D559 *local_5a80;
  byte local_228 [336];
  undefined4 local_d8 [17];
  undefined4 local_94;
  InternalExceptionFrame local_8c;
  undefined *puVar18;
  undefined4 uVar19;

  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    memset(&stack0xffffffc8, 0, 0x20); /* compiler bulk-zero initialization */
    (*this->vtable->GetMessage)((SettMapSTy *)this,(STMessage *)&stack0xffffffc8);
    return;
  }
  this->vfunc_24();
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  SettMapTy::PaintSettMap(this,'\0');
  Library::DKW::DDX::FUN_006bd740((int *)g_ddxContext_008075A8);
  Library::DKW::DDX::FUN_006c4630
            (g_dDXContext_0080759C,g_dDXContext_0080759C->field_0044,(undefined4 *)&stack0xffffffb8);
  PTR_00811758 = Library::DKW::DDX::FUN_006c4880
                           (g_dDXContext_0080759C,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);
  Library::DKW::DDX::FUN_006c44e0(g_dDXContext_0080759C,(undefined4 *)&stack0xffffffb8);
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  FUN_006b4640(g_dDXContext_0080759C,0,0,PTR_00811758,nullptr);
  Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
  if (this->field_1F3F != nullptr) {
    cMf32::delete(this->field_1F3F);
  }
  if (DAT_0080877e == '\0') goto LAB_005c7ae0;
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
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
  DAT_00853ffc = STReplaceLowByte((uint32_t)(DAT_00853ffc), (uint8_t)((char)this->field_1F58));
LAB_005c7ae0:
  wsprintfA(&DAT_00853de4,"%s%s%s");
  pDVar4 = this->field_1F7C;
  if ((DAT_00853ffc & 0xff) < pDVar4->count) {
    pcVar14 = DArrayAt<char>(pDVar4, (DAT_00853ffc & 0xff));
  }
  else {
    pcVar14 = nullptr;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar15 = pcVar14;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar14 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar15;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar14 = pcVar15 + -uVar6;
  pcVar15 = (char *)&DAT_00853ee8;
  memmove(pcVar15, pcVar14, uVar6); /* compiler REP MOVS byte copy */
  uVar9 = 0;
  _DAT_0085400e = thunk_FUN_005c2760;
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s");
  PTR_00853ff8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  STPiece<1,3>(DAT_00853ffc) = SUB43(PTR_00853ff8,0);
  uRam00854000 = (undefined1)((uint)PTR_00853ff8 >> 0x18);
  if (PTR_00853ff8 != nullptr) {
    thunk_FUN_0069ffb0(&local_5a80);
    DAT_00811754 = timeGetTime();
    SVar3 = this->field_1E26;
    if ((((SVar3 != CASE_6) && (SVar3 != CASE_1)) && (SVar3 != CASE_2)) && (DAT_0080877e != '\0')) {
      FUN_00715360(g_int_00811764,0,'\x1e',(char *)&DAT_00853de0,0x232,1,0xffffffff);
      local_8c.jumpBuffer[0xf] = 0x5c7c09;
      FUN_00715360(g_int_00811764,0,' ',(char *)&this->field_1F53,0xd,1,0xffffffff);
    }
    CGenerate::thunk_FUN_006952b0
              ((CGenerate *)&local_5a80,(AnonShape_006952B0_7A982E30 *)&DAT_00853de0,
               (byte *)&this->field_1F53);
    thunk_FUN_006a00b0((AnonShape_006A00B0_8C09D559 *)&local_5a80);
    cMf32::delete(PTR_00853ff8);
    thunk_FUN_006a0070((int)&local_5a80);
  }
  pcVar7 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_00853de4,0,0,0);
  this->field_1F3F = pcVar7;
  DAT_008087b6 = 0;
  if (this->field_1F3F != nullptr) {
    if (g_startSystem_0081176C->field_02F4 != nullptr) {
      FreeAndNull(&g_startSystem_0081176C->field_02F4);
    }
    puVar8 = Library::Ourlib::MFIMG::mfImgLoad(this->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
    g_startSystem_0081176C->field_02F4 = puVar8;
    if (g_startSystem_0081176C->field_02F4 != nullptr) {
      FUN_006c7f90(g_startSystem_0081176C->field_02F4,nullptr,g_dDXContext_0080759C->field_04B4,
                   0);
    }
    local_94 = DAT_0080995c;
    puVar11 = (byte *)(&DAT_00809960);
    puVar16 = (byte *)(local_d8);
    memmove(puVar16, puVar11, 0x20); /* compiler REP MOVS byte copy */
    iVar5 = 0;
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
    puVar11 = (byte *)(local_d8);
    puVar16 = (byte *)(&DAT_00809960);
    memmove(puVar16, puVar11, 0x20); /* compiler REP MOVS byte copy */
    if (g_dArray_0080C4C7 != nullptr) {
      FUN_006b5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad(this->field_1F3F,PTR_s_DESCRIPTION_0079c108,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      FUN_006b5570(g_dArray_0080C4CB);
    }
    g_dArray_0080C4CB =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad(this->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    puVar18 = PTR_s_TITLE_MISSION_0079c104;
    memset(&DAT_0080c3c3, 0, 0x104); /* compiler bulk-zero initialization */
    puVar8 = cMf32::RecGet(this->field_1F3F,0xc,puVar18,(int *)&stack0xfffffff8,0);
    if ((puVar8 == nullptr) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_00853de4,nullptr,nullptr,local_228,nullptr);
      uVar6 = 0xffffffff;
      pbVar12 = local_228;
      do {
        pbVar17 = pbVar12;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar17 = pbVar12 + 1;
        bVar1 = *pbVar12;
        pbVar12 = pbVar17;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      pbVar12 = pbVar17 + -uVar6;
      pbVar17 = (byte *)&DAT_0080c3c3;
      memmove(pbVar17, pbVar12, uVar6); /* compiler REP MOVS byte copy */
    }
    this->field_1F47 = 1;
    if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != nullptr)) {
      FUN_006b6160(&this->field_0x1a5f,(int)(g_int_00811764 + 6));
      this->field_1A7F = 1;
      this->field_1A80 = DAT_008087c6;
      this->field_1A81 = (char)(DAT_008087c2 >> 1);
      puVar18 = "%08x";
      uVar19 = DAT_0080995c;
      wsprintfA(&stack0xffffffe8,"%08x");
      this->field_1A82 = puVar18;
      this->field_1A86 = uVar19;
      Library::MSVCRT::_strncpy(&this->field_1A8A,(char *)&DAT_0080c3c3,0x1d5);
      this->field_1C5E = 0;
      CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this->field_0x1a5f);
    }
  }
  (*this->vtable->PrepPlList)((SettMapSTy *)this);
  if (PTR_00811758 != nullptr) {
    FreeAndNull(&PTR_00811758);
  }
  SettMapTy::PaintSettMap(this,'\0');
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_8c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return;
}

