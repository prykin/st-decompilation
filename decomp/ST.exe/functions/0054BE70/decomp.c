
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CPanelTy::OutProc */

void __thiscall
CPanelTy::OutProc(CPanelTy *this,uint param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,BITMAPINFO *param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    FUN_006b4640(param_1,param_4,param_5,param_8,(uint *)0x0);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x797,0,errorCode,
                             &DAT_007a4ccc,s_CPanelTy__OutProc_007c1a70);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x797);
  return;
}

