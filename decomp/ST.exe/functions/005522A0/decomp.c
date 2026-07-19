
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::GetMessage */

undefined4 __thiscall TradePanelTy::GetMessage(TradePanelTy *this,int param_1)

{
  SpecPanelTy SVar1;
  SpecPanelTy *this_00;
  char cVar2;
  int iVar3;
  LPSTR pCVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
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
  SpecPanelTy *local_c;
  int local_8;
  
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_c = (SpecPanelTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x175,0,iVar3,
                               &DAT_007a4ccc,s_TradePanelTy__GetMessage_007c8778);
    if (iVar8 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x175);
      return 0xffff;
    }
    pcVar13 = (code *)swi(3);
    uVar7 = (*pcVar13)();
    return uVar7;
  }
  SpecPanelTy::GetMessage(local_c,param_1);
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 < 0xb203) {
    if (uVar9 == 0xb202) {
      iVar3 = *(int *)this_00;
      iVar8 = 0x2754;
LAB_00552481:
      uVar16 = 1;
      uVar7 = 0;
      pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      (**(code **)(iVar3 + 0x10))(param_1,pCVar4,iVar8,uVar7,uVar16);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar9 < 0xb200) {
      if (uVar9 == 0xb1ff) {
        uStack_11 = 0;
        local_18 = (this_00[0x1bb] == (SpecPanelTy)0x0) + '\x01';
        uStack_10 = 0;
        SVar1 = this_00[0x1d0];
        sStack_17 = (SVar1 != (SpecPanelTy)0x0) + 0xdd;
        uStack_15 = (uint)*(ushort *)(this_00 + (uint)(byte)SVar1 * 2 + 0x1bc);
        if (this_00[0x1bb] == (SpecPanelTy)0x0) {
          uStack_11 = (undefined1)*(undefined2 *)(this_00 + (uint)(byte)SVar1 * 8 + 0x1ad);
          uStack_10 = (undefined1)
                      ((ushort)*(undefined2 *)(this_00 + (uint)(byte)SVar1 * 8 + 0x1ad) >> 8);
        }
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_18,0,0xffffffff);
        if (this_00[0x1bb] != (SpecPanelTy)0x0) {
          *(undefined4 *)(this_00 + 0x28) = 0xbfff;
          (*(code *)**(undefined4 **)this_00)(this_00 + 0x18);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      else {
        if (uVar9 == 2) {
          InitTradePanel((TradePanelTy *)this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
        if (uVar9 == 3) {
          DoneTradePanel((TradePanelTy *)this_00);
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
    }
    else {
      if (uVar9 == 0xb200) {
        iVar3 = *(int *)this_00;
        iVar8 = (-(uint)(this_00[0x1bb] != (SpecPanelTy)0x0) & 0xfffffffe) + 0x2753;
        goto LAB_00552481;
      }
      if (uVar9 == 0xb201) {
        SVar1 = this_00[0x1d0];
        sStack_23 = (SVar1 != (SpecPanelTy)0x0) + 0xdd;
        local_24 = 3;
        uStack_21 = (uint)*(ushort *)(this_00 + (uint)(byte)SVar1 * 2 + 0x1bc);
        uStack_1d = (undefined1)*(undefined2 *)(this_00 + (uint)(byte)SVar1 * 8 + 0x1b1);
        uStack_1c = (undefined1)
                    ((ushort)*(undefined2 *)(this_00 + (uint)(byte)SVar1 * 8 + 0x1b1) >> 8);
        thunk_FUN_0054edf0((undefined4 *)0x20,(undefined4 *)&local_24,0,0xffffffff);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  else if (uVar9 < 0xb20d) {
    if (uVar9 == 0xb20c) {
      *(undefined2 *)(this_00 + (uint)(byte)this_00[0x1d0] * 2 + 0x1bc) =
           *(undefined2 *)(param_1 + 0x14);
      PaintIndicators((TradePanelTy *)this_00);
      thunk_FUN_00551800(this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar9 == 0xb20a) {
      this_00[0x1d0] = (SpecPanelTy)(**(char **)(param_1 + 0x14) + -1);
      thunk_FUN_00551b10(this_00);
      PaintPanel((TradePanelTy *)this_00);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar9 == 0xb20b) {
      local_8 = *(int *)(*(int *)(param_1 + 0x14) + 0xc) - *(int *)(this_00 + 0x3c);
      iVar3 = DAT_00806734;
      if (*(int *)(this_00 + 0x5c) != 0) {
        iVar3 = *(int *)(this_00 + 0x44);
      }
      puVar15 = (undefined4 *)0x0;
      iVar14 = 0;
      iVar12 = 1;
      bVar11 = 0;
      uVar9 = 0xffffffff;
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10) - iVar3;
      cVar2 = thunk_FUN_0052a7b0(param_1);
      uVar7 = CONCAT31(extraout_var,cVar2);
      iVar8 = 2;
      pCVar4 = thunk_FUN_00571240(s_BUT_RCTTYPE_007c87a8,0);
      pbVar5 = (byte *)FUN_006f2c00(pCVar4,iVar8,uVar7);
      puVar6 = FUN_00709af0(DAT_00806794,1,pbVar5,uVar9,bVar11,iVar12,iVar14,puVar15);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),local_8,iVar3,'\x01',(byte *)puVar6);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 3) {
        puVar15 = (undefined4 *)0x0;
        iVar12 = 0;
        iVar8 = 1;
        bVar11 = 0;
        uVar9 = 0xffffffff;
        pbVar5 = (byte *)thunk_FUN_00571240(s_BUT_RCTFTYPE_007c8798,0);
        puVar6 = FUN_00709af0(DAT_00806794,6,pbVar5,uVar9,bVar11,iVar8,iVar12,puVar15);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),local_8,iVar3,'\x06',(byte *)puVar6);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                 *(uint *)(this_00 + 0x44));
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  else {
    if (uVar9 == 0xc005) {
      iVar3 = *(int *)this_00;
      pcVar10 = s_BUT_TBUP_007c22d8;
    }
    else {
      if (uVar9 != 0xc006) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      iVar3 = *(int *)this_00;
      pcVar10 = s_BUT_TBDN_007c22f4;
    }
    uVar16 = 1;
    uVar7 = 0;
    pcVar13 = thunk_FUN_00529fe0;
    pCVar4 = thunk_FUN_00571240(pcVar10,0);
    (**(code **)(iVar3 + 8))(param_1,1,pCVar4,pcVar13,uVar7,uVar16);
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

