#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\sett_obj.cpp
   Diagnostic line evidence: 1114 | 1141 | 1143 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004EEFB0.
   Evidence: incoming_receiver_captures=2; receiver_accesses=22; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[0];
   expected_stack=0; receiver_family_members=12; single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0053F510::FUN_005c8200
          (RecoveredReceiver_0053F510 *this)

{
  byte bVar1;
  RecoveredReceiver_0053F510 *this_00;
  int iVar2;
  cMf32 *pcVar2;
  ushort *puVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  byte *puVar8;
  byte *pbVar9;
  int *piVar10;
  byte *puVar11;
  char *pcVar12;
  byte *pbVar13;
  byte local_218 [336];
  uint local_c8 [17];
  uint local_84;
  InternalExceptionFrame local_7c;
  uint local_38 [4];
  uint local_28;
  uint local_18;
  uint local_14;
  RecoveredReceiver_0053F510 *local_c;
  DWORD *local_8;

  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_c = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    if (DAT_0080877e != '\0') {
      /* ST_CALLSITE[005C8658]: CALL dword ptr [0x0085bedc] */
      DVar4 = timeGetTime();
      local_c->field_1F53 = DVar4;
      thunk_FUN_005c7800(local_c);
      return;
    }
    /* ST_CALLSITE[005C8678]: CALL dword ptr [EDX + 0x28]; [STIndirectCallsiteApplier] exact slot 0x28; mode=structural-presentation; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_0053F510 */
    (*local_c->vtable->slot_28)();
    return;
  }
  if (local_c->field_1F3F != nullptr) {
    cMf32::delete(local_c->field_1F3F);
  }
  /* ST_CALLSITE[005C8268]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&CHAR_00h_00853de4,"%s%s%s",&CHAR_00h_00807680,PTR_s_MISSIONS__0079c0e8,
            PTR_s_RANDOM_0079c0f4);
  /* ST_CALLSITE[005C827E]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
  pcVar2 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&CHAR_00h_00853de4,0,0,0);
  this_00->field_1F3F = pcVar2;
  if (g_startSystem_0081176C->field_02F4 != nullptr) {
    FreeAndNull(&g_startSystem_0081176C->field_02F4);
  }
  puVar3 = Library::Ourlib::MFIMG::mfImgLoad(this_00->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
  g_startSystem_0081176C->field_02F4 = puVar3;
  if (g_startSystem_0081176C->field_02F4 != nullptr) {
    FUN_006c7f90(g_startSystem_0081176C->field_02F4,nullptr,g_dDXContext_0080759C->field_04B4,0);
  }
  local_84 = DAT_0080995c;
  puVar8 = (byte *)&DAT_00809960;
  puVar11 = (byte *)(local_c8);
  memmove(puVar11, puVar8, 0x20); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  local_8 = &DAT_008087b6;
  puVar3 = cMf32::RecGet(this_00->field_1F3F,0,PTR_s_DESCRIPTOR_0079c110,(int *)&local_8,0);
  if (puVar3 == nullptr) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\sett_obj.cpp",0x45a);
  }
  if (DAT_0080877e == '\0') {
    this_00->field_2121 = 0xffffffff;
    DAT_00808aab = 0xffffffff;
  }
  else {
    this_00->field_2121 = 0;
    DAT_00808aab = 0;
    DAT_00808aa8 = DAT_0080734b;
  }
  DAT_00809958 = DAT_008087be;
  DAT_0080995c = local_84;
  puVar8 = (byte *)(local_c8);
  puVar11 = (byte *)&DAT_00809960;
  memmove(puVar11, puVar8, 0x20); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  if (g_dArray_0080C4C7 != nullptr) {
    FUN_006b5570(g_dArray_0080C4C7);
  }
  /* ST_CALLSITE[005C83C1]: CALL 0x0071aa10; direct=0071AA10 Library::Ourlib::MFSARR::mfSarLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/cMf32;pointer:/char;/int */
  g_dArray_0080C4C7 =
       Library::Ourlib::MFSARR::mfSarLoad(this_00->field_1F3F,PTR_s_DESCRIPTION_0079c108,0);
  if (g_dArray_0080C4C7 == nullptr) {
    g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  }
  if (g_dArray_0080C4CB != nullptr) {
    FUN_006b5570(g_dArray_0080C4CB);
  }
  /* ST_CALLSITE[005C83FF]: CALL 0x0071aa10; direct=0071AA10 Library::Ourlib::MFSARR::mfSarLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/cMf32;pointer:/char;/int */
  g_dArray_0080C4CB =
       Library::Ourlib::MFSARR::mfSarLoad(this_00->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
  if (g_dArray_0080C4CB == nullptr) {
    g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  }
  pcVar12 = &CHAR_00h_0080c3c3;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + 4;
  }
  local_8 = (DWORD *)&CHAR_00h_0080c3c3;
  puVar3 = cMf32::RecGet(this_00->field_1F3F,0xc,PTR_s_TITLE_MISSION_0079c104,(int *)&local_8,0);
  if ((puVar3 == nullptr) || (CHAR_00h_0080c3c3 == '\0')) {
    Library::MSVCRT::FUN_0072e730
              ((byte *)&CHAR_00h_00853de4,nullptr,nullptr,local_218,nullptr);
    uVar6 = 0xffffffff;
    pbVar9 = local_218;
    do {
      pbVar13 = pbVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar13 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar13;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar9 = pbVar13 + -uVar6;
    pbVar13 = (byte *)&CHAR_00h_0080c3c3;
    memmove(pbVar13, pbVar9, uVar6); /* compiler REP MOVS byte copy */
  }
  local_8 = &DAT_00853de0;
  puVar3 = cMf32::RecGet(this_00->field_1F3F,0xc,PTR_s_GENERATE_RND_0079c0f8,(int *)&local_8,0);
  if (puVar3 == nullptr) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\sett_obj.cpp",0x475);
  }
  local_8 = &this_00->field_1F53;
  puVar3 = cMf32::RecGet(this_00->field_1F3F,0xc,PTR_s_INTERFACE_RND_0079c0fc,(int *)&local_8,0);
  if (puVar3 == nullptr) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\sett_obj.cpp",0x477);
  }
  /* ST_CALLSITE[005C8537]: CALL EDI */
  wsprintfA(&CHAR_00h_00853de4,"%s%s%s",&CHAR_00h_00807680,PTR_s_MISSIONS__0079c0e8,
            PTR_s_RANDOM_0079c0f4);
  this_00->field_1F47 = 1;
  if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != nullptr)) {
    FUN_006b6160(&this_00->field_0x1a5f,(int)(g_int_00811764 + 6));
    this_00->field_1A7F = 1;
    this_00->field_1A80 = DAT_008087c6;
    this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
    /* ST_CALLSITE[005C85AE]: CALL EDI */
    wsprintfA((LPSTR)&local_18,"%08x",DAT_0080995c);
    this_00->field_1A82 = local_18;
    this_00->field_1A86 = local_14;
    Library::MSVCRT::_strncpy(&this_00->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
    this_00->field_1C5E = 0;
    /* ST_CALLSITE[005C85E9]: CALL dword ptr [0x0085c070] */
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_00->field_0x1a5f);
  }
  /* ST_CALLSITE[005C85F3]: CALL dword ptr [EDX + 0x28]; [STIndirectCallsiteApplier] exact slot 0x28; mode=structural-presentation; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_0053F510 */
  (*this_00->vtable->slot_28)();
  /* ST_CALLSITE[005C85FA]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  SettMapTy::PaintSettMap((SettMapTy *)this_00,'\0');
  piVar10 = &this_00->field_1F60;
  memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
  local_28 = 5;
  iVar5 = 7;
  do {
    if (*piVar10 != 0) {
      FUN_006e6080(this_00,2,*piVar10,local_38);
    }
    piVar10 = piVar10 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  g_currentExceptionFrame = local_7c.previous;
  return;
}

