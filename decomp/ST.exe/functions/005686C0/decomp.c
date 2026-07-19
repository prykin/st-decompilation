
void __thiscall FUN_005686c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar2;
  InternalExceptionFrame local_4c;
  uint local_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      iVar1 = 0;
      iVar2 = 2;
      do {
        FUN_006c1f00(iVar1,&local_8,(uint *)0x0);
        if (local_8 == 1) {
          Library::DKW::SND::FUN_006c1ce0(iVar1,param_1);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

