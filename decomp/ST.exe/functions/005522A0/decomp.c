#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005522A0; family_names=TradePanelTy::GetMessage; ret4=10;
   direct_offsets={10:3,14:4,18:1,1c:0} */

int __thiscall TradePanelTy::GetMessage(TradePanelTy *this,STMessage *message)

{
  undefined2 uVar1;
  STMessageId SVar2;
  TradePanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  ushort *puVar6;
  AnonPointee_TradePanelTy_0000 *pAVar7;
  int iVar8;
  uint uVar9;
  char *text;
  byte bVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
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
  TradePanelTy *local_c;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x175,0,iVar3,
                               "%s","TradePanelTy::GetMessage");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x175);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SpecPanelTy::GetMessage((SpecPanelTy *)local_c,message);
  SVar2 = message->id;
  if (SVar2 < 0xb203) {
    if (SVar2 == MESS_SHARED_B202) {
      pAVar7 = this_00->field_0000;
      iVar3 = 0x2754;
LAB_00552481:
      uVar16 = 1;
      uVar14 = 0;
      pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pAVar7->field_0010)(message,pCVar4,iVar3,uVar14,uVar16);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 < MESS_BEHPANELTY_B200) {
      if (SVar2 == MESS_SHARED_B1FF) {
        uStack_11 = 0;
        local_18 = (this_00->field_01BB == '\0') + '\x01';
        uStack_10 = 0;
        bVar10 = this_00->field_01D0;
        sStack_17 = (bVar10 != 0) + 0xdd;
        uStack_15 = (uint)(ushort)(&this_00->field_01BC)[bVar10];
        if (this_00->field_01BB == '\0') {
          uStack_11 = (undefined1)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar10 * 8);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar10 * 8) >> 8);
        }
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_18,0,0xffffffff);
        if (this_00->field_01BB != '\0') {
          this_00->field_0028 = 0xbfff;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_0000)(&this_00->field_0x18);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      else {
        if (SVar2 == MESS_ID_CREATE) {
          InitTradePanel(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
        if (SVar2 == MESS_SHARED_0003) {
          DoneTradePanel(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
    }
    else {
      if (SVar2 == MESS_BEHPANELTY_B200) {
        pAVar7 = this_00->field_0000;
        iVar3 = (-(uint)(this_00->field_01BB != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (SVar2 == MESS_SHARED_B201) {
        bVar10 = this_00->field_01D0;
        sStack_23 = (bVar10 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)(ushort)(&this_00->field_01BC)[bVar10];
        uVar1 = *(undefined2 *)((int)&this_00->field_01AF + (uint)bVar10 * 8 + 2);
        uStack_1d = (undefined1)uVar1;
        uStack_1c = (undefined1)((ushort)uVar1 >> 8);
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_24,0,0xffffffff);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  else if (SVar2 < 0xb20d) {
    if (SVar2 == MESS_TRADEPANELTY_B20C) {
      (&this_00->field_01BC)[(byte)this_00->field_01D0] = (message->arg0).words.low;
      PaintIndicators(this_00);
      sub_00551800(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 == MESS_TRADEPANELTY_B20A) {
      this_00->field_01D0 = *(char *)(message->arg0).ptr + -1;
      sub_00551B10(this_00);
      PaintPanel(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 == MESS_TRADEPANELTY_B20B) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_8 = *(int *)((message->arg0).u32 + 0xc) - this_00->field_003C;
      iVar3 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar3 = this_00->field_0044;
      }
      puVar15 = (undefined4 *)0x0;
      iVar13 = 0;
      iVar11 = 1;
      bVar10 = 0;
      uVar9 = 0xffffffff;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)((message->arg0).u32 + 0x10) - iVar3;
      iVar5 = thunk_FUN_0052a7b0((AnonShape_0052A7B0_DD603BF4 *)message);
      iVar8 = 2;
      pCVar4 = thunk_FUN_00571240("BUT_RCTTYPE",0);
      pCVar4 = FUN_006f2c00(pCVar4,iVar8,iVar5);
      puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_1,pCVar4,uVar9,bVar10,iVar11,iVar13,puVar15);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,local_8,iVar3,'\x01',(byte *)puVar6)
      ;
      if (*(int *)((message->arg0).u32 + 4) == 3) {
        puVar15 = (undefined4 *)0x0;
        iVar8 = 0;
        iVar5 = 1;
        bVar10 = 0;
        uVar9 = 0xffffffff;
        pCVar4 = thunk_FUN_00571240("BUT_RCTFTYPE",0);
        puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_6,pCVar4,uVar9,bVar10,iVar5,iVar8,puVar15);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,local_8,iVar3,'\x06',
               (byte *)puVar6);
      }
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  else {
    if (SVar2 == MESS_SHARED_C005) {
      pAVar7 = this_00->field_0000;
      text = "BUT_TBUP";
    }
    else {
      if (SVar2 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      pAVar7 = this_00->field_0000;
      text = "BUT_TBDN";
    }
    uVar16 = 1;
    uVar14 = 0;
    pcVar12 = thunk_FUN_00529fe0;
    pCVar4 = thunk_FUN_00571240(text,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pAVar7->field_0008)(message,1,pCVar4,pcVar12,uVar14,uVar16);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

