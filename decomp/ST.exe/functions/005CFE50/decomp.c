
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SendDesc */

void __thiscall SettMapMTy::SendDesc(SettMapMTy *this,int param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  undefined4 in_stack_ffffff24;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_ESI,in_stack_ffffff24);
  if (errorCode == 0) {
    thunk_FUN_00571a30((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,
                       (AnonShape_00571A30_67EE4B56 *)&stack0xffffff24,'\0');
    FUN_00715360(g_int_00811764,param_1,'\x1c',&stack0xffffff24,0x94,1,0xffffffff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4c9,0,errorCode,
                             &DAT_007a4ccc,s_SettMapMTy__SendDesc_007cd3b8);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4c9);
  return;
}

