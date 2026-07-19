
undefined4 * __cdecl
thunk_FUN_0067cf30(char *param_1,undefined2 param_2,char *param_3,undefined4 param_4)

{
  int exceptionCode;
  uint *puVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  char *_Source;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_48 [16];
  undefined4 *puStack_8;
  
  pIVar3 = g_currentExceptionFrame;
  puStack_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar3);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = pIVar3;
    thunk_FUN_0067d160((int *)&puStack_8);
    RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x28);
    return (undefined4 *)0x0;
  }
  puStack_8 = Library::DKW::LIB::FUN_006aac10(299);
  *puStack_8 = 0x38e;
  puStack_8[5] = 299;
  *(undefined1 *)(puStack_8 + 6) = 2;
  Library::MSVCRT::_strncpy((char *)((int)puStack_8 + 0x1b),param_1,0x3f);
  _Source = param_1;
  if (param_3 != (char *)0x0) {
    _Source = param_3;
  }
  Library::MSVCRT::_strncpy((char *)((int)puStack_8 + 0x5b),_Source,0xb);
  *(undefined2 *)((int)puStack_8 + 0x19) = param_2;
  *(undefined4 *)((int)puStack_8 + 0x6d) = 0xff;
  puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10,5);
  *(uint **)((int)puStack_8 + 0xc2) = puVar1;
  puVar2 = thunk_FUN_0065c9e0(param_1);
  *(undefined4 **)((int)puStack_8 + 0x106) = puVar2;
  *(undefined4 *)((int)puStack_8 + 0x10a) = param_4;
  g_currentExceptionFrame = pIVar3;
  return puStack_8;
}

