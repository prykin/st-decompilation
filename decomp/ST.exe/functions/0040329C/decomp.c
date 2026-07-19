
void __thiscall thunk_FUN_00568bc0(void *this,int param_1)

{
  int iVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 auStack_48 [16];
  uint uStack_8;
  
  pIVar2 = g_currentExceptionFrame;
  if (*(int *)((int)this + 0xf8b) != 0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    iVar1 = __setjmp3(auStack_48,0,unaff_ESI,pIVar2);
    if (iVar1 == 0) {
      FUN_006c1f00(param_1,&uStack_8,(uint *)0x0);
      if (uStack_8 == 1) {
        FUN_006c1ba0(param_1);
      }
      g_currentExceptionFrame = pIVar2;
      return;
    }
  }
  g_currentExceptionFrame = pIVar2;
  return;
}

