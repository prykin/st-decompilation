#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::PaintBldBut */

void __thiscall
BldObjPanelTy::PaintBldBut(BldObjPanelTy *this,RecoveredRecordView_004EF320_A54422CD *param_1)

{
  uint uVar1;
  int *piVar2;
  BldObjPanelTy *pBVar4;
  int iVar5;
  int iVar6;
  int errorCode;
  BITMAPINFO *pBVar7;
  int iVar7;
  RecoveredGlobalRecordView_0081175C *pRVar8;
  InternalExceptionFrame local_5c;
  int local_18;
  BldObjPanelTy *local_14;
  int local_10;
  BITMAPINFO *local_c;
  Global_sub_00526BA0_param_1Enum *local_8;

  piVar2 = param_1->field_0018;
  local_18 = *piVar2 - this->field_003C;
  if (this->field_005C == 0) {
    local_10 = piVar2[1] - DAT_00806734;
  }
  else {
    local_10 = piVar2[1] - this->field_0044;
  }
  uVar1 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar6 = (&this->field_027E)[(byte)this->field_0278];
  if ((iVar6 == 0) || (STField<uint>(iVar6,0xC) <= uVar1)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (STField<int>(iVar6,0x8) * uVar1 + STField<int>(iVar6,0x1C));
  }
  local_14 = this;
  if ((param_1->field_0014 == 0) || (local_8 == nullptr)) {
    local_c = (BITMAPINFO *)this->field_027A;
  }
  else {
    if ((char)local_8[2] == 0) {
      pRVar8 = (RecoveredGlobalRecordView_0081175C *)this->field_018C;
    }
    else {
      pRVar8 = (RecoveredGlobalRecordView_0081175C *)this->field_0188;
    }

    iVar6 = thunk_FUN_00526ba0(*local_8,STField<byte>(local_8,9));
    local_c = FUN_0070b3a0(pRVar8,iVar6);
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;

  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  iVar5 = local_10;
  pBVar4 = local_14;
  iVar6 = local_18;
  if (errorCode == 0) {
    /* ST_CALLSITE[004F0F56]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_18,local_10,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_c);
    if ((param_1->field_0014 == 3) && (local_8 != nullptr)) {
      /* ST_CALLSITE[004F0F81]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7 = FUN_0070b3a0(pBVar4->field_0190,9 - (uint)((char)local_8[2] != 0));
      /* ST_CALLSITE[004F0F8F]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pBVar4->field_0068,iVar6,iVar5,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7);
    }

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pBVar4->field_0060,0xffffffff,pBVar4->field_003C,
               pBVar4->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;

  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\bldobj.cpp",0x92,0,errorCode,"%s"
                             ,"BldObjPanelTy::PaintBldBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\bldobj.cpp",0x92);
  return;
}

