
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::Update */

void __thiscall ResearchPanelTy::Update(ResearchPanelTy *this)

{
  code *pcVar1;
  ResearchPanelTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  ResearchPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  this_00 = local_8;
  if (errorCode == 0) {
    STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,6,&local_8->field_027A);
    if ((&this_00->field_027A)[(byte)this_00->field_0279] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)((&this_00->field_027A)[(byte)this_00->field_0279] + 0xc);
    }
    if ((&this_00->field_027A)[(byte)this_00->field_0278] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)((&this_00->field_027A)[(byte)this_00->field_0278] + 0xc);
    }
    thunk_FUN_0053f510(this_00,uVar2,uVar4);
    thunk_FUN_0053c620(this_00);
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_research_cpp_007c76c8,0x52,0,errorCode,
                             &DAT_007a4ccc,s_ResearchPanelTy__Update_007c7734);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_research_cpp_007c76c8,0x52);
  return;
}

