
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PutToSHlp */

void __thiscall HelpPanelTy::PutToSHlp(HelpPanelTy *this,int param_1)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  InternalExceptionFrame local_58;
  undefined1 local_14;
  undefined4 local_13;
  undefined4 local_f;
  HelpPanelTy *local_8;
  
  local_14 = this->field_01A1;
  local_13 = this->field_01A3;
  local_f = this->field_01A7;
  if (this->field_01CB != 0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pHVar2 = local_8;
    if (iVar3 == 0) {
      iVar3 = local_8->field_01CF;
      while (-1 < iVar3) {
        iVar4 = *(int *)(pHVar2->field_01CB + 0xc);
        if (iVar4 + -1 <= iVar3) break;
        FUN_006b0c70(pHVar2->field_01CB,iVar4 - 1);
        iVar3 = pHVar2->field_01CF;
      }
      uVar5 = pHVar2->field_01CF + 1;
      pHVar2->field_01CF = uVar5;
      Library::DKW::TBL::FUN_006ae140((uint *)pHVar2->field_01CB,uVar5,(undefined4 *)&local_14);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x27c,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__PutToSHlp_007c3a48);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x27c);
  }
  return;
}

