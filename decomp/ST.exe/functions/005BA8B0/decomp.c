#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::PaintPrivider */

void __thiscall PrividerTy::PaintPrivider(PrividerTy *this,char param_1)

{
  code *pcVar1;
  PrividerTy *pPVar2;
  int errorCode;
  uint *puVar3;
  int iVar4;
  MMMObjTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  undefined4 uVar8;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0xec,0,errorCode,
                               "%s","PrividerTy::PaintPrivider");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0xec);
    return;
  }
  FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  PutDDX(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
  pPVar2 = local_8;
  if ((local_8->field_1C96 == (HoloTy *)0x0) && (param_1 == '\0')) {
    MMMObjTy::OutLstProc
              (this_00,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x79,0x51,0x22e,0x145,(int)local_8);
  }
  uVar8 = 0;
  pcVar7 = g_startSystem_0081176C->field_0030;
  uVar6 = 0xffffffff;
  uVar5 = 0xfffffffe;
  if (pPVar2->field_1A5F == '\x01') {
    puVar3 = (uint *)LoadResourceString(0x26b4,g_module_00807618);
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pcVar7,uVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  puVar3 = (uint *)LoadResourceString(0x26b3,g_module_00807618);
  StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pcVar7,uVar8);
  if ((pPVar2->field_1C9A == (HoloTy *)0x0) && (param_1 == '\0')) {
    MMMObjTy::OutEdProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x79,0x197,0x22e,0x2e,
                        &pPVar2->field_1A5B->field_0140);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

