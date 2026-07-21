#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::UnLoadSequence */

undefined4 __thiscall STT3DSprC::UnLoadSequence(STT3DSprC *this,byte param_1)

{
  void **value;
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
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x58,0,iVar3,&DAT_007a4ccc,
                               s_STT3DSprC__UnLoadSequence_007ac65c);
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == -1) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tspr3d_cpp_007ac638,0x49);
  }
  if (((char)param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tspr3d_cpp_007ac638,0x4a);
  }
  if (pSVar2->field_0020 != 0) {
    iVar3 = (char)param_1 * 0x24;
    if (*(int *)(iVar3 + pSVar2->field_0020) != 0) {
      FUN_006e98e0((void *)pSVar2->field_003C,pSVar2->field_0018,(int)(char)param_1,0,0,1);
      value = (void **)(pSVar2->field_0020 + 4 + iVar3);
      pSVar2->field_001C = pSVar2->field_001C & ~(1 << (param_1 & 0x1f));
      if (*value != (void *)0x0) {
        FreeAndNull(value);
      }
      if (*(int *)(pSVar2->field_0020 + 8 + iVar3) != 0) {
        FreeAndNull((void **)(pSVar2->field_0020 + 8 + iVar3));
      }
      *(undefined4 *)(pSVar2->field_0020 + iVar3) = 0;
      *(undefined1 *)(pSVar2->field_0020 + 0xc + iVar3) = 0;
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0xffffffff;
}

