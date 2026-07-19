
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::GetMessage */

undefined4 __thiscall TradePanelTy::GetMessage(TradePanelTy *this,int param_1)

{
  TradePanelTy *this_00;
  char cVar1;
  int iVar2;
  LPSTR pCVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
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
  TradePanelTy *local_c;
  int local_8;
  
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x175,0,iVar2,
                               &DAT_007a4ccc,s_TradePanelTy__GetMessage_007c8778);
    if (iVar7 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x175);
      return 0xffff;
    }
    pcVar12 = (code *)swi(3);
    uVar6 = (*pcVar12)();
    return uVar6;
  }
  SpecPanelTy::GetMessage((SpecPanelTy *)local_c,param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0xb203) {
    if (uVar8 == 0xb202) {
      iVar2 = *(int *)this_00;
      iVar7 = 0x2754;
LAB_00552481:
      uVar15 = 1;
      uVar6 = 0;
      pCVar3 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      (**(code **)(iVar2 + 0x10))(param_1,pCVar3,iVar7,uVar6,uVar15);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar8 < 0xb200) {
      if (uVar8 == 0xb1ff) {
        uStack_11 = 0;
        local_18 = (this_00->field_01BB == '\0') + '\x01';
        uStack_10 = 0;
        bVar10 = this_00[1].field_0x14;
        sStack_17 = (bVar10 != 0) + 0xdd;
        uStack_15 = (uint)*(ushort *)(&this_00[1].field_0x0 + (uint)bVar10 * 2);
        if (this_00->field_01BB == '\0') {
          uStack_11 = (undefined1)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar10 * 8);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(&this_00->field_0x1ad + (uint)bVar10 * 8) >> 8);
        }
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_18,0,0xffffffff);
        if (this_00->field_01BB != '\0') {
          this_00->field_0028 = 0xbfff;
          (*(code *)**(undefined4 **)this_00)(&this_00->field_0x18);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      else {
        if (uVar8 == 2) {
          InitTradePanel(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
        if (uVar8 == 3) {
          DoneTradePanel(this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
    }
    else {
      if (uVar8 == 0xb200) {
        iVar2 = *(int *)this_00;
        iVar7 = (-(uint)(this_00->field_01BB != '\0') & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (uVar8 == 0xb201) {
        bVar10 = this_00[1].field_0x14;
        sStack_23 = (bVar10 != 0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)*(ushort *)(&this_00[1].field_0x0 + (uint)bVar10 * 2);
        uStack_1d = (undefined1)*(undefined2 *)(&this_00->field_0x1b1 + (uint)bVar10 * 8);
        uStack_1c = (undefined1)
                    ((ushort)*(undefined2 *)(&this_00->field_0x1b1 + (uint)bVar10 * 8) >> 8);
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_24,0,0xffffffff);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  else if (uVar8 < 0xb20d) {
    if (uVar8 == 0xb20c) {
      *(undefined2 *)(&this_00[1].field_0x0 + (uint)(byte)this_00[1].field_0x14 * 2) =
           *(undefined2 *)(param_1 + 0x14);
      PaintIndicators(this_00);
      thunk_FUN_00551800(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar8 == 0xb20a) {
      this_00[1].field_0x14 = **(char **)(param_1 + 0x14) + -1;
      thunk_FUN_00551b10(this_00);
      PaintPanel(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar8 == 0xb20b) {
      local_8 = *(int *)(*(int *)(param_1 + 0x14) + 0xc) - *(int *)&this_00->field_0x3c;
      iVar2 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar2 = *(int *)&this_00->field_0x44;
      }
      puVar14 = (undefined4 *)0x0;
      iVar13 = 0;
      iVar11 = 1;
      bVar10 = 0;
      uVar8 = 0xffffffff;
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x10) - iVar2;
      cVar1 = thunk_FUN_0052a7b0(param_1);
      uVar6 = CONCAT31(extraout_var,cVar1);
      iVar7 = 2;
      pCVar3 = thunk_FUN_00571240(s_BUT_RCTTYPE_007c87a8,0);
      pbVar4 = (byte *)FUN_006f2c00(pCVar3,iVar7,uVar6);
      puVar5 = FUN_00709af0(DAT_00806794,CASE_1,pbVar4,uVar8,bVar10,iVar11,iVar13,puVar14);
      thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,local_8,iVar2,'\x01',(byte *)puVar5);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 3) {
        puVar14 = (undefined4 *)0x0;
        iVar11 = 0;
        iVar7 = 1;
        bVar10 = 0;
        uVar8 = 0xffffffff;
        pbVar4 = (byte *)thunk_FUN_00571240(s_BUT_RCTFTYPE_007c8798,0);
        puVar5 = FUN_00709af0(DAT_00806794,CASE_6,pbVar4,uVar8,bVar10,iVar7,iVar11,puVar14);
        thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,local_8,iVar2,'\x06',(byte *)puVar5)
        ;
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,*(uint *)&this_00->field_0x3c
                 ,*(uint *)&this_00->field_0x44);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  else {
    if (uVar8 == 0xc005) {
      iVar2 = *(int *)this_00;
      pcVar9 = s_BUT_TBUP_007c22d8;
    }
    else {
      if (uVar8 != 0xc006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      iVar2 = *(int *)this_00;
      pcVar9 = s_BUT_TBDN_007c22f4;
    }
    uVar15 = 1;
    uVar6 = 0;
    pcVar12 = thunk_FUN_00529fe0;
    pCVar3 = thunk_FUN_00571240(pcVar9,0);
    (**(code **)(iVar2 + 8))(param_1,1,pCVar3,pcVar12,uVar6,uVar15);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

