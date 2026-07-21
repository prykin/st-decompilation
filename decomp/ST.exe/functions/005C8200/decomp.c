
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
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004EEFB0::FUN_005c8200
          (AnonReceiver_004EEFB0 *this)

{
  byte bVar1;
  SettMapTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  DWORD DVar5;
  cMf32 *this_01;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  int *piVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  byte *pbVar11;
  byte local_218 [336];
  undefined4 local_c8 [17];
  undefined4 local_84;
  InternalExceptionFrame local_7c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  SettMapTy *local_c;
  DWORD *local_8;
  
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_c = (SettMapTy *)this;
  iVar2 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    if (DAT_0080877e != '\0') {
      DVar5 = timeGetTime();
      local_c->field_1F53 = DVar5;
      thunk_FUN_005c7800();
      return;
    }
    (*(code *)local_c->field_0000->field_0028)();
    return;
  }
  if ((cMf32 *)local_c->field_1F3F != (cMf32 *)0x0) {
    cMf32::delete(this_01,(cMf32 *)local_c->field_1F3F);
  }
  wsprintfA(&DAT_00853de4,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_MISSIONS__0079c0e8,
            PTR_s_RANDOM_0079c0f4);
  puVar3 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_00853de4,0,0,0);
  this_00->field_1F3F = puVar3;
  if (PTR_0081176c->field_02F4 != 0) {
    FreeAndNull((void **)&PTR_0081176c->field_02F4);
  }
  puVar4 = Library::Ourlib::MFIMG::mfImgLoad
                     ((cMf32 *)this_00->field_1F3F,0xc,PTR_s_SMALL_MAP_0079c114,2,0);
  PTR_0081176c->field_02F4 = puVar4;
  if ((ushort *)PTR_0081176c->field_02F4 != (ushort *)0x0) {
    FUN_006c7f90((ushort *)PTR_0081176c->field_02F4,(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),
                 0);
  }
  local_84 = DAT_0080995c;
  puVar3 = &DAT_00809960;
  puVar10 = local_c8;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  local_8 = &DAT_008087b6;
  puVar4 = cMf32::RecGet((cMf32 *)this_00->field_1F3F,0,PTR_s_DESCRIPTOR_0079c110,(int *)&local_8,0)
  ;
  if (puVar4 == (ushort *)0x0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x45a);
  }
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
  DAT_0080995c = local_84;
  puVar3 = local_c8;
  puVar10 = &DAT_00809960;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4c7);
  }
  PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                 Library::Ourlib::MFSARR::mfSarLoad
                           ((cMf32 *)this_00->field_1F3F,PTR_s_DESCRIPTION_0079c108,0);
  if (PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
    PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                   Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  }
  if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
  }
  PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                 Library::Ourlib::MFSARR::mfSarLoad
                           ((cMf32 *)this_00->field_1F3F,PTR_s_OBJECTIVES_0079c10c,0);
  if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
    PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                   Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  }
  puVar3 = &DAT_0080c3c3;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_8 = &DAT_0080c3c3;
  puVar4 = cMf32::RecGet((cMf32 *)this_00->field_1F3F,0xc,PTR_s_TITLE_MISSION_0079c104,
                         (int *)&local_8,0);
  if ((puVar4 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
    Library::MSVCRT::FUN_0072e730(&DAT_00853de4,(byte *)0x0,(byte *)0x0,local_218,(byte *)0x0);
    uVar6 = 0xffffffff;
    pbVar8 = local_218;
    do {
      pbVar11 = pbVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar11 + -uVar6;
    pbVar11 = (byte *)&DAT_0080c3c3;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
  }
  local_8 = &DAT_00853de0;
  puVar4 = cMf32::RecGet((cMf32 *)this_00->field_1F3F,0xc,PTR_s_GENERATE_RND_0079c0f8,
                         (int *)&local_8,0);
  if (puVar4 == (ushort *)0x0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x475);
  }
  local_8 = &this_00->field_1F53;
  puVar4 = cMf32::RecGet((cMf32 *)this_00->field_1F3F,0xc,PTR_s_INTERFACE_RND_0079c0fc,
                         (int *)&local_8,0);
  if (puVar4 == (ushort *)0x0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x477);
  }
  wsprintfA(&DAT_00853de4,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_MISSIONS__0079c0e8,
            PTR_s_RANDOM_0079c0f4);
  this_00->field_1F47 = 1;
  if (((DAT_0080877e != '\0') && (DAT_008067a0 != '\0')) && (g_int_00811764 != (int *)0x0)) {
    FUN_006b6160(&this_00->field_0x1a5f,(int)(g_int_00811764 + 6));
    this_00->field_1A7F = 1;
    this_00->field_1A80 = DAT_008087c4._2_1_;
    this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
    wsprintfA((LPSTR)&local_18,&DAT_007cc584,DAT_0080995c);
    this_00->field_1A82 = local_18;
    this_00->field_1A86 = local_14;
    Library::MSVCRT::_strncpy(&this_00->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
    this_00->field_1C5E = 0;
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_00->field_0x1a5f);
  }
  (*(code *)this_00->field_0000->field_0028)();
  SettMapTy::PaintSettMap(this_00,'\0');
  piVar9 = &this_00->field_1F60;
  puVar3 = local_38;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28 = 5;
  iVar2 = 7;
  do {
    if (*piVar9 != 0) {
      FUN_006e6080(this_00,2,*piVar9,local_38);
    }
    piVar9 = piVar9 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  g_currentExceptionFrame = local_7c.previous;
  return;
}

