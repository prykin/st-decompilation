
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DoneHelpPanel */

void __thiscall HelpPanelTy::DoneHelpPanel(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *extraout_ECX_04;
  ccFntTy *extraout_ECX_05;
  ccFntTy *extraout_ECX_06;
  ccFntTy *extraout_ECX_07;
  ccFntTy *extraout_ECX_08;
  ccFntTy *extraout_ECX_09;
  ccFntTy *extraout_ECX_10;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pHVar2 = local_c;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (local_c->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_017C);
      this_00 = extraout_ECX_00;
    }
    pHVar2->field_017C = 0;
    puVar4 = &pHVar2->field_0180;
    local_8 = 7;
    do {
      if (*puVar4 != 0) {
        StartSystemTy::sub_006E56B0(pHVar2->field_000C,*puVar4);
        *puVar4 = 0;
        this_00 = extraout_ECX_01;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (pHVar2->field_019C != 0) {
      StartSystemTy::sub_006E56B0(pHVar2->field_000C,pHVar2->field_019C);
      this_00 = extraout_ECX_02;
    }
    pHVar2->field_019C = 0;
    if ((byte *)pHVar2->field_01B3 != (byte *)0x0) {
      FUN_006ae110((byte *)pHVar2->field_01B3);
      this_00 = extraout_ECX_03;
    }
    pHVar2->field_01B3 = 0;
    if ((byte *)pHVar2->field_01BB != (byte *)0x0) {
      FUN_006ae110((byte *)pHVar2->field_01BB);
      this_00 = extraout_ECX_04;
    }
    pHVar2->field_01BB = 0;
    if ((byte *)pHVar2->field_01CB != (byte *)0x0) {
      FUN_006ae110((byte *)pHVar2->field_01CB);
      this_00 = extraout_ECX_05;
    }
    pHVar2->field_01CB = 0;
    if ((byte *)pHVar2->field_01D7 != (byte *)0x0) {
      FUN_006ae110((byte *)pHVar2->field_01D7);
      this_00 = extraout_ECX_06;
    }
    pHVar2->field_01D7 = 0;
    if (pHVar2->field_01D3 != (uint *)0x0) {
      FUN_006b5570((byte *)pHVar2->field_01D3);
      this_00 = extraout_ECX_07;
    }
    pHVar2->field_01D3 = (uint *)0x0;
    puVar4 = &pHVar2->field_01F0;
    local_8 = 10;
    do {
      if (*puVar4 != 0) {
        cMf32::RecMemFree(DAT_00806790,puVar4);
        this_00 = extraout_ECX_08;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pHVar2->field_0238 = 0;
    pHVar2->field_0248 = 0;
    pHVar2->field_022C = 0;
    pHVar2->field_0228 = 0;
    pHVar2->field_0234 = 0;
    pHVar2->field_0230 = 0;
    pHVar2->field_0224 = 0;
    pHVar2->field_0220 = 0;
    pHVar2->field_0244 = 0;
    pHVar2->field_0240 = 0;
    pHVar2->field_023C = 0;
    if (pHVar2->field_01E0 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pHVar2->field_01E0);
      pHVar2->field_01E0 = (ccFntTy *)0x0;
      this_00 = extraout_ECX_09;
    }
    if (pHVar2->field_01E4 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pHVar2->field_01E4);
      pHVar2->field_01E4 = (ccFntTy *)0x0;
      this_00 = extraout_ECX_10;
    }
    if (pHVar2->field_01E8 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pHVar2->field_01E8);
      pHVar2->field_01E8 = (ccFntTy *)0x0;
    }
    if (pHVar2->field_0218 != 0) {
      FUN_006ab060((LPVOID *)&pHVar2->field_0218);
    }
    if (pHVar2->field_01EC != 0) {
      FUN_006ab060((LPVOID *)&pHVar2->field_01EC);
    }
    if (pHVar2->field_024C != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pHVar2->field_024C);
    }
    if (pHVar2->field_01DC != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pHVar2->field_01DC);
    }
    if (pHVar2->field_021C != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pHVar2->field_021C);
    }
    DAT_00801690 = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xcf,0,errorCode,
                             &DAT_007a4ccc,s_HelpPanelTy__DoneHelpPanel_007c3918);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xcf);
  return;
}

