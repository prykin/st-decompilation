#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::PaintUpdBut */

void __thiscall
BldLabPanelTy::PaintUpdBut(BldLabPanelTy *this,RecoveredRecordView_004EF320_A54422CD *param_1)

{
  uint uVar1;
  int *piVar2;
  BldLabPanelTy_field_027ADArray *pBVar3;
  int iVar5;
  int iVar7;
  BldLabPanelTy *pBVar8;
  int iVar6;
  BITMAPINFO *pBVar9;
  int iVar8;
  RecoveredGlobalRecordView_0081175C *pRVar10;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  BldLabPanelTy *local_10;
  int local_c;
  Global_sub_00526BA0_param_1Enum *pGStack_8;
  BldLabPanelTy_field_027AElement *element_027a;

  piVar2 = param_1->field_0018;
  local_18 = *piVar2 - this->field_003C;
  if (this->field_005C == 0) {
    local_14 = piVar2[1] - DAT_00806734;
  }
  else {
    local_14 = piVar2[1] - this->field_0044;
  }
  uVar1 = this->field_0199 + -0xc0af + param_1->field_0010;
  pBVar3 = this->field_027A;
  if ((pBVar3 == nullptr) || (pBVar3->count <= uVar1)) {
    pGStack_8 = nullptr;
  }
  else {
    element_027a = DArrayAt<BldLabPanelTy_field_027AElement>(pBVar3, uVar1);
  }
  local_10 = this;
  if ((param_1->field_0014 == 0) || (element_027a == nullptr)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = *(short *)((int)this->field_0188 + 0x23) + -1;
  }
  else {

    local_c = thunk_FUN_00526ba0(element_027a->field_0000,'\x03');
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;

  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pBVar8 = local_10;
  if (iVar6 == 0) {
    if ((element_027a == nullptr) || ((char)element_027a->field_0008 == 0)) {
      pRVar10 = (RecoveredGlobalRecordView_0081175C *)local_10->field_018C;
    }
    else {
      pRVar10 = (RecoveredGlobalRecordView_0081175C *)local_10->field_0188;
    }
    /* ST_CALLSITE[004F00CD]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar9 = FUN_0070b3a0(pRVar10,local_c);
    iVar7 = local_14;
    iVar5 = local_18;
    /* ST_CALLSITE[004F00E4]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pBVar8->field_0068,local_18,local_14,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar9);
    if ((param_1->field_0014 == 3) && (element_027a != nullptr)) {
      /* ST_CALLSITE[004F010F]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar9 = FUN_0070b3a0(pBVar8->field_0190,9 - (uint)((char)element_027a->field_0008 != 0));
      /* ST_CALLSITE[004F011D]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pBVar8->field_0068,iVar5,iVar7,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar9);
    }

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pBVar8->field_0060,0xffffffff,pBVar8->field_003C,
               pBVar8->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;

  iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\bldlab.cpp",0x66,0,iVar6,"%s",
                             "BldLabPanelTy::PaintUpdBut");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\bldlab.cpp",0x66);
  return;
}

