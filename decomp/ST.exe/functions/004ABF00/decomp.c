#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurShad

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00623170 -> 004ABF00 @ 006232E4 | 00623600 -> 004ABF00 @ 00623867 */

undefined4 __thiscall STT3DSprC::SetCurShad(STT3DSprC *this,char param_1,uint param_2)

{
  STT3DSprC *pSVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar1 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0xac,0,iVar2,"%s",
                               "STT3DSprC::SetCurShad");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == -1) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xa5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(&pSVar1->field_0020->field_0x0 + param_1 * 0x24) + 0x29) != 0) {
    pSVar1->field_0013 = param_1;
    pSVar1->field_0030 = param_2;
    if (pSVar1->field_0011 == '\0') {
      if (pSVar1->field_0010 == '\0') {
        uVar5 = pSVar1->field_0034;
        uVar4 = pSVar1->field_0018;
        pcVar6 = thunk_FUN_004ad6c0;
      }
      else {
        uVar5 = pSVar1->field_0034;
        uVar4 = pSVar1->field_0018;
        pcVar6 = thunk_FUN_004ad740;
      }
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                (pSVar1->field_003C,uVar4,uVar5,(uint)pcVar6,(uint)pSVar1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

