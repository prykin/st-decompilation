
undefined4 __cdecl thunk_FUN_0067f030(byte *param_1,char *param_2,uint *param_3)

{
  InternalExceptionFrame *pIVar1;
  int iVar2;
  undefined4 uVar3;
  InternalExceptionFrame *pIVar4;
  int in_stack_ffffffb8;
  uint uStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  uStack_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar2 = Library::MSVCRT::__setjmp3((undefined4 *)&stack0xffffffb8,0,pIVar4,in_stack_ffffffb8);
  pIVar1 = pIVar4;
  if (((iVar2 == 0) &&
      (iVar2 = thunk_FUN_0067ef60(param_1,(int *)&uStack_8), pIVar1 = g_currentExceptionFrame,
      iVar2 != 0)) && (-1 < (int)uStack_8)) {
    uStack_8 = Library::DKW::TBL::FUN_006b6020(DAT_00848a18,uStack_8,param_2);
    g_currentExceptionFrame = pIVar4;
    if (param_3 != (uint *)0x0) {
      *param_3 = uStack_8;
    }
    uVar3 = thunk_FUN_0067ee40(uStack_8);
    return uVar3;
  }
  g_currentExceptionFrame = pIVar1;
  return 0;
}

