
undefined4 __cdecl thunk_FUN_0067f0f0(char *param_1,uint param_2)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffbc;
  
  iVar1 = thunk_FUN_0067ee70(param_2);
  pIVar2 = g_currentExceptionFrame;
  if (iVar1 != 0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
    iVar1 = Library::MSVCRT::__setjmp3((undefined4 *)&stack0xffffffbc,0,pIVar2,in_stack_ffffffbc);
    if (iVar1 == 0) {
      Library::DKW::TBL::FUN_006b6020(DAT_00848a1c,param_2,param_1);
      g_currentExceptionFrame = pIVar2;
      return 1;
    }
  }
  g_currentExceptionFrame = pIVar2;
  return 0;
}

