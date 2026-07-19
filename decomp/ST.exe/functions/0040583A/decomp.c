
undefined4 thunk_FUN_005daa90(void)

{
  int iVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  pIVar2 = g_currentExceptionFrame;
  if (DAT_00811764 != (undefined4 *)0x0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    iVar1 = __setjmp3(auStack_48,0,unaff_ESI,pIVar2);
    if (iVar1 == 0) {
      thunk_FUN_005dab30(iStack_8);
      FUN_006b65f0(DAT_00811764,(undefined4 *)(iStack_8 + 0x68e));
      g_currentExceptionFrame = pIVar2;
      return 0;
    }
    g_currentExceptionFrame = pIVar2;
    thunk_FUN_005dab30(iStack_8);
  }
  return 0xfffffffa;
}

