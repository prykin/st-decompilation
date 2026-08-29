#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_0053F510.
   Evidence: incoming_receiver_captures=1; entry_receiver_register_captures=0; receiver_accesses=34;
   receiver_bulk_copies=0; incoming_edx_uses=0; calls=3; ecx_pointer_setup=2; ecx_scalar_setup=0;
   caller_cleanup_calls=0; callee_ret_pop=[0]; expected_stack=0; receiver_family_members=5;
   same_this_callees=2 */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0053F510::FUN_005c7800
          (RecoveredReceiver_0053F510 *this)

{
  byte *puVar1;
  byte bVar2;
  char cVar3;
  SettMapTy_field_1E26State SVar4;
  DArrayTy *pDVar5;
  SettMapTy *this_00;
  int iVar5;
  uint local_EAX_470;
  uint uVar6;
  uint local_EAX_556;
  uint local_EAX_591;
  uint local_EAX_610;
  uint local_EAX_629;
  uint local_EAX_671;
  uint local_EAX_684;
  uint local_EAX_697;
  cMf32 *pcVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *puVar12;
  byte *pbVar13;
  DWORD *pDVar14;
  char *pcVar15;
  char *pcVar16;
  byte *puVar17;
  byte *pbVar18;
  STMessage *pSVar19;
  RecoveredRecordView_006A00B0_C4D66491 *local_5a80;
  byte local_228 [336];
  uint local_d8 [17];
  uint local_94;
  InternalExceptionFrame local_8c;
  uint local_48 [4];
  STMessage local_38;
  uint local_18;
  uint local_14;
  SettMapTy *local_c;
  char *local_8;
  char *pcVar14_mg2;

  local_8 = (char *)0x5c780d;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_c = (SettMapTy *)this;

  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    pSVar19 = &local_38;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      pSVar19->unknown_00 = 0;
      pSVar19 = (STMessage *)&pSVar19->unknown_04;
    }
    local_38.unknown_0c = 2;
    local_38.unknown_08 = local_c->field_0008;
    local_38.id = (-(uint)(local_c->field_1E26 != CASE_E) & 0xfffffffa) + MESS_WAITTY_694D;
    /* ST_CALLSITE[005C7FF5]: CALL dword ptr [EDX] */
    (*local_c->vtable->GetMessage)((SettMapSTy *)local_c,&local_38);
    return;
  }
  /* ST_CALLSITE[005C784A]: CALL dword ptr [EAX + 0x24]; [STIndirectCallsiteApplier] exact slot 0x24; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/SettMapTy */
  local_c->vfunc_24();
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  /* ST_CALLSITE[005C7884]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  SettMapTy::PaintSettMap(this_00,'\0');

  Library::DKW::DDX::FUN_006bd740((int *)g_ddxContext_008075A8);

  Library::DKW::DDX::FUN_006c4630(g_dDXContext_0080759C,g_dDXContext_0080759C->field_0044,local_48);
  /* ST_CALLSITE[005C78C7]: CALL 0x006c4880; direct=006C4880 Library::DKW::DDX::FUN_006c4880; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; signature=__stdcall;pointer:/wingdi.h/tagBITMAPINFO;pointer:/SubmarineTitans/Recovered/LibraryContexts/DDXContext;/int;/int;/int;/WinDef.h/UINT;/uint */
  g_tagBITMAPINFO_00811758 =
       Library::DKW::DDX::FUN_006c4880
                 (g_dDXContext_0080759C,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);

  Library::DKW::DDX::FUN_006c44e0(g_dDXContext_0080759C,local_48);
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);

  FUN_006b4640(g_dDXContext_0080759C,0,0,g_tagBITMAPINFO_00811758,nullptr);

  Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
  if (this_00->field_1F3F != nullptr) {
    cMf32::delete(this_00->field_1F3F);
  }
  if (DAT_0080877e == '\0') goto LAB_005c7ae0;
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
    puVar1 = &this_00->array_00BC[0xc].field_0x1df;
    FUN_006b6160(puVar1,(int)(g_int_00811764 + 6));
    this_00->field_1A7F = 0;
    /* ST_CALLSITE[005C7977]: CALL dword ptr [0x0085c070] */
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,puVar1);
  }
  memset(&DAT_00853de0, 0, 0x232); /* compiler bulk-zero initialization */
  DAT_00853de0 = this_00->field_1F53;
  _DAT_00853ff4 = (uint)this_00->field_1F5C;
  cVar3 = this_00->field_1F57;
  if (cVar3 == '\0') {

    uVar6 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00853fec = (uVar6 & 0xf) * 2 + 0x28;
    _DAT_00853ff0 = _DAT_00853fec;
  }
  else {
    if (cVar3 == '\x01') {
      iVar11 = (-(uint)(3 < this_00->field_1F5C) & 4) + 0x21;

      local_EAX_470 = Library::MSVCRT::FUN_0072e6c0();
      iVar8 = 0x2e;
    }
    else {
      if (cVar3 != '\x02') goto LAB_005c7a2c;
      if (this_00->field_1F5C < 4) {
        iVar11 = 0x2b;
      }
      else {
        iVar11 = (-(uint)(5 < this_00->field_1F5C) & 5) + 0x30;
      }

      local_EAX_470 = Library::MSVCRT::FUN_0072e6c0();
      iVar8 = 0x41;
    }
    _DAT_00853fec = (local_EAX_470 % (uint)(iVar8 - iVar11) + iVar11) * 2;
    _DAT_00853ff0 = _DAT_00853fec;
  }
