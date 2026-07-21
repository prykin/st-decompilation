#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::PaintUpdBut */

void __thiscall
ResearchPanelTy::PaintUpdBut(ResearchPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  ResearchPanelTy *pRVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar8;
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
  iVar5 = (&this->field_027A)[(byte)this->field_0278];
  if ((iVar5 == 0) || (*(uint *)(iVar5 + 0xc) <= uVar1)) {
    local_8 = (Global_sub_005276E0_param_1Enum *)0x0;
  }
  else {
    local_8 = (Global_sub_005276E0_param_1Enum *)
              (*(int *)(iVar5 + 8) * uVar1 + *(int *)(iVar5 + 0x1c));
  }
  local_10 = this;
  if ((param_1->field_0014 == 0) || (local_8 == (Global_sub_005276E0_param_1Enum *)0x0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = (int)*(short *)(this->field_0188 + 0x23) - ((DAT_0080874e != '\x03') + 1);
  }
  else {
    local_c = thunk_FUN_005276e0(*local_8,(byte)((uint)*(undefined4 *)local_8 >> 0x10));
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pRVar4 = local_10;
  if (iVar5 == 0) {
    if ((local_8 == (Global_sub_005276E0_param_1Enum *)0x0) || (local_8[8] == ~(CASE_80|CASE_7F))) {
      pAVar8 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_018C;
    }
    else {
      pAVar8 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_0188;
    }
    pbVar6 = (byte *)FUN_0070b3a0(pAVar8,local_c);
    iVar7 = local_14;
    iVar5 = local_18;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pRVar4->field_0068,local_18,local_14,'\x01',pbVar6);
    if ((param_1->field_0014 == 3) && (local_8 != (Global_sub_005276E0_param_1Enum *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pRVar4->field_0190,
                                    7 - (uint)(local_8[8] != ~(CASE_80|CASE_7F)));
      DibPut((AnonShape_006B5B10_E0D06CF1 *)pRVar4->field_0068,iVar5,iVar7,'\x06',pbVar6);
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pRVar4->field_0060,0xffffffff,pRVar4->field_003C,pRVar4->field_0044);
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

