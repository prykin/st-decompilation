#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::PaintWait */

void __thiscall WaitTy::PaintWait(WaitTy *this,char param_1)

{
  code *pcVar1;
  WaitTy *pWVar2;
  int errorCode;
  uint *resourceString;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX;
  undefined4 *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *this_01;
  StartServTy *this_02;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    pWVar2 = local_8;
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_01 = extraout_ECX;
    if ((pWVar2->field_1AF8 == (HoloTy *)0x0) && (param_1 == '\0')) {
      this_00 = &pWVar2->field_1A5B->field_0140;
      MMMObjTy::OutRGlProc((MMMObjTy *)this_00,(int)DAT_0080759c,0,0,0x112,0x38,0x204,0x19d,this_00)
      ;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_00;
    }
    if (((pWVar2->field_1B00 == (HoloTy *)0x0) && (param_1 == '\0')) ||
       ((param_1 != '\0' && ((pWVar2->field_1A64 != 0 && (pWVar2->field_1A68 == 0)))))) {
      MMMObjTy::OutBSlProc
                (DAT_0080759c,(int)DAT_0080759c,(MMMObjTy *)0x0,0,10,0xb4,0xf9,0x121,
                 &pWVar2->field_1A5B->field_0140);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_01;
    }
    if (((pWVar2->field_1AFC == (HoloTy *)0x0) && (param_1 == '\0')) ||
       ((param_1 != '\0' && (pWVar2->field_1A64 != 0)))) {
      ChatGlassTy::OutChGlProc
                (this_01,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,&pWVar2->field_1A5B->field_0140);
    }
    uVar7 = 0;
    pcVar6 = g_startSystem_0081176C->field_0030;
    uVar5 = 0xffffffff;
    uVar4 = 0xfffffffe;
    resourceString = (uint *)LoadResourceString(0x26ae,g_module_00807618);
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,resourceString,uVar4,uVar5,pcVar6,uVar7);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0xeb,0,errorCode,
                             "%s","WaitTy::PaintWait");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\wait_obj.cpp",0xeb);
  return;
}

