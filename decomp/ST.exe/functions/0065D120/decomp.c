
undefined4 * FUN_0065d120(void)

{
  int exceptionCode;
  uint *puVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    local_8 = Library::DKW::LIB::FUN_006aac10(0x1b);
    *(undefined1 *)local_8 = 0;
    *(undefined2 *)((int)local_8 + 9) = 0xffff;
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,2,5);
    *(uint **)((int)local_8 + 0xf) = puVar1;
    g_currentExceptionFrame = pIVar2;
    return local_8;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_0065d1f0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_event_d_cpp_007d2b4c,0xb7);
  return (undefined4 *)0x0;
}

