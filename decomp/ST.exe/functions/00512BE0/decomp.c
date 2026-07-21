
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\helppan.cpp
   Diagnostic line evidence: 544 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004EEFB0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=22; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=12; single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004EEFB0::FUN_00512be0
          (AnonReceiver_004EEFB0 *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  AnonShape_00512BE0_C9F23DAB *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  int *piVar6;
  int local_8c4 [4];
  undefined4 local_8b4;
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  int local_8a4;
  int local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  int local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6e4;
  int local_6e0;
  undefined4 local_68c;
  int local_688 [26];
  undefined4 local_620;
  undefined4 local_564;
  int local_560;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  int local_4fc;
  int local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_5c;
  undefined4 local_58;
  InternalExceptionFrame local_4c;
  AnonShape_00512BE0_C9F23DAB *local_8;
  
  piVar5 = local_8c4;
  local_8 = (AnonShape_00512BE0_C9F23DAB *)this;
  for (iVar3 = 0x21e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8c4[0] = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (local_8c4[0] == 0) {
    local_8c4[1] = 2;
    local_8a4 = local_8->field_003C + 0x21;
    if (local_8->field_005C == 0) {
      local_8a0 = -local_8->field_0048;
    }
    else {
      local_8a0 = local_8->field_0044;
    }
    puVar1 = local_8->field_01E4;
    local_8a0 = local_8a0 + 0x16;
    local_8c4[2] = 1;
    local_8c4[3] = *(undefined4 *)(param_1 + 8);
    local_8b4 = 0x19c;
    if (puVar1[0x28] != 0) {
      FUN_00710790(puVar1);
    }
    local_8b0 = *(int *)((int)puVar1 + 0x8a);
    local_8a8 = (undefined4)(0x118 / (longlong)local_8b0);
    local_808[2] = this_00->field_003C + 0x1c3;
    local_8ac = 1;
    local_888 = 2;
    local_884 = 0x6332;
    local_814 = 4;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_88c = this_00->field_0008;
    if (this_00->field_005C == 0) {
      local_808[3] = -this_00->field_0048;
    }
    else {
      local_808[3] = this_00->field_0044;
    }
    local_808[3] = local_808[3] + 0x109;
    local_7f8 = 0x11;
    local_7f4 = 0x24;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a4 = 2;
    local_7a0 = 0x8165;
    local_7a8 = local_88c;
    local_6e4 = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_6e0 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iVar3 = this_00->field_005C;
    local_700 = 1;
    local_6fc = 1;
    local_68c = 2;
    piVar5 = local_808;
    piVar6 = local_688;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    if (iVar3 == 0) {
      local_688[3] = -this_00->field_0048;
    }
    else {
      local_688[3] = this_00->field_0044;
    }
    local_688[3] = local_688[3] + 0x16;
    local_620 = 0x8164;
    local_564 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_560 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_4fc = this_00->field_003C + 0x1c3;
    local_50c = 3;
    local_508 = 1;
    local_500 = 0;
    if (this_00->field_005C == 0) {
      local_4f8 = -this_00->field_0048;
    }
    else {
      local_4f8 = this_00->field_0044;
    }
    local_4b8 = this_00->field_0008;
    local_4f8 = local_4f8 + 0x3d;
    local_4f4 = 0x11;
    local_4f0 = 0xc9;
    local_4ec = 0x15;
    local_4b4 = 2;
    local_4b0 = 0x8166;
    local_478 = 1;
    local_474 = 1;
    local_58 = 1;
    local_5c = 1;
    (**(code **)(*this_00->field_000C + 8))(8,&this_00->field_019C,0,local_8c4,0);
    iVar3 = this_00->field_019C;
    if (iVar3 != 0) {
      this_00->field_0028 = 0x20;
      this_00->field_002C = 1;
      FUN_006e6080(this_00,2,iVar3,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x220,0,local_8c4[0],
                             &DAT_007a4ccc,s_HelpPanelTy___CreateVText_007c3a0c);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(local_8c4[0],0,s_E____titans_Andrey_helppan_cpp_007c383c,0x220);
  return;
}

