
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateSlider */

void __thiscall HelpPanelTy::CreateSlider(HelpPanelTy *this,int param_1)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  int local_424 [6];
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_2f8;
  int local_2f4;
  undefined4 local_2a0;
  int local_29c [26];
  undefined4 local_234;
  undefined4 local_178;
  int local_174;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  piVar4 = local_424;
  local_8 = this;
  for (iVar2 = 0xf6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (*(uint *)(local_8 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x19c));
    }
    local_7c = *(undefined4 *)(this_00 + 8);
    local_64 = param_1;
    local_424[4] = *(int *)(this_00 + 0x3c) + 0x1c3;
    *(undefined4 *)(this_00 + 0x1c3) = 0;
    local_424[0] = 0;
    local_60 = 0;
    local_78 = 2;
    local_74 = 0x6200;
    local_424[1] = 2;
    local_424[2] = 0;
    local_424[3] = 2;
    if (*(int *)(this_00 + 0x5c) == 0) {
      local_424[5] = -*(int *)(this_00 + 0x48);
    }
    else {
      local_424[5] = *(int *)(this_00 + 0x44);
    }
    local_424[5] = local_424[5] + 0x109;
    local_40c = 0x11;
    local_408 = 0x24;
    local_30c = 500;
    local_308 = 0x32;
    local_2f8 = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_2f4 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iVar2 = *(int *)(this_00 + 0x5c);
    local_3b8 = 2;
    local_314 = 1;
    local_310 = 1;
    local_2a0 = 2;
    local_3bc = *(undefined4 *)(this_00 + 8);
    local_3b4 = 0x8165;
    piVar4 = local_424 + 2;
    piVar5 = local_29c;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (iVar2 == 0) {
      local_29c[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      local_29c[3] = *(int *)(this_00 + 0x44);
    }
    local_29c[3] = local_29c[3] + 0x16;
    local_178 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_174 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_110 = *(int *)(this_00 + 0x3c) + 0x1c3;
    local_234 = 0x8164;
    local_120 = 3;
    local_11c = 1;
    local_114 = 0;
    if (*(int *)(this_00 + 0x5c) == 0) {
      local_10c = -*(int *)(this_00 + 0x48);
    }
    else {
      local_10c = *(int *)(this_00 + 0x44);
    }
    local_10c = local_10c + 0x3d;
    local_cc = *(undefined4 *)(this_00 + 8);
    local_108 = 0x11;
    local_104 = 0xc9;
    local_100 = 0x15;
    local_c8 = 2;
    local_c4 = 0x8166;
    local_8c = 1;
    local_88 = 1;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(4,this_00 + 0x19c,0,local_424,0);
    iVar2 = *(int *)(this_00 + 0x19c);
    if ((iVar2 != 0) && (param_1 != 0)) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      *(undefined4 *)(this_00 + 0x2c) = 1;
      FUN_006e6080(this_00,2,iVar2,(undefined4 *)(this_00 + 0x18));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x1df,0,iVar2,&DAT_007a4ccc,
                             s_HelpPanelTy__CreateSlider_007c39ec);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x1df);
  return;
}

