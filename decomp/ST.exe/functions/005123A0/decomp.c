
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateList */

void __thiscall HelpPanelTy::CreateList(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  int local_520 [4];
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
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
  
  piVar4 = local_520;
  local_8 = this;
  for (iVar2 = 0x135; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (*(uint *)(local_8 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x19c));
    }
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x1dc),0,0x21,0x16,
               0x19c,0x118);
    local_520[0] = 0;
    local_520[2] = *(int *)(this_00 + 0x3c) + 0x21;
    if (*(int *)(this_00 + 0x5c) == 0) {
      local_520[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      local_520[3] = *(int *)(this_00 + 0x44);
    }
    local_520[3] = local_520[3] + 0x16;
    local_510 = 0x19c;
    local_50c = 0x118;
    if (this_00[0x1a1] == (HelpPanelTy)0x0) {
      iVar2 = *(int *)(this_00 + 0x1b3);
    }
    else {
      iVar2 = *(int *)(this_00 + 0x1bb);
    }
    local_508 = *(undefined4 *)(iVar2 + 0xc);
    local_504 = 0;
    local_4f8 = *(undefined4 *)(this_00 + 8);
    local_3f0[0] = 0;
    local_3f0[2] = *(int *)(this_00 + 0x3c) + 0x1c3;
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
    if (*(int *)(this_00 + 0x5c) == 0) {
      local_3f0[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      local_3f0[3] = *(int *)(this_00 + 0x44);
    }
    local_3f0[3] = local_3f0[3] + 0x16;
    local_3e0 = 0x11;
    local_3dc = 0x24;
    local_4d8 = local_4f8;
    local_4b8 = local_4f8;
    local_498 = local_4f8;
    local_2cc = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_2c8 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_390 = *(undefined4 *)(this_00 + 8);
    iVar2 = *(int *)(this_00 + 0x5c);
    local_38c = 2;
    local_274 = 2;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_388 = 0x8164;
    piVar4 = local_3f0;
    piVar5 = local_270;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (iVar2 == 0) {
      local_270[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      local_270[3] = *(int *)(this_00 + 0x44);
    }
    local_270[3] = local_270[3] + 0x109;
    local_14c = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_148 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    local_e4 = *(int *)(this_00 + 0x3c) + 0x1c3;
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    if (*(int *)(this_00 + 0x5c) == 0) {
      local_e0 = -*(int *)(this_00 + 0x48);
    }
    else {
      local_e0 = *(int *)(this_00 + 0x44);
    }
    local_a0 = *(undefined4 *)(this_00 + 8);
    local_e0 = local_e0 + 0x3d;
    local_dc = 0x11;
    local_d8 = 0xc9;
    local_d4 = 0x15;
    local_9c = 2;
    local_98 = 0x8166;
    local_60 = 1;
    local_5c = 1;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(7,this_00 + 0x19c,0,local_520,0);
    iVar2 = *(int *)(this_00 + 0x19c);
    if (iVar2 != 0) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      *(undefined4 *)(this_00 + 0x2c) = 1;
      FUN_006e6080(this_00,2,iVar2,(undefined4 *)(this_00 + 0x18));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x1a5,0,iVar2,&DAT_007a4ccc,
                             s_HelpPanelTy__CreateList_007c39b8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x1a5);
  return;
}

