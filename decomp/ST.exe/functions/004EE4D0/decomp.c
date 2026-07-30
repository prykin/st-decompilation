#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004EE4D0; family_names=BehPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:1,18:1,1c:0} */

int __thiscall BehPanelTy::GetMessage(BehPanelTy *this,STMessage *message)

{
  AnonPointee_BehPanelTy_0000 *pAVar1;
  STMessageId SVar2;
  BehPanelTy *this_00;
  char cVar3;
  int iVar4;
  char *pcVar5;
  LPSTR pCVar6;
  int iVar7;
  byte bVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_70;
  uint local_2c [7];
  uint local_f;
  BehPanelTy *local_8;
  uint SVar1;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\behpanel.cpp",0xf3,0,iVar4,"%s"
                               ,"BehPanelTy::GetMessage");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\behpanel.cpp",0xf3);
    return 0xffff;
  }
  SpecPanelTy::GetMessage((SpecPanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < 0xb20f) {
    if (SVar1 == 0xb20e) {
      pAVar1 = this_00->field_0000;
      uVar12 = 1;
      uVar11 = 0;
      pcVar10 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar5 = thunk_FUN_00529590((&this_00->field_0x1af)[(message->arg0).words.high],
                                  this_00->field_01AB);
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pAVar1->field_0008)(message,6,pCVar6,pcVar10,uVar11,uVar12);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (0xb1ff < SVar1) {
      if (SVar1 != 0xb200) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      pAVar1 = this_00->field_0000;
      uVar12 = 1;
      uVar11 = 0;
      pcVar10 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar5 = thunk_FUN_00529590((&this_00->field_0x1af)[(message->arg0).words.high],
                                  this_00->field_01AB);
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pAVar1->field_0008)(message,1,pCVar6,pcVar10,uVar11,uVar12);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 == 0xb1ff) {
      if (this_00->field_0172 != 1) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      thunk_FUN_005252c0(0xae);
      CursorClassTy::sub_0054B630
                (g_cursorClass_00802A30,(uint)(byte)(&this_00->field_0x1af)[(message->arg0).u32],0);
      this_00->field_0028 = 0xbfff;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0000)(&this_00->field_0x18);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != 2) {
      if (SVar1 != 3) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      DoneBehPanel(this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    InitBehPanel(this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  switch(SVar1) {
  case 0xc09f:
  case 0xc0a0:
  case 0xc0a1:
    if (this_00->field_0172 != 1) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    thunk_FUN_005252c0(0xae);
    SVar2 = message->id;
    memset(local_2c, 0, 0x21); /* compiler bulk-zero initialization */
    if (SVar2 == MESS_SHARED_C09F) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_2c[0]._0_1_ = '\x15';
      cVar3 = this_00->field_0x1bb;
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_2c[0]._0_1_ = (SVar2 != MESS_BEHPANELTY_C0A0) + '\x16';
      if (SVar2 == MESS_BEHPANELTY_C0A0) {
        cVar3 = this_00->field_0x1bc;
      }
      else {
        cVar3 = this_00->field_01BD;
      }
    }
    local_f = (uint)(cVar3 == '\x03');
    thunk_FUN_0054edf0((undefined4 *)0x17,local_2c,0,0xffffffff);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  default:
    goto switchD_004ee68c_caseD_c0a2;
  case 0xc0af:
    bVar9 = this_00->field_0x1bb == '\x03';
    pcVar5 = "BUT_BLOCK";
    break;
  case 0xc0b0:
    bVar9 = this_00->field_0x1bc == '\x03';
    pcVar5 = "BUT_BHOLD";
    break;
  case 0xc0b1:
    bVar9 = this_00->field_01BD == '\x03';
    pcVar5 = "BUT_BAGR";
  }
  pCVar6 = thunk_FUN_00571240(pcVar5,0);
  PaintBBut(this_00,(AnonShape_004EE350_18D491EA *)message,pCVar6,bVar9);
switchD_004ee68c_caseD_c0a2:
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

