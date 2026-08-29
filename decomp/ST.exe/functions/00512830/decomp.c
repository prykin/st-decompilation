#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateSlider

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall HelpPanelTy::CreateSlider(HelpPanelTy *this,int param_1)

{
  HelpPanelTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar6;
  int *piVar7;
  int local_424 [6];
  uint local_40c;
  uint local_408;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  ushort *local_2f8;
  int local_2f4;
  uint local_2a0;
  int local_29c [26];
  uint local_234;
  ushort *local_178;
  int local_174;
  uint local_120;
  uint local_11c;
  uint local_114;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_8c;
  uint local_88;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_64;
  uint local_60;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  piVar6 = local_424;
  local_8 = this;
  for (iVar4 = 0xf6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (local_8->field_019C != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_019C);
    }
    local_7c = this_00->field_0008;
    local_64 = param_1;
    local_424[4] = this_00->field_003C + 0x1c3;
    this_00->field_01C3 = 0;
    local_424[0] = 0;
    local_60 = 0;
    local_78 = 2;
    local_74 = 0x6200;
    local_424[1] = 2;
    local_424[2] = 0;
    local_424[3] = 2;
    if (this_00->field_005C == 0) {
      local_424[5] = -this_00->field_0048;
    }
    else {
      local_424[5] = this_00->field_0044;
    }
    local_424[5] = local_424[5] + 0x109;
    local_40c = 0x11;
    local_408 = 0x24;
    local_30c = 500;
    local_308 = 0x32;
    local_2f8 = FUN_0070aa70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_2f4 = Library::Ourlib::MFIMG::mfImgGetWidth(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
    iVar4 = this_00->field_005C;
    local_3b8 = 2;
    local_314 = 1;
    local_310 = 1;
    local_2a0 = 2;
    local_3bc = this_00->field_0008;
    local_3b4 = 0x8165;
    piVar6 = local_424 + 2;
    piVar7 = local_29c;
    memmove(piVar7, piVar6, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar4 == 0) {
      local_29c[3] = -this_00->field_0048;
    }
    else {
      local_29c[3] = this_00->field_0044;
    }
    local_29c[3] = local_29c[3] + 0x16;
    local_178 = FUN_0070aa70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_174 = Library::Ourlib::MFIMG::mfImgGetWidth(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
    local_110 = this_00->field_003C + 0x1c3;
    local_234 = 0x8164;
    local_120 = 3;
    local_11c = 1;
    local_114 = 0;
    if (this_00->field_005C == 0) {
      local_10c = -this_00->field_0048;
    }
    else {
      local_10c = this_00->field_0044;
    }
    local_10c = local_10c + 0x3d;
    local_cc = this_00->field_0008;
    local_108 = 0x11;
    local_104 = 0xc9;
    local_100 = 0x15;
    local_c8 = 2;
    local_c4 = 0x8166;
    local_8c = 1;
    local_88 = 1;
    /* ST_CALLSITE[00512A98]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,&this_00->field_019C,nullptr,local_424,0);
    iVar4 = this_00->field_019C;
    if ((iVar4 != 0) && (param_1 != 0)) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      FUN_006e6080(this_00,2,iVar4,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x1df,0,iVar2,"%s",
                             "HelpPanelTy::CreateSlider");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\helppan.cpp",0x1df);
  return;
}

