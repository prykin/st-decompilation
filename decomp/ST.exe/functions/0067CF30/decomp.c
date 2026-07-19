
undefined4 * __cdecl FUN_0067cf30(char *param_1,undefined2 param_2,char *param_3,undefined4 param_4)

{
  int exceptionCode;
  uint *puVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  char *_Source;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  local_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = pIVar3;
    thunk_FUN_0067d160((int *)&local_8);
    RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x28);
    return (undefined4 *)0x0;
  }
  local_8 = Library::DKW::LIB::FUN_006aac10(299);
  *local_8 = 0x38e;
  local_8[5] = 299;
  *(undefined1 *)(local_8 + 6) = 2;
  Library::MSVCRT::_strncpy((char *)((int)local_8 + 0x1b),param_1,0x3f);
  _Source = param_1;
  if (param_3 != (char *)0x0) {
    _Source = param_3;
  }
  Library::MSVCRT::_strncpy((char *)((int)local_8 + 0x5b),_Source,0xb);
  *(undefined2 *)((int)local_8 + 0x19) = param_2;
  *(undefined4 *)((int)local_8 + 0x6d) = 0xff;
  puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10,5);
  *(uint **)((int)local_8 + 0xc2) = puVar1;
  puVar2 = thunk_FUN_0065c9e0(param_1);
  *(undefined4 **)((int)local_8 + 0x106) = puVar2;
  *(undefined4 *)((int)local_8 + 0x10a) = param_4;
  g_currentExceptionFrame = pIVar3;
  return local_8;
}

