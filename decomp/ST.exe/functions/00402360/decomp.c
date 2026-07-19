
undefined4 thunk_FUN_005da980(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar1 = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar2);
  if (iVar1 == 0) {
    thunk_FUN_005daa60();
    FUN_006b6150((uint)DAT_00807362);
    Library::DKW::DDX::FUN_006b6350
              (&DAT_00811764,(char *)(*(int *)(iStack_8 + 0x68a) + 0xc + param_1 * 0x14),
               (int *)&DAT_007cd6f0);
    FUN_006b6500(DAT_00811764,DAT_0080733c);
    g_currentExceptionFrame = pIVar2;
    return 0;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_005daa60();
  return 0xfffffffa;
}

