
undefined4 * __cdecl FUN_00648400(char *param_1,undefined4 param_2)

{
  int exceptionCode;
  undefined4 *puVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = __setjmp3(local_48,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    local_8 = FUN_006aac10(0x85);
    *(undefined4 *)((int)local_8 + 1) = 0x85;
    *(undefined1 *)((int)local_8 + 5) = 2;
    _strncpy((char *)((int)local_8 + 6),param_1,0x3f);
    puVar1 = thunk_FUN_0065c9e0(param_1);
    *(undefined4 **)((int)local_8 + 0x4e) = puVar1;
    *(undefined4 *)((int)local_8 + 0x52) = param_2;
    g_currentExceptionFrame = pIVar2;
    return local_8;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_006484f0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x20);
  return (undefined4 *)0x0;
}

