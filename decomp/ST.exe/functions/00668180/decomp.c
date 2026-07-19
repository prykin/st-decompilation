
undefined4 * __cdecl
FUN_00668180(char *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined1 param_5)

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
    local_8 = Library::DKW::LIB::FUN_006aac10(0x260);
    *local_8 = 900;
    local_8[5] = 0x260;
    *(undefined1 *)(local_8 + 6) = 2;
    Library::MSVCRT::_strncpy((char *)((int)local_8 + 0x1b),param_1,0x3f);
    *(undefined2 *)((int)local_8 + 0x19) = param_2;
    *(undefined2 *)((int)local_8 + 0x5b) = param_3;
    *(undefined2 *)((int)local_8 + 0x5f) = param_4;
    *(undefined1 *)((int)local_8 + 0x61) = param_5;
    *(undefined4 *)((int)local_8 + 0x23f) = 0x3fffffff;
    if (*(int *)((int)local_8 + 0x1eb) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x2c,10);
      *(uint **)((int)local_8 + 0x1eb) = puVar1;
    }
    if (*(int *)((int)local_8 + 0x203) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
      *(uint **)((int)local_8 + 0x203) = puVar1;
    }
    if (*(int *)((int)local_8 + 0x20f) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
      *(uint **)((int)local_8 + 0x20f) = puVar1;
    }
    g_currentExceptionFrame = pIVar2;
    return local_8;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_006686c0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_flt_d_cpp_007d2cc0,0x2a);
  return (undefined4 *)0x0;
}

