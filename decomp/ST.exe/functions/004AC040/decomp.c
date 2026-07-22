#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::ShowCurFase */

undefined4 __thiscall STT3DSprC::ShowCurFase(STT3DSprC *this,char param_1)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_0018 == -1) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xba);
    }
    if ((param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)param_1)) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xbb);
    }
    iVar3 = param_1 * 0x24;
    if (*(int *)(&pSVar2->field_0020->field_0x0 + iVar3) == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xbc);
    }
    FUN_006ea270(pSVar2->field_003C,pSVar2->field_0018,(int)param_1,
                 *(uint *)(&pSVar2->field_0020->field_0x18 + iVar3));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0xbf,0,iVar3,"%s",
                             "STT3DSprC::ShowCurFase");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0xffffffff;
}

