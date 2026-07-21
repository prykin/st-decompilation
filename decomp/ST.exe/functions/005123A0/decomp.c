
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateList */

void __thiscall HelpPanelTy::CreateList(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  int *piVar6;
  int local_520 [4];
  undefined4 local_510;
  undefined4 local_50c;
  dword local_508;
  undefined4 local_504;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_3f4;
  int local_3f0 [4];
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2cc;
  int local_2c8;
  undefined4 local_274;
  int local_270 [26];
  undefined4 local_208;
  undefined4 local_14c;
  int local_148;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_60;
  undefined4 local_5c;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  piVar5 = local_520;
  local_8 = this;
  for (iVar3 = 0x135; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_019C != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_019C);
    }
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
    local_520[0] = 0;
    local_520[2] = this_00->field_003C + 0x21;
    if (this_00->field_005C == 0) {
      local_520[3] = -this_00->field_0048;
    }
    else {
      local_520[3] = this_00->field_0044;
    }
    local_520[3] = local_520[3] + 0x16;
    local_510 = 0x19c;
    local_50c = 0x118;
    if (this_00->field_01A1 == 0) {
      pDVar2 = (DArrayTy *)this_00->field_01B3;
    }
    else {
      pDVar2 = this_00->field_01BB;
    }
    local_508 = pDVar2->count;
    local_504 = 0;
    local_4f8 = this_00->field_0008;
    local_3f0[0] = 0;
    local_3f0[2] = this_00->field_003C + 0x1c3;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b4 = 2;
    local_4b0 = 0x8162;
    local_494 = 2;
    local_490 = 0x8163;
    local_3f4 = 2;
    local_3f0[1] = 2;
    local_2e8 = 1;
    local_2e4 = 1;
    if (this_00->field_005C == 0) {
      local_3f0[3] = -this_00->field_0048;
    }
    else {
      local_3f0[3] = this_00->field_0044;
    }
    local_3f0[3] = local_3f0[3] + 0x16;
    local_3e0 = 0x11;
    local_3dc = 0x24;
    local_4d8 = local_4f8;
    local_4b8 = local_4f8;
    local_498 = local_4f8;
    local_2cc = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_2c8 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_390 = this_00->field_0008;
    iVar3 = this_00->field_005C;
    local_38c = 2;
    local_274 = 2;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_388 = 0x8164;
    piVar5 = local_3f0;
    piVar6 = local_270;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    if (iVar3 == 0) {
      local_270[3] = -this_00->field_0048;
    }
    else {
      local_270[3] = this_00->field_0044;
    }
    local_270[3] = local_270[3] + 0x109;
    local_14c = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_148 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    local_e4 = this_00->field_003C + 0x1c3;
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    if (this_00->field_005C == 0) {
      local_e0 = -this_00->field_0048;
    }
    else {
      local_e0 = this_00->field_0044;
    }
    local_a0 = this_00->field_0008;
    local_e0 = local_e0 + 0x3d;
    local_dc = 0x11;
    local_d8 = 0xc9;
    local_d4 = 0x15;
    local_9c = 2;
    local_98 = 0x8166;
    local_60 = 1;
    local_5c = 1;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_019C,(int *)0x0,local_520,0);
    iVar3 = this_00->field_019C;
    if (iVar3 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      FUN_006e6080(this_00,2,iVar3,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x1a5,0,iVar3,&DAT_007a4ccc,
                             s_HelpPanelTy__CreateList_007c39b8);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x1a5);
  return;
}

