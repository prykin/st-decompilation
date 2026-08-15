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
  LPSTR pCVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  AnonPointee_TradePanelTy_0000 *pAVar8;
  int iVar9;
  uint uVar10;
  char *text;
  byte bVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
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
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x175,0,iVar3,
                               "%s","TradePanelTy::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x175);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SpecPanelTy::GetMessage((SpecPanelTy *)local_c,message);
  SVar2 = message->id;
  if (SVar2 < 0xb203) {
    if (SVar2 == MESS_SHARED_B202) {
      pAVar8 = this_00->field_0000;
      iVar7 = 0x2754;
LAB_00552481:
      uVar17 = 1;
      uVar15 = 0;
      pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)pAVar8->field_0010)(message,pCVar3,iVar7,uVar15,uVar17);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar2 < MESS_BEHPANELTY_B200) {
      if (SVar2 == MESS_SHARED_B1FF) {
        uStack_11 = 0;
        local_18 = (this_00->field_01BB == '\0') + '\x01';
        uStack_10 = 0;
        bVar11 = this_00->field_01D0;
        sStack_17 = (bVar11 != 0) + 0xdd;
        uStack_15 = (uint)(ushort)(&this_00->field_01BC)[bVar11];
        if (this_00->field_01BB == '\0') {
          uStack_11 = (undefined1)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar11 * 8);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar11 * 8) >> 8);
        }
        thunk_FUN_0054edf0((undefined4 *)0x20,(uint *)&local_18,0,0xffffffff);
        if (this_00->field_01BB != '\0') {
          this_00->field_0028 = 0xbfff;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
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
        pAVar8 = this_00->field_0000;
        iVar7 = (-(uint)(this_00->field_01BB != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (SVar2 == MESS_SHARED_B201) {
        bVar11 = this_00->field_01D0;
        sStack_23 = (bVar11 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)(ushort)(&this_00->field_01BC)[bVar11];
        uVar1 = *(undefined2 *)((int)&this_00->field_01AF + (uint)bVar11 * 8 + 2);
        uStack_1d = (undefined1)uVar1;
        uStack_1c = (undefined1)((ushort)uVar1 >> 8);
        thunk_FUN_0054edf0((undefined4 *)0x20,(uint *)&local_24,0,0xffffffff);
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
      iVar7 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar7 = this_00->field_0044;
      }
      puVar16 = nullptr;
      iVar14 = 0;
      iVar12 = 1;
      bVar11 = 0;
      uVar10 = 0xffffffff;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)((message->arg0).u32 + 0x10) - iVar7;
      iVar4 = thunk_FUN_0052a7b0((AnonShape_0052A7B0_DD603BF4 *)message);
      iVar9 = 2;
      pCVar3 = thunk_FUN_00571240("BUT_RCTTYPE",0);
      pCVar3 = FUN_006f2c00(pCVar3,iVar9,iVar4);
      puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806794,CASE_1,pCVar3,uVar10,bVar11,iVar12,iVar14,puVar16);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,iVar7,'\x01',
             (byte *)puVar5);
      if (*(int *)((message->arg0).u32 + 4) == 3) {
        puVar16 = nullptr;
        iVar9 = 0;
        iVar4 = 1;
        bVar11 = 0;
        uVar10 = 0xffffffff;
        pCVar3 = thunk_FUN_00571240("BUT_RCTFTYPE",0);
        puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                           (PTR_00806794,CASE_6,pCVar3,uVar10,bVar11,iVar4,iVar9,puVar16);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,iVar7,'\x06',
               (byte *)puVar5);
      }
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  else {
    if (SVar2 == MESS_SHARED_C005) {
      pAVar8 = this_00->field_0000;
      text = "BUT_TBUP";
    }
    else {
      if (SVar2 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      pAVar8 = this_00->field_0000;
      text = "BUT_TBDN";
    }
    uVar17 = 1;
    uVar15 = 0;
    pcVar13 = thunk_FUN_00529fe0;
    pCVar3 = thunk_FUN_00571240(text,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)pAVar8->field_0008)(message,1,pCVar3,pcVar13,uVar15,uVar17);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

