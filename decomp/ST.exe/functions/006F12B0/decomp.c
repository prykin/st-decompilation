
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::ToBeg */

void __thiscall cMf32::ToBeg(cMf32 *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  cMf32 *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    FUN_00750f20(*(int *)local_8->field_0000,param_1,param_2);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0xa9,0,errorCode,&DAT_007a4ccc,
                             s_cMf32__ToBeg_007efadc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0xab);
  return;
}

