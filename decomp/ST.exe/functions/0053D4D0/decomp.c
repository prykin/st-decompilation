#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0053D4D0; family_names=SAMPanelTy::GetMessage; ret4=7;
   direct_offsets={10:4,14:0,18:1,1c:0} */

int __thiscall SAMPanelTy::GetMessage(SAMPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  AnonPointee_SpecPanelTy_0000 *pAVar2;
  int iVar3;
  code *pcVar4;
  SpecPanelTy *this_00;
  byte bVar5;
  int iVar6;
  LPSTR pCVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SpecPanelTy *local_c;
  undefined1 local_6;
  char local_5;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = (SpecPanelTy *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\setamine.cpp",0x94,0,iVar6,
                                "%s","SAMPanelTy::GetMessage");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\setamine.cpp",0x94);
    return 0xffff;
  }
  SpecPanelTy::GetMessage(local_c,message);
  SVar1 = message->id;
  if (SVar1 < 0xb509) {
    if (SVar1 == MESS_SAMPANELTY_B508) {
      local_6 = 0xff;
      thunk_FUN_0054edf0((undefined4 *)0x2a,(undefined4 *)&local_6,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar1 < 4) {
      if (SVar1 == MESS_SHARED_0003) {
        DoneSAMPanel((SAMPanelTy *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar1 == MESS_ID_CREATE) {
        InitSAMPanel((SAMPanelTy *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if ((0xb4fe < SVar1) && (SVar1 < MESS_SAMPANELTY_B508)) {
      local_5 = (char)message->id + 1;
      thunk_FUN_0054edf0((undefined4 *)0x2a,(undefined4 *)&local_5,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (0xb50e < SVar1) {
    if (SVar1 < MESS_SAMPANELTY_B518) {
      iVar6 = this_00->field_003C;
      bVar5 = (char)message->id - 0xf;
      iVar10 = *(int *)(message->arg1).ptr;
      iVar3 = *(int *)((int)(message->arg1).ptr + 4);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_10 = CONCAT31(uStack_f,bVar5);
      iVar8 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar8 = this_00->field_0044;
      }
      pbVar9 = (byte *)FUN_0070b3a0(*(AnonShape_GLOBAL_0081175C_57F682DD **)&this_00[1].field_0x24,
                                    (uint)((&this_00[1].field_0x1e)[bVar5] == '\0'));
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,iVar10 - iVar6,iVar3 - iVar8,'\x01',
             pbVar9);
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
    }
    else if (SVar1 == MESS_SAMPANELTY_B518) {
      pAVar2 = this_00->field_0000;
      uVar13 = 1;
      uVar12 = 0;
      uVar11 = 0x2755;
      pCVar7 = thunk_FUN_00571240("BUT_BIG",0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pAVar2->field_0010)(message,pCVar7,uVar11,uVar12,uVar13);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

