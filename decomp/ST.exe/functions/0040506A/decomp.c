
undefined4 * __cdecl thunk_FUN_00690e90(char *param_1,undefined2 param_2,undefined2 param_3)

{
  int exceptionCode;
  uint *puVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 auStack_48 [16];
  undefined4 *puStack_8;
  
  pIVar2 = g_currentExceptionFrame;
  puStack_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    puStack_8 = FUN_006aac10(0x10c);
    *puStack_8 = 0x38e;
    puStack_8[5] = 0x10c;
    *(undefined1 *)(puStack_8 + 6) = 2;
    _strncpy((char *)((int)puStack_8 + 0x1b),param_1,0x3f);
    *(undefined2 *)((int)puStack_8 + 0x19) = param_2;
    *(undefined2 *)(puStack_8 + 0x17) = param_3;
    if (*(int *)((int)puStack_8 + 0x85) == 0) {
      puVar1 = FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)((int)puStack_8 + 0x85) = puVar1;
    }
    g_currentExceptionFrame = pIVar2;
    return puStack_8;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_00691540((int *)&puStack_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_tact_d_cpp_007d58fc,0x21);
  return (undefined4 *)0x0;
}

