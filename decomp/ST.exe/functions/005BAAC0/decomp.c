#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::SetMode */

void __thiscall PrividerTy::SetMode(PrividerTy *this,char param_1,char param_2)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  PrividerTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_264;
  undefined4 local_257;
  undefined4 local_253;
  undefined4 local_24f;
  undefined4 local_23d;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_216;
  undefined4 local_209;
  undefined4 local_205;
  undefined4 local_201;
  undefined4 local_1a1;
  undefined1 local_19d;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_17a;
  undefined1 local_176;
  undefined4 local_16d;
  undefined4 local_169;
  undefined4 local_165;
  undefined4 local_153;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_68 [7];
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    puVar5 = &local_264;
    for (iVar3 = 0x7e; this_00 = local_8, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    this_00->field_1A5F = param_1;
    *(undefined1 *)((int)puVar5 + 2) = 0;
    if (param_1 == '\x01') {
      local_1a1 = 0x2340;
      if ((this_00->field_0065 != CASE_5) || (local_19d = 0, this_00->field_1A72 != '\0')) {
        local_19d = 1;
      }
      local_194 = this_00->field_0008;
      local_190 = 2;
      local_18c = 0x6943;
    }
    local_17a = 0x24bc;
    if ((this_00->field_0065 != CASE_5) || (local_176 = 0, this_00->field_1A72 != '\0')) {
      local_176 = 1;
    }
    local_230 = this_00->field_0008;
    local_169 = 2;
    local_165 = 0x6952;
    if (param_1 == '\x01') {
      local_23d = 0x2357;
      local_228 = 0x694e;
      local_216 = 0x2616;
      local_201 = 0x64ff;
    }
    else {
      local_264 = 0x2617;
      local_253 = 2;
      local_24f = 0x6501;
      local_23d = 0x2618;
      local_228 = 0x6502;
      local_216 = 0x233e;
      local_201 = 0x6949;
      local_153 = 0x2619;
      local_142 = 2;
      local_13e = 0x6951;
      local_257 = local_230;
      local_146 = local_230;
    }
    local_205 = 2;
    local_22c = 2;
    pSVar1 = this_00->field_1A5B;
    local_209 = local_230;
    local_16d = local_230;
    if (pSVar1->field_02E6 != (MMsgTy *)0x0) {
      puVar5 = local_68;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0xffff;
      MMsgTy::SetPanel(pSVar1->field_02E6,0,(int)&local_264,0,0);
      MMsgTy::StatePanel(this_00->field_1A5B->field_02E6,(int)local_68);
    }
    PaintPrivider(this_00,param_2);
    this_00->field_0065 = CASE_3;
    thunk_FUN_00568bc0(&g_sound,0);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((DAT_00807300._1_1_ & 8) != 0) {
      thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
    }
    thunk_FUN_005b6730(this_00,0xb,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x11e,0,iVar3,"%s",
                             "PrividerTy::SetMode");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\prov_obj.cpp",0x11e);
  return;
}

