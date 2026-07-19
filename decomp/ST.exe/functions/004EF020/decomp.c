
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::Update */

void __thiscall BldBoatPanelTy::Update(BldBoatPanelTy *this)

{
  code *pcVar1;
  BldBoatPanelTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  BldBoatPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  this_00 = local_8;
  if (errorCode == 0) {
    STAllPlayersC::GetPanelInfo(DAT_007fa174,7,&local_8->field_027A);
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
    thunk_FUN_004ef140(this_00);
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x60,0,errorCode,
                             &DAT_007a4ccc,s_BldBoatPanelTy__Update_007c1850);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_bldboat_cpp_007c17b4,0x60);
  return;
}

