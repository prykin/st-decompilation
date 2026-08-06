#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::Init

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0057F580 -> 004AD1F0 @ 0057F632; STDcResourcC::Init this; stable alias EBX

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0041E530 -> 004AD1F0 @ 0041E9D5; data at 008073CC | 0041E530 -> 004AD1F0 @ 0041EA40;
   data at 008073CC | 004B9FA0 -> 004AD1F0 @ 004BAA63; data at 008073CC | 004B9FA0 -> 004AD1F0 @
   004BAB7D; data at 008073CC | 004C6210 -> 004AD1F0 @ 004C6275; data at 008073CC | 004C6210 ->
   004AD1F0 @ 004C62CC; data at 008073CC | 004CC220 -> 004AD1F0 @ 004CC2B1; data at 008073CC |
   004D01F0 -> 004AD1F0 @ 004D0241; data at 008073CC | 004D11D0 -> 004AD1F0 @ 004D18FC; data at
   008073CC | 004D11D0 -> 004AD1F0 @ 004D1A31; data at 008073CC | 004D11D0 -> 004AD1F0 @ 004D1B45;
   data at 008073CC | 004D11D0 -> 004AD1F0 @ 004D2153; data at 008073CC | 004D9000 -> 004AD1F0 @
   004D904B; data at 008073CC | 004D9C80 -> 004AD1F0 @ 004D9CD0; data at 008073CC | 004DCE00 ->
   004AD1F0 @ 004DCE50; data at 008073CC | 004EAA20 -> 004AD1F0 @ 004EAA70; data at 008073CC |
   004EC050 -> 004AD1F0 @ 004EC097; data at 008073CC | 004ECEA0 -> 004AD1F0 @ 004ECEEB; data at
   008073CC | 0057F580 -> 004AD1F0 @ 0057F632; data at 008073CC | 005FDB50 -> 004AD1F0 @ 005FDEC3;
   data at 008073CC | 006132F0 -> 004AD1F0 @ 0061337D; data at 008073CC | 0062F3B0 -> 004AD1F0 @
   0062F4D9; data at 008073CC */

undefined4 __thiscall
STT3DSprC::Init(STT3DSprC *this,ushort *param_1,uint param_2,uint param_3,STDcResourcC *param_4,
               uint param_5,uint param_6,uint param_7)

{
  STT3DSprC *pSVar2;
  int local_EAX_34;
  AnonPointee_STT3DSprC_0020 *pAVar3;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  local_EAX_34 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (local_EAX_34 == 0) {
    local_8->field_0034 = param_1;
    local_8->field_0008 = param_3;
    local_8->field_0004 = param_2;
    local_8->field_0014 = param_7;
    ST3DSMAPContext::sub_006E8660
              (local_8->field_003C,(int *)&local_8->field_0018,param_7,0,param_5,param_6,param_2,
               param_3,(uint)param_4);
    pAVar3 = Library::DKW::LIB::MemAlloc(pSVar2->field_0014 * 0x24);
    pSVar2->field_0020 = pAVar3;
    for (uVar5 = pSVar2->field_0014 * 9 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pAVar3 = 0;
      pAVar3 = (AnonPointee_STT3DSprC_0020 *)&pAVar3->field_0x4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)pAVar3 = 0;
      pAVar3 = (AnonPointee_STT3DSprC_0020 *)&pAVar3->field_0x1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x2b1,0,local_EAX_34,
                             "%s","STT3DSprC::Init");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0xffffffff;
}

