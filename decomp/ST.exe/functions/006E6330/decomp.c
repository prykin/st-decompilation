
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemWithNamedObjClassTy::SendMessage */

int __thiscall SystemWithNamedObjClassTy::SendMessage(SystemWithNamedObjClassTy *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_4c [16];
  SystemWithNamedObjClassTy *local_c;
  undefined4 *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar4);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x534,0,iVar2,&DAT_007a4ccc,
                               s_SystemWithNamedObjClassTy__SendM_007eec0c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x535);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0xc) == 4) {
    iVar2 = FUN_006e62d0(local_c,*(int *)(param_1 + 8),(int *)&local_8);
    if (iVar2 == 0) {
      iVar2 = (**(code **)*local_8)(param_1);
      g_currentExceptionFrame = pIVar4;
      return iVar2;
    }
  }
  else {
    iVar2 = FUN_006e5950(param_1);
  }
  g_currentExceptionFrame = pIVar4;
  return iVar2;
}

