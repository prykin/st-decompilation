#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005522A0; family_names=TradePanelTy::GetMessage; ret4=10;
   direct_offsets={10:3,14:4,18:1,1c:0} */

int __thiscall TradePanelTy::GetMessage(TradePanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  SpecPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  ushort *puVar5;
  AnonPointee_SpecPanelTy_0000 *pAVar6;
  int iVar7;
  uint uVar8;
  char *text;
  byte bVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  InternalExceptionFrame local_68;
  undefined1 local_24;
  short sStack_23;
  uint uStack_21;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  char local_18;
  short sStack_17;
  uint uStack_15;
  undefined1 uStack_11;
  undefined1 uStack_10;
  SpecPanelTy *local_c;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_c = (SpecPanelTy *)this;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x175,0,iVar2,
                               "%s","TradePanelTy::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x175);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SpecPanelTy::GetMessage(local_c,message);
  SVar1 = message->id;
  if (SVar1 < 0xb203) {
    if (SVar1 == MESS_SHARED_B202) {
      pAVar6 = this_00->field_0000;
      iVar2 = 0x2754;
LAB_00552481:
      uVar15 = 1;
      uVar13 = 0;
      pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pAVar6->field_0010)(message,pCVar3,iVar2,uVar13,uVar15);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar1 < MESS_BEHPANELTY_B200) {
      if (SVar1 == MESS_SHARED_B1FF) {
        uStack_11 = 0;
        local_18 = (*(char *)&this_00[1].field_002E == '\0') + '\x01';
        uStack_10 = 0;
        bVar9 = this_00[1].field_0x43;
        sStack_17 = (bVar9 != 0) + 0xdd;
        uStack_15 = (uint)*(ushort *)((int)&this_00[1].field_002E + (uint)bVar9 * 2 + 1);
        if (*(char *)&this_00[1].field_002E == '\0') {
          uStack_11 = (undefined1)*(undefined2 *)(&this_00[1].field_0x20 + (uint)bVar9 * 8);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(&this_00[1].field_0x20 + (uint)bVar9 * 8) >> 8);
        }
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_18,0,0xffffffff);
        if (*(char *)&this_00[1].field_002E != '\0') {
          this_00->field_0028 = 0xbfff;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)this_00->field_0000)(&this_00->field_0x18);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      else {
        if (SVar1 == MESS_ID_CREATE) {
          InitTradePanel((TradePanelTy *)this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
        if (SVar1 == MESS_SHARED_0003) {
          DoneTradePanel((TradePanelTy *)this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
    }
    else {
      if (SVar1 == MESS_BEHPANELTY_B200) {
        pAVar6 = this_00->field_0000;
        iVar2 = (-(uint)(*(char *)&this_00[1].field_002E != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (SVar1 == MESS_SHARED_B201) {
        bVar9 = this_00[1].field_0x43;
        sStack_23 = (bVar9 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)*(ushort *)((int)&this_00[1].field_002E + (uint)bVar9 * 2 + 1);
        uStack_1d = (undefined1)*(undefined2 *)(&this_00[1].field_0x24 + (uint)bVar9 * 8);
        uStack_1c = (undefined1)
                    ((ushort)*(undefined2 *)(&this_00[1].field_0x24 + (uint)bVar9 * 8) >> 8);
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_24,0,0xffffffff);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  else if (SVar1 < 0xb20d) {
    if (SVar1 == MESS_TRADEPANELTY_B20C) {
      *(word *)((int)&this_00[1].field_002E + (uint)(byte)this_00[1].field_0x43 * 2 + 1) =
           (message->arg0).words.low;
      PaintIndicators((TradePanelTy *)this_00);
      sub_00551800((TradePanelTy *)this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar1 == MESS_TRADEPANELTY_B20A) {
      this_00[1].field_0x43 = *(char *)(message->arg0).ptr + -1;
      sub_00551B10((TradePanelTy *)this_00);
      PaintPanel((TradePanelTy *)this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar1 == MESS_TRADEPANELTY_B20B) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_8 = *(int *)((message->arg0).u32 + 0xc) - this_00->field_003C;
      iVar2 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar2 = this_00->field_0044;
      }
      puVar14 = (undefined4 *)0x0;
      iVar12 = 0;
      iVar10 = 1;
      bVar9 = 0;
      uVar8 = 0xffffffff;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)((message->arg0).u32 + 0x10) - iVar2;
      iVar4 = thunk_FUN_0052a7b0((AnonShape_0052A7B0_DD603BF4 *)message);
      iVar7 = 2;
      pCVar3 = thunk_FUN_00571240("BUT_RCTTYPE",0);
      pCVar3 = FUN_006f2c00(pCVar3,iVar7,iVar4);
      puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_1,pCVar3,uVar8,bVar9,iVar10,iVar12,puVar14);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,local_8,iVar2,'\x01',(byte *)puVar5)
      ;
      if (*(int *)((message->arg0).u32 + 4) == 3) {
        puVar14 = (undefined4 *)0x0;
        iVar7 = 0;
        iVar4 = 1;
        bVar9 = 0;
        uVar8 = 0xffffffff;
        pCVar3 = thunk_FUN_00571240("BUT_RCTFTYPE",0);
        puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_6,pCVar3,uVar8,bVar9,iVar4,iVar7,puVar14);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,local_8,iVar2,'\x06',
               (byte *)puVar5);
      }
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  else {
    if (SVar1 == MESS_SHARED_C005) {
      pAVar6 = this_00->field_0000;
      text = "BUT_TBUP";
    }
    else {
      if (SVar1 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      pAVar6 = this_00->field_0000;
      text = "BUT_TBDN";
    }
    uVar15 = 1;
    uVar13 = 0;
    pcVar11 = thunk_FUN_00529fe0;
    pCVar3 = thunk_FUN_00571240(text,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&pAVar6->field_0x8)(message,1,pCVar3,pcVar11,uVar13,uVar15);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

