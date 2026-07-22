#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004EE4D0; family_names=BehPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:1,18:1,1c:0} */

int __thiscall BehPanelTy::GetMessage(BehPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  AnonPointee_SpecPanelTy_0000 *pAVar2;
  SpecPanelTy *this_00;
  char cVar3;
  int iVar4;
  char *pcVar5;
  LPSTR pCVar6;
  uint uVar7;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  InternalExceptionFrame local_70;
  char local_2c [29];
  uint local_f;
  SpecPanelTy *local_8;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = (SpecPanelTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\behpanel.cpp",0xf3,0,iVar4,"%s"
                               ,"BehPanelTy::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\behpanel.cpp",0xf3);
    return 0xffff;
  }
  SpecPanelTy::GetMessage(local_8,message);
  SVar1 = message->id;
  if (SVar1 < 0xb20f) {
    if (SVar1 == MESS_BEHPANELTY_B20E) {
      pAVar2 = this_00->field_0000;
      uVar11 = 1;
      uVar10 = 0;
      pcVar9 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar5 = thunk_FUN_00529590((&this_00[1].field_0x22)[(message->arg0).words.high],
                                  *(int *)&this_00[1].field_0x1e);
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&pAVar2->field_0x8)(message,6,pCVar6,pcVar9,uVar10,uVar11);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (MESS_SHARED_B1FF < SVar1) {
      if (SVar1 != MESS_BEHPANELTY_B200) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      pAVar2 = this_00->field_0000;
      uVar11 = 1;
      uVar10 = 0;
      pcVar9 = thunk_FUN_0052a320;
      iVar4 = 0;
      pcVar5 = thunk_FUN_00529590((&this_00[1].field_0x22)[(message->arg0).words.high],
                                  *(int *)&this_00[1].field_0x1e);
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&pAVar2->field_0x8)(message,1,pCVar6,pcVar9,uVar10,uVar11);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_B1FF) {
      if (this_00->field_0172 != 1) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      thunk_FUN_005252c0(0xae);
      thunk_FUN_0054b630(g_cursorClass_00802A30,
                         (uint)(byte)(&this_00[1].field_0x22)[(message->arg0).u32],0);
      this_00->field_0028 = 0xbfff;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)this_00->field_0000)(&this_00->field_0x18);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_ID_CREATE) {
      if (SVar1 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      DoneBehPanel((BehPanelTy *)this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    InitBehPanel((BehPanelTy *)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  switch(SVar1) {
  case MESS_SHARED_C09F:
  case MESS_BEHPANELTY_C0A0:
  case MESS_FSGSTY_C0A1:
    if (this_00->field_0172 != 1) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    thunk_FUN_005252c0(0xae);
    SVar1 = message->id;
    pcVar5 = local_2c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    *pcVar5 = '\0';
    if (SVar1 == MESS_SHARED_C09F) {
      local_2c[0] = '\x15';
      cVar3 = *(char *)&this_00[1].field_002E;
    }
    else {
      local_2c[0] = (SVar1 != MESS_BEHPANELTY_C0A0) + '\x16';
      if (SVar1 == MESS_BEHPANELTY_C0A0) {
        cVar3 = *(char *)((int)&this_00[1].field_002E + 1);
      }
      else {
        cVar3 = *(char *)&this_00[1].field_0030;
      }
    }
    local_f = (uint)(cVar3 == '\x03');
    thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)local_2c,0,0xffffffff);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  default:
    goto switchD_004ee68c_caseD_c0a2;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case MESS_INTERCOMPANELTY_C0AF:
    uVar7 = CONCAT31((int3)(SVar1 - MESS_SHARED_C09F >> 8),*(char *)&this_00[1].field_002E == '\x03'
                    );
    pcVar5 = "BUT_BLOCK";
    break;
  case 0xc0b0:
    uVar7 = (uint)(*(char *)((int)&this_00[1].field_002E + 1) == '\x03');
    pcVar5 = "BUT_BHOLD";
    break;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  case MESS_BEHPANELTY_C0B1:
    uVar7 = CONCAT31((int3)((uint)extraout_EDX >> 8),*(char *)&this_00[1].field_0030 == '\x03');
    pcVar5 = "BUT_BAGR";
  }
  pCVar6 = thunk_FUN_00571240(pcVar5,0);
  PaintBBut((BehPanelTy *)this_00,(AnonShape_004EE350_18D491EA *)message,pCVar6,uVar7);
switchD_004ee68c_caseD_c0a2:
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