LAB_005c7a2c:

  local_EAX_556 = Library::MSVCRT::FUN_0072e6c0();
  _DAT_00854001 = (local_EAX_556 & 1) + 4;
  cVar3 = this_00->field_1F5D;
  if (cVar3 == '\0') {

    local_EAX_629 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = local_EAX_629 % 0xb + 0x1e;
  }
  else if (cVar3 == '\x01') {

    local_EAX_610 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = local_EAX_610 % 0xb + 0x28;
  }
  else if (cVar3 == '\x02') {

    local_EAX_591 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854005 = local_EAX_591 % 0xb + 0x32;
  }
  cVar3 = this_00->field_1F5E;
  if (cVar3 == '\0') {

    local_EAX_697 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (local_EAX_697 & 1) + 2;
  }
  else if (cVar3 == '\x01') {

    local_EAX_684 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (local_EAX_684 & 1) + 4;
  }
  else if (cVar3 == '\x02') {

    local_EAX_671 = Library::MSVCRT::FUN_0072e6c0();
    _DAT_00854009 = (local_EAX_671 & 1) + 6;
  }
  DAT_0085400d = this_00->field_1F5F;
  DAT_00853ffc = STReplaceLowByte((uint32_t)(DAT_00853ffc), (uint8_t)((char)this_00->field_1F58));
