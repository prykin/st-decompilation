
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::GetMessage */

undefined4 __thiscall
TradePanelTy::GetMessage(TradePanelTy *this,AnonShape_0052A7B0_DD603BF4 *param_1)

{
  SpecPanelTy *this_00;
  char cVar1;
  int iVar2;
  LPSTR pCVar3;
  undefined3 extraout_var;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  char *text;
  byte bVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x175,0,iVar2,
                               &DAT_007a4ccc,s_TradePanelTy__GetMessage_007c8778);
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x175);
      return 0xffff;
    }
    pcVar10 = (code *)swi(3);
    uVar5 = (*pcVar10)();
    return uVar5;
  }
  SpecPanelTy::GetMessage(local_c,(int)param_1);
  uVar7 = *(uint *)&param_1->field_0x10;
  if (uVar7 < 0xb203) {
    if (uVar7 == 0xb202) {
      iVar2 = this_00->field_0000;
      iVar6 = 0x2754;
LAB_00552481:
      uVar13 = 1;
      uVar5 = 0;
      pCVar3 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      (**(code **)(iVar2 + 0x10))(param_1,pCVar3,iVar6,uVar5,uVar13);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar7 < 0xb200) {
      if (uVar7 == 0xb1ff) {
        uStack_11 = 0;
        local_18 = (*(char *)&this_00[1].field_002E == '\0') + '\x01';
        uStack_10 = 0;
        bVar8 = this_00[1].field_0x43;
        sStack_17 = (bVar8 != 0) + 0xdd;
        uStack_15 = (uint)*(ushort *)((int)&this_00[1].field_002E + (uint)bVar8 * 2 + 1);
        if (*(char *)&this_00[1].field_002E == '\0') {
          uStack_11 = (undefined1)*(undefined2 *)(&this_00[1].field_0x20 + (uint)bVar8 * 8);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(&this_00[1].field_0x20 + (uint)bVar8 * 8) >> 8);
        }
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_18,0,0xffffffff);
        if (*(char *)&this_00[1].field_002E != '\0') {
          this_00->field_0028 = 0xbfff;
          (**(code **)this_00->field_0000)(&this_00->field_0x18);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      else {
        if (uVar7 == 2) {
          InitTradePanel((TradePanelTy *)this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
        if (uVar7 == 3) {
          DoneTradePanel((TradePanelTy *)this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
    }
    else {
      if (uVar7 == 0xb200) {
        iVar2 = this_00->field_0000;
        iVar6 = (-(uint)(*(char *)&this_00[1].field_002E != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (uVar7 == 0xb201) {
        bVar8 = this_00[1].field_0x43;
        sStack_23 = (bVar8 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)*(ushort *)((int)&this_00[1].field_002E + (uint)bVar8 * 2 + 1);
        uStack_1d = (undefined1)*(undefined2 *)(&this_00[1].field_0x24 + (uint)bVar8 * 8);
        uStack_1c = (undefined1)
                    ((ushort)*(undefined2 *)(&this_00[1].field_0x24 + (uint)bVar8 * 8) >> 8);
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_24,0,0xffffffff);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  else if (uVar7 < 0xb20d) {
    if (uVar7 == 0xb20c) {
      *(undefined2 *)((int)&this_00[1].field_002E + (uint)(byte)this_00[1].field_0x43 * 2 + 1) =
           *(undefined2 *)&param_1->field_0014;
      PaintIndicators((TradePanelTy *)this_00);
      thunk_FUN_00551800((AnonShape_00551800_EBA95FA4 *)this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar7 == 0xb20a) {
      this_00[1].field_0x43 = *(char *)&param_1->field_0014->field_0000 + -1;
      thunk_FUN_00551b10((AnonShape_00551B10_03263458 *)this_00);
      PaintPanel((TradePanelTy *)this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar7 == 0xb20b) {
      local_8 = param_1->field_0014[1].field_0000 - this_00->field_003C;
      iVar2 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar2 = this_00->field_0044;
      }
      puVar12 = (undefined4 *)0x0;
      iVar11 = 0;
      iVar9 = 1;
      bVar8 = 0;
      uVar7 = 0xffffffff;
      iVar2 = param_1->field_0014[1].field_0004 - iVar2;
      cVar1 = thunk_FUN_0052a7b0(param_1);
      uVar5 = CONCAT31(extraout_var,cVar1);
      iVar6 = 2;
      pCVar3 = thunk_FUN_00571240(s_BUT_RCTTYPE_007c87a8,0);
      pCVar3 = FUN_006f2c00(pCVar3,iVar6,uVar5);
      puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_1,pCVar3,uVar7,bVar8,iVar9,iVar11,puVar12);
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,local_8,iVar2,'\x01',(byte *)puVar4)
      ;
      if (param_1->field_0014->field_0004 == 3) {
        puVar12 = (undefined4 *)0x0;
        iVar9 = 0;
        iVar6 = 1;
        bVar8 = 0;
        uVar7 = 0xffffffff;
        pCVar3 = thunk_FUN_00571240(s_BUT_RCTFTYPE_007c8798,0);
        puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_6,pCVar3,uVar7,bVar8,iVar6,iVar9,puVar12);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,local_8,iVar2,'\x06',
               (byte *)puVar4);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  else {
    if (uVar7 == 0xc005) {
      iVar2 = this_00->field_0000;
      text = s_BUT_TBUP_007c22d8;
    }
    else {
      if (uVar7 != 0xc006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      iVar2 = this_00->field_0000;
      text = s_BUT_TBDN_007c22f4;
    }
    uVar13 = 1;
    uVar5 = 0;
    pcVar10 = thunk_FUN_00529fe0;
    pCVar3 = thunk_FUN_00571240(text,0);
    (**(code **)(iVar2 + 8))(param_1,1,pCVar3,pcVar10,uVar5,uVar13);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

