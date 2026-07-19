
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::CursDrawInit */

void __thiscall
CursorClassTy::CursDrawInit(CursorClassTy *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  CursorClassTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar3);
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar3;
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xd8,0,errorCode,
                               &DAT_007a4ccc,s_CursorClassTy__CursDrawInit_007c7e68);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xd9);
    return;
  }
  if (*(int *)(local_8 + 0xa9) != 0) {
    FUN_006b5f80(DAT_008075a8,param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  FUN_006b8d50(*(int **)(local_8 + 0xad),param_1,param_2,param_3,param_4);
  g_currentExceptionFrame = pIVar3;
  return;
}

