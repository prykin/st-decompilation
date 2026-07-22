#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::Init */

undefined4 __thiscall
STT3DSprC::Init(STT3DSprC *this,undefined4 param_1,uint param_2,uint param_3,uint param_4,
               uint param_5,uint param_6,uint param_7)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  AnonPointee_STT3DSprC_0020 *pAVar4;
  undefined4 uVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    local_8->field_0034 = param_1;
    local_8->field_0008 = param_3;
    local_8->field_0004 = param_2;
    local_8->field_0014 = param_7;
    FUN_006e8660(local_8->field_003C,&local_8->field_0018,param_7,0,param_5,param_6,param_2,param_3,
                 param_4);
    pAVar4 = (AnonPointee_STT3DSprC_0020 *)
             Library::DKW::LIB::FUN_006aac70(pSVar2->field_0014 * 0x24);
    pSVar2->field_0020 = pAVar4;
    for (uVar6 = pSVar2->field_0014 * 9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pAVar4 = 0;
      pAVar4 = (AnonPointee_STT3DSprC_0020 *)&pAVar4->field_0x4;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)pAVar4 = 0;
      pAVar4 = (AnonPointee_STT3DSprC_0020 *)&pAVar4->field_0x1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x2b1,0,iVar3,"%s",
                             "STT3DSprC::Init");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0xffffffff;
}

