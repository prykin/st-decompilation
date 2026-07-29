#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::PaintUpdBut */

void __thiscall BldLabPanelTy::PaintUpdBut(BldLabPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  uint uVar1;
  int *piVar2;
  BldLabPanelTy_field_027ADArray *pBVar3;
  code *pcVar4;
  BldLabPanelTy *pBVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar9;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  BldLabPanelTy *local_10;
  uint local_c;
  BldLabPanelTy_field_027AElement *local_8;
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
  if ((pBVar3 == (BldLabPanelTy_field_027ADArray *)0x0) || (pBVar3->count <= uVar1)) {
    local_8 = (BldLabPanelTy_field_027AElement *)0x0;
  }
  else {
    element_027a = DArrayAt<BldLabPanelTy_field_027AElement>(pBVar3, uVar1);
  }
  local_10 = this;
  if ((param_1->field_0014 == 0) || (element_027a == (BldLabPanelTy_field_027AElement *)0x0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = (int)*(short *)((int)this->field_0188 + 0x23) - 1;
  }
  else {
    local_c = thunk_FUN_00526ba0(element_027a->field_0000,'\x03');
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pBVar5 = local_10;
  if (iVar6 == 0) {
    if ((element_027a == (BldLabPanelTy_field_027AElement *)0x0) || ((char)element_027a->field_0008 == '\0'))
    {
      pAVar9 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_018C;
    }
    else {
      pAVar9 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_0188;
    }
    pbVar7 = (byte *)FUN_0070b3a0(pAVar9,local_c);
    iVar8 = local_14;
    iVar6 = local_18;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pBVar5->field_0068,local_18,local_14,'\x01',pbVar7);
    if ((param_1->field_0014 == 3) && (element_027a != (BldLabPanelTy_field_027AElement *)0x0)) {
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pBVar5->field_0190,
                                    9 - (uint)((char)element_027a->field_0008 != '\0'));
      DibPut((AnonShape_006B5B10_E0D06CF1 *)pBVar5->field_0068,iVar6,iVar8,'\x06',pbVar7);
    }
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pBVar5->field_0060,0xffffffff,pBVar5->field_003C,
               pBVar5->field_0044);
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

