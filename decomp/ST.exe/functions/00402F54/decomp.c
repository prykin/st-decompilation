
void __thiscall thunk_FUN_00567180(void *this,undefined4 param_1)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffb8;
  
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar1 = Library::MSVCRT::__setjmp3((undefined4 *)&stack0xffffffb8,0,pIVar2,in_stack_ffffffb8);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0xf8b) = 1;
    Library::DKW::SND::FUN_006c1530(param_1,1);
    FUN_006c2140(0x41200000);
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  *(undefined4 *)((int)this + 0xf8b) = 0;
  return;
}

