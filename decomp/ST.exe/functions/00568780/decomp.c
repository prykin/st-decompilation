
undefined4 __thiscall FUN_00568780(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0xf8b) == 0) {
    return 0;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    for (; param_1 <= param_2; param_1 = param_1 + 1) {
      FUN_006c1f00(param_1,&local_c,(uint *)0x0);
      if (local_c == 0) {
        local_8 = 1;
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