LAB_005c7ae0:
  /* ST_CALLSITE[005C7AFD]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&CHAR_00h_00853de4,"%s%s%s",&CHAR_00h_00807680,PTR_s_MISSIONS__0079c0e8,
            PTR_s_RANDOM_0079c0f4);
  pDVar5 = this_00->field_1F7C;
  if ((DAT_00853ffc & 0xff) < pDVar5->count) {
    pcVar15 = DArrayAt<char>(pDVar5, (DAT_00853ffc & 0xff));
  }
  else {
    pcVar15 = nullptr;
  }
  uVar9 = 0xffffffff;
  do {
    pcVar16 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar16 = pcVar15 + 1;
    cVar3 = *pcVar15;
    pcVar15 = pcVar16;
  } while (cVar3 != '\0');
  uVar9 = ~uVar9;
  pcVar15 = pcVar16 + -uVar9;
  pcVar16 = (char *)&DAT_00853ee8;
  memmove(pcVar16, pcVar15, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  _DAT_0085400e = thunk_FUN_005c2760;
  /* ST_CALLSITE[005C7B6D]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079c0ec,
            &DAT_00853ee8);
  /* ST_CALLSITE[005C7B83]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
  PTR_00853ff8 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  STPiece<1,3>(DAT_00853ffc) = SUB43(PTR_00853ff8,0);
  uRam00854000 = (undefined1)((uint)PTR_00853ff8 >> 0x18);
  if (PTR_00853ff8 != nullptr) {

    thunk_FUN_0069ffb0(&local_5a80);
    /* ST_CALLSITE[005C7BA8]: CALL dword ptr [0x0085bedc] */
    DAT_00811754 = timeGetTime();
    SVar4 = this_00->field_1E26;
    if ((((SVar4 != CASE_6) && (SVar4 != CASE_1)) && (SVar4 != CASE_2)) && (DAT_0080877e != '\0')) {

      FUN_00715360(g_int_00811764,0,'\x1e',(char *)&DAT_00853de0,0x232,1,0xffffffff);

      FUN_00715360(g_int_00811764,0,' ',(char *)&this_00->field_1F53,0xd,1,0xffffffff);
    }

    CGenerate::thunk_FUN_006952b0
              ((CGenerate *)&local_5a80,(RecoveredRecordView_006952B0_2D9C9F03 *)&DAT_00853de0,
               (byte *)&this_00->field_1F53);
    thunk_FUN_006a00b0((RecoveredRecordView_006A00B0_C4D66491 *)&local_5a80);
    cMf32::delete(PTR_00853ff8);
    thunk_FUN_006a0070((int)&local_5a80);
  }
  /* ST_CALLSITE[005C7C57]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
  pcVar6 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&CHAR_00h_00853de4,0,0,0);
  this_00->field_1F3F = pcVar6;
  DAT_008087b6 = 0;
  if (this_00->field_1F3F != nullptr) {
    if (g_startSystem_0081176C->field_02F4 != nullptr) {
      FreeAndNull(&g_startSystem_0081176C->field_02F4);
    }
    puVar7 = Library::Ourlib::MFIMG::mfImgLoad(this_00->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
    g_startSystem_0081176C->field_02F4 = puVar7;
    if (g_startSystem_0081176C->field_02F4 != nullptr) {
      FUN_006c7f90(g_startSystem_0081176C->field_02F4,nullptr,g_dDXContext_0080759C->field_04B4,
                   0);
    }
    local_94 = DAT_0080995c;
    puVar12 = (byte *)&DAT_00809960;
    puVar17 = (byte *)(local_d8);
    memmove(puVar17, puVar12, 0x20); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    local_8 = (char *)&DAT_008087b6;
    cMf32::RecGet(this_00->field_1F3F,0,PTR_s_DESCRIPTOR_0079c110,(int *)&local_8,0);
    if (DAT_0080877e == '\0') {
      *(undefined4 *)&this_00->field_0x2121 = 0xffffffff;
      DAT_00808aab = 0xffffffff;
    }
    else {
      *(undefined4 *)&this_00->field_0x2121 = 0;
      DAT_00808aab = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    DAT_00809958 = DAT_008087be;
    DAT_0080995c = local_94;
    puVar12 = (byte *)(local_d8);
    puVar17 = (byte *)&DAT_00809960;
    memmove(puVar17, puVar12, 0x20); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    if (g_dArray_0080C4C7 != nullptr) {
      FUN_006b5570(g_dArray_0080C4C7);
    }
    /* ST_CALLSITE[005C7D9D]: CALL 0x0071aa10; direct=0071AA10 Library::Ourlib::MFSARR::mfSarLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/cMf32;pointer:/char;/int */
    g_dArray_0080C4C7 =
         Library::Ourlib::MFSARR::mfSarLoad(this_00->field_1F3F,PTR_s_DESCRIPTION_0079c108,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      FUN_006b5570(g_dArray_0080C4CB);
    }
    /* ST_CALLSITE[005C7DDC]: CALL 0x0071aa10; direct=0071AA10 Library::Ourlib::MFSARR::mfSarLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/cMf32;pointer:/char;/int */
    g_dArray_0080C4CB =
         Library::Ourlib::MFSARR::mfSarLoad(this_00->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    pcVar14_mg2 = PTR_s_TITLE_MISSION_0079c104;
    pcVar15 = &CHAR_00h_0080c3c3;
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar15[0] = '\0';
      pcVar15[1] = '\0';
      pcVar15[2] = '\0';
      pcVar15[3] = '\0';
      pcVar15 = pcVar15 + 4;
    }
    local_8 = &CHAR_00h_0080c3c3;
    puVar7 = cMf32::RecGet(this_00->field_1F3F,0xc,pcVar14_mg2,(int *)&local_8,0);
    if ((puVar7 == nullptr) || (CHAR_00h_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730
                ((byte *)&CHAR_00h_00853de4,nullptr,nullptr,local_228,nullptr);
      uVar9 = 0xffffffff;
      pbVar13 = local_228;
      do {
        pbVar18 = pbVar13;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pbVar18 = pbVar13 + 1;
        bVar2 = *pbVar13;
        pbVar13 = pbVar18;
      } while (bVar2 != 0);
      uVar9 = ~uVar9;
      pbVar13 = pbVar18 + -uVar9;
      pbVar18 = (byte *)&CHAR_00h_0080c3c3;
      memmove(pbVar18, pbVar13, uVar9); /* compiler REP MOVS byte copy */
    }
    this_00->field_1F47 = 1;
    if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != nullptr)) {
      puVar1 = &this_00->array_00BC[0xc].field_0x1df;
      FUN_006b6160(puVar1,(int)(g_int_00811764 + 6));
      this_00->field_1A7F = 1;
      this_00->field_1A80 = DAT_008087c6;
      this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
      /* ST_CALLSITE[005C7EE9]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&local_18,"%08x",DAT_0080995c);
      this_00->field_1A82 = local_18;
      this_00->field_1A86 = local_14;
      Library::MSVCRT::_strncpy(&this_00->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
      this_00->field_1C5E = 0;
      /* ST_CALLSITE[005C7F28]: CALL dword ptr [0x0085c070] */
      CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,puVar1);
    }
  }
  /* ST_CALLSITE[005C7F32]: CALL dword ptr [EDX + 0x28] */
  (*this_00->vtable->PrepPlList)((SettMapSTy *)this_00);
  if (g_tagBITMAPINFO_00811758 != nullptr) {
    FreeAndNull(&g_tagBITMAPINFO_00811758);
  }
  /* ST_CALLSITE[005C7F4C]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  SettMapTy::PaintSettMap(this_00,'\0');
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

