
undefined4 __cdecl thunk_FUN_006809f0(uint *param_1)

{
  void *unaff_ESI;
  InternalExceptionFrame *pIVar1;
  undefined4 auStack_58 [16];
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  byte *pbStack_8;
  
  pIVar1 = g_currentExceptionFrame;
  uStack_c = 0;
  pbStack_8 = (byte *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  iStack_14 = Library::MSVCRT::__setjmp3(auStack_58,0,unaff_ESI,pIVar1);
  if (iStack_14 == 0) {
    uStack_18 = param_1[2];
    iStack_10 = iStack_14;
    pbStack_8 = (byte *)FUN_006c8910(param_1,(int *)&uStack_c);
    thunk_FUN_00680890(0x17,pbStack_8,uStack_c,&uStack_18);
    if (pbStack_8 != (byte *)0x0) {
      FUN_006ab060(&pbStack_8);
    }
    g_currentExceptionFrame = pIVar1;
    return 1;
  }
  g_currentExceptionFrame = pIVar1;
  if (pbStack_8 != (byte *)0x0) {
    FUN_006ab060(&pbStack_8);
  }
  RaiseInternalException(iStack_14,0,s_E____titans_ai_ai_script_cpp_007d5604,0x124);
  return 0;
}

