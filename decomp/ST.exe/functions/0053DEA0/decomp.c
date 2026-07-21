#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::CreateBut */

undefined4 __thiscall
UPanelTy::CreateBut(UPanelTy *this,undefined4 param_1,int param_2,int param_3,int param_4,
                   byte param_5,int param_6,undefined4 param_7,undefined4 param_8,short param_9,
                   undefined2 param_10,undefined4 param_11,char *param_12,undefined4 param_13,
                   undefined4 param_14)

{
  UPanelTy *text;
  code *pcVar1;
  UPanelTy *pUVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_1d0 [4];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  short local_142;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  short local_11e;
  undefined4 local_11c;
  undefined4 local_114;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_ac;
  int local_a8;
  InternalExceptionFrame local_54;
  UPanelTy *local_10;
  undefined4 local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_c = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar3 == 0) {
    piVar6 = local_1d0;
    for (iVar3 = 0x5f; pUVar2 = local_10, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    local_1d0[1] = param_1;
    local_1d0[0] = param_2;
    if (param_6 != 0) {
      text = local_10 + 1;
      wsprintfA((LPSTR)text,"%s0",param_6);
      local_8 = cMf32::RecGet(DAT_00806790,param_5,(char *)text,(int *)0x0,1);
    }
    if ((param_5 == 1) || (param_5 == 6)) {
      local_1c0 = *(undefined4 *)(local_8 + 2);
      param_14 = *(undefined4 *)(local_8 + 4);
    }
    else {
      local_1c0 = param_13;
    }
    local_1d0[2] = pUVar2->field_003C + param_3;
    if (pUVar2->field_005C == 0) {
      local_1d0[3] = -pUVar2->field_0048;
    }
    else {
      local_1d0[3] = pUVar2->field_0044;
    }
    local_1d0[3] = local_1d0[3] + param_4;
    local_1bc = param_14;
    if (local_8 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
    }
    local_1b0 = pUVar2->field_0008;
    local_168 = param_8;
    local_c8 = 1;
    local_c4 = 1;
    local_1ac = 2;
    local_1a8 = param_7;
    local_16c = 2;
    if (param_9 != 0) {
      local_150 = 0x101;
      local_14c = 3;
      local_148 = 0x4201;
      local_144 = param_10;
      local_142 = param_9;
      local_140 = param_11;
      local_138 = 0;
      local_114 = 0;
      local_12c = 0x101;
      local_128 = 3;
      local_124 = 0x4202;
      local_120 = param_10;
      local_11e = param_9;
      local_11c = param_11;
    }
    local_170 = local_1b0;
    if (param_12 != (char *)0x0) {
      local_ac = FUN_0070aa70(DAT_00806790,param_12,0,1);
      local_a8 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,param_12,1);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)pUVar2->field_000C + 8))(2,&local_c,0,local_1d0,0);
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0xb1,0,iVar3,"%s",
                             "UPanelTy::CreateBut");
  if (iVar4 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\specpan.cpp",0xb1);
    return 0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

