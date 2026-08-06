#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::UnLoadSequence */

undefined4 __thiscall STT3DSprC::UnLoadSequence(STT3DSprC *this,byte param_1)

{
  int *slotStorage;
  STT3DSprC *pSVar2;
  int local_EAX_35;
  int iVar3;
  undefined4 uVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x58,0,local_EAX_35,
                               "%s","STT3DSprC::UnLoadSequence");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x49);
  }
  if (((char)param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x4a);
  }
  if (pSVar2->field_0020 != nullptr) {
    iVar4 = (char)param_1 * 0x24;
    if (*(int *)(&pSVar2->field_0020->field_0x0 + iVar4) != 0) {
      ST3DSMAPContext::sub_006E98E0(pSVar2->field_003C,pSVar2->field_0018,(int)(char)param_1,0,0,1);
      slotStorage = (int *)(&pSVar2->field_0020->field_0x4 + iVar4);
      pSVar2->field_001C = pSVar2->field_001C & ~(1 << (param_1 & 0x1f));
      if (*slotStorage != 0) {
        FreeAndNull(slotStorage);
      }
      if (*(int *)(&pSVar2->field_0020->field_0x8 + iVar4) != 0) {
        FreeAndNull(&pSVar2->field_0020->field_0x8 + iVar4);
      }
      *(undefined4 *)(&pSVar2->field_0020->field_0x0 + iVar4) = 0;
      (&pSVar2->field_0020->field_0xc)[iVar4] = 0;
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0xffffffff;
}

