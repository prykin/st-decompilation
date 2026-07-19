
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   BaseSystemC::CreateSystemObjects */

undefined4 __thiscall BaseSystemC::CreateSystemObjects(BaseSystemC *this)

{
  code *pcVar1;
  BaseSystemC *pBVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_4c [16];
  BaseSystemC *local_c;
  undefined4 local_8;
  
  pIVar5 = g_currentExceptionFrame;
  local_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar5);
  pBVar2 = local_c;
  if (errorCode == 0) {
    (**(code **)(*(int *)local_c + 0xc))(1,&local_8,0,0);
    (**(code **)(*(int *)pBVar2 + 0xc))(0x101,&DAT_00802a2c,0,0);
    g_currentExceptionFrame = pIVar5;
    return 0;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x2c,0,errorCode,&DAT_007a4ccc,
                             s_BaseSystemC__CreateSystemObjects_007cab78);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x2d);
  return 0xffffffff;
}

