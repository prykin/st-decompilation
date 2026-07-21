#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::PaintWait */

void __thiscall WaitTy::PaintWait(WaitTy *this,char param_1)

{
  code *pcVar1;
  WaitTy *pWVar2;
  int errorCode;
  uint *puVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX;
  undefined4 *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *this_01;
  StartServTy *this_02;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  undefined4 uVar8;
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
    uVar8 = 0;
    pcVar7 = PTR_0081176c->field_0030;
    uVar6 = 0xffffffff;
    uVar5 = 0xfffffffe;
    puVar3 = (uint *)LoadResourceString(0x26ae,HINSTANCE_00807618);
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pcVar7,uVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0xeb,0,errorCode,
                             "%s","WaitTy::PaintWait");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\wait_obj.cpp",0xeb);
  return;
}

