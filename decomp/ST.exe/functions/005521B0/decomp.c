
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::Update */

void __thiscall TradePanelTy::Update(TradePanelTy *this)

{
  code *pcVar1;
  TradePanelTy *this_00;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_58 [16];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  TradePanelTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  local_8 = this;
  errorCode = __setjmp3(local_58,0,unaff_ESI,pIVar3);
  this_00 = local_8;
  if (errorCode == 0) {
    local_18 = *(int *)(local_8 + 0x1ab);
    local_14 = *(undefined4 *)(local_8 + 0x1af);
    local_10 = *(undefined4 *)(local_8 + 0x1b3);
    local_c = *(undefined4 *)(local_8 + 0x1b7);
    thunk_FUN_0043beb0(DAT_007fa174,10,(int *)(local_8 + 0x1ab));
    thunk_FUN_00551b10(this_00);
    PaintPanel(this_00);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,300,0,errorCode,
                             &DAT_007a4ccc,s_TradePanelTy__Update_007c875c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tradecen_cpp_007c8624,300);
  return;
}

