#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::PaintBBut
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004EE3BE MOV EAX,dword ptr [EBP + 0x10];
   first-use mask */

void __thiscall
BehPanelTy::PaintBBut
          (BehPanelTy *this,AnonShape_004EE350_18D491EA *param_1,char *param_2,byte param_3)

{
  AnonNested_004EE350_0018_78690378 *pAVar1;
  BehPanelTy *pBVar3;
  int *errorCode;
  LPSTR text;
  int iVar4;
  InternalExceptionFrame local_58;
  BehPanelTy *local_14;
  int local_10;
  int local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;

  local_8 = nullptr;
  pAVar1 = param_1->field_0018;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 - DAT_00806734;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  errorCode = STPointerBoundaryCast<int *>(Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0));
  if (errorCode == nullptr) {
    iVar4 = 1;
    text = FUN_006f2c00(param_2,1,(uint)param_3);
    /* ST_CALLSITE[004EE3DB]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
    local_8 = cMf32::RecGet(g_cMf32_00806790,1,text,errorCode,iVar4);
    pBVar3 = local_14;
    /* ST_CALLSITE[004EE3F5]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,'\x01',local_8);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pBVar3->field_0060,0xffffffff,pBVar3->field_003C,
               pBVar3->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\behpanel.cpp",0xc5,0,(int)errorCode,
                             "%s","BehPanelTy::PaintBBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\behpanel.cpp",0xc5);
  return;
}

