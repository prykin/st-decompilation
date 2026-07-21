#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::GetMessage */

undefined4 __thiscall
ResearchPanelTy::GetMessage(ResearchPanelTy *this,AnonShape_0053CA80_7575DBCB *param_1)

{
  uint uVar1;
  code *pcVar2;
  ProdPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_58;
  uint local_14;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  ProdPanelTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = (ProdPanelTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_research_cpp_007c76c8,200,0,iVar3,&DAT_007a4ccc,
                               s_ResearchPanelTy__GetMessage_007c7774);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_research_cpp_007c76c8,200);
    return 0xffff;
  }
  iVar3 = 2;
  if (param_1->field_0010 == 2) {
    ProdPanelTy::PreInitProdPanel(local_8);
  }
  ProdPanelTy::GetMessage(this_00,(int)param_1);
  uVar1 = param_1->field_0010;
  if (uVar1 < 0xc0a4) {
    if (uVar1 < 0xc09f) {
      if (uVar1 == 2) {
        InitResearchPanel((ResearchPanelTy *)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (uVar1 == 3) {
        puVar7 = (undefined4 *)&this_00[1].field_0xd5;
        do {
          if ((DArrayTy *)*puVar7 != (DArrayTy *)0x0) {
            DArrayDestroy((DArrayTy *)*puVar7);
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (*(uint *)&this_00[1].field_0xdd != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,*(uint *)&this_00[1].field_0xdd);
        }
        *(undefined4 *)&this_00[1].field_0xdd = 0;
        g_prodPanel_008016E8 = (ProdPanelTy *)0x0;
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (uVar1 == 0xb207) {
        this_00[1].field_0xd4 = this_00[1].field_0xd3;
        this_00[1].field_0xd3 = *(char *)param_1->field_0014 + -1;
        thunk_FUN_005252c0(0xae);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_00->field_0000 + 0x1c))();
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else {
      iVar3 = *(int *)(&this_00[1].field_0xd5 + (uint)(byte)this_00[1].field_0xd3 * 4);
      if ((iVar3 == 0) ||
         (iVar4 = uVar1 + *(int *)&this_00->field_0x199, *(uint *)(iVar3 + 0xc) <= iVar4 - 0xc09fU))
      {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)((iVar4 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
      }
      if ((puVar5 != (undefined1 *)0x0) && (puVar5[8] != '\0')) {
        uStack_d = 0;
        local_c = 0;
        local_a = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = (uint)CONCAT11(*puVar5,2);
        local_10 = 0;
        uStack_f = 1;
        thunk_FUN_0054edf0((undefined4 *)0x1e,&local_14,0,0xffffffff);
        ProdPanelTy::SetPanel(this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else {
    switch(uVar1) {
    case 0xc0a4:
      *(undefined4 *)&this_00->field_0x199 = param_1->field_0014;
      thunk_FUN_0053c620((AnonShape_004EF140_16642BA0 *)this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case 0xc0af:
    case 0xc0b0:
    case 0xc0b1:
    case 0xc0b2:
    case 0xc0b3:
      PaintUpdBut((ResearchPanelTy *)this_00,(AnonShape_004EF320_444F9AB1 *)param_1);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case 0xc0b4:
      ProdPanelTy::PaintTab(this_00,(AnonShape_0053FEE0_A49592EB *)param_1,thunk_FUN_0052a7b0);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

