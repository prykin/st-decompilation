
void __thiscall thunk_FUN_005686c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar2;
  InternalExceptionFrame IStack_4c;
  uint uStack_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    iVar1 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      iVar1 = 0;
      iVar2 = 2;
      do {
        FUN_006c1f00(iVar1,&uStack_8,(uint *)0x0);
        if (uStack_8 == 1) {
          FUN_006c1ce0(iVar1,param_1);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
  }
  return;
}

