#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::PaintUpdBut */

void __thiscall
ResearchPanelTy::PaintUpdBut(ResearchPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar6;
  ResearchPanelTy *pRVar7;
  int iVar5;
  BITMAPINFO *pBVar8;
  int iVar7;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar9;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  ResearchPanelTy *local_10;
  uint local_c;
  Global_sub_005276E0_param_1Enum *local_8;

  piVar2 = param_1->field_0018;
  local_18 = *piVar2 - this->field_003C;
  if (this->field_005C == 0) {
    local_14 = piVar2[1] - DAT_00806734;
  }
  else {
    local_14 = piVar2[1] - this->field_0044;
  }
  uVar1 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar3 = (&this->field_027A)[(byte)this->field_0278];
  if ((iVar3 == 0) || (*(uint *)(iVar3 + 0xc) <= uVar1)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (Global_sub_005276E0_param_1Enum *)
              (*(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c));
  }
  local_10 = this;
  if ((param_1->field_0014 == 0) || (local_8 == nullptr)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = (int)*(short *)((int)this->field_0188 + 0x23) - ((DAT_0080874e != '\x03') + 1);
  }
  else {
    local_c = thunk_FUN_005276e0(*local_8,(byte)((uint)*(undefined4 *)local_8 >> 0x10));
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pRVar7 = local_10;
  if (iVar5 == 0) {
    if ((local_8 == nullptr) || (local_8[8] == CASE_0)) {
      pAVar9 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_018C;
    }
    else {
      pAVar9 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_0188;
    }
    pBVar8 = FUN_0070b3a0(pAVar9,local_c);
    iVar6 = local_14;
    iVar3 = local_18;
    /* ST_CALLSITE[0053C941]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pRVar7->field_0068,local_18,local_14,'\x01',
           (byte *)pBVar8);
    if ((param_1->field_0014 == 3) && (local_8 != nullptr)) {
      pBVar8 = FUN_0070b3a0(pRVar7->field_0190,7 - (uint)(local_8[8] != CASE_0));
      /* ST_CALLSITE[0053C97A]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pRVar7->field_0068,iVar3,iVar6,'\x06',(byte *)pBVar8);
    }
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pRVar7->field_0060,0xffffffff,pRVar7->field_003C,
               pRVar7->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\research.cpp",0x88,0,iVar5,"%s",
                             "ResearchPanelTy::PaintUpdBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\research.cpp",0x88);
  return;
}

