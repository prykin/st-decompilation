
undefined4 __thiscall thunk_FUN_00568780(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  if (*(int *)((int)this + 0xf8b) == 0) {
    return 0;
  }
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar1 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    for (; param_1 <= param_2; param_1 = param_1 + 1) {
      FUN_006c1f00(param_1,&uStack_c,(uint *)0x0);
      if (uStack_c == 0) {
        uStack_8 = 1;
      }
    }
    g_currentExceptionFrame = IStack_50.previous;
    return uStack_8;
  }
  g_currentExceptionFrame = IStack_50.previous;
  return uStack_8;
}

