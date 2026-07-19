
void FUN_005531f0(void)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffbc;
  
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pIVar2,in_stack_ffffffbc);
  if (iVar1 == 0) {
    if (DAT_00802a4c == (uint *)0x0) {
      DAT_00802a4c = FUN_006ae290((uint *)0x0,10,6,10);
    }
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  return;
}

