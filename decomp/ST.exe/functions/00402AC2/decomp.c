
void __fastcall thunk_FUN_00550bb0(int param_1)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffb4;
  char cStack_5;
  
  pIVar2 = g_currentExceptionFrame;
  if (DAT_0080877e == '\0') {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
    iVar1 = __setjmp3((undefined4 *)&stack0xffffffb4,0,pIVar2,in_stack_ffffffb4);
    if (iVar1 == 0) {
      FUN_006b6500((int)DAT_00811764,1);
      cStack_5 = '\0';
      iVar1 = FUN_00715360(DAT_00811764,1,'B',&cStack_5,1,0,0xffffffff);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x59) = 1;
      }
      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
      g_currentExceptionFrame = pIVar2;
      return;
    }
  }
  g_currentExceptionFrame = pIVar2;
  return;
}

