#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurShad

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00623170 -> 004ABF00 @ 006232E4 | 00623600 -> 004ABF00 @ 00623867 */

undefined4 __thiscall STT3DSprC::SetCurShad(STT3DSprC *this,char param_1,uint param_2)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0xac,0,iVar3,"%s",
                               "STT3DSprC::SetCurShad");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xa5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(pSVar2->field_0020 + param_1 * 0x24) + 0x29) != 0) {
    pSVar2->field_0013 = param_1;
    pSVar2->field_0030 = param_2;
    if (pSVar2->field_0011 == '\0') {
      if (pSVar2->field_0010 == '\0') {
        uVar6 = pSVar2->field_0034;
        uVar5 = pSVar2->field_0018;
        puVar7 = &LAB_00404999;
      }
      else {
        uVar6 = pSVar2->field_0034;
        uVar5 = pSVar2->field_0018;
        puVar7 = &LAB_00405b64;
      }
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                (pSVar2->field_003C,uVar5,uVar6,(uint)puVar7,(uint)pSVar2);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

