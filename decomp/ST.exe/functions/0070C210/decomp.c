
undefined4 * __cdecl
FUN_0070c210(byte *param_1,undefined2 *param_2,undefined2 *param_3,DWORD *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  InternalExceptionFrame *pIVar3;
  int in_stack_ffffffbc;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pIVar3,in_stack_ffffffbc);
  if (iVar1 == 0) {
    puVar2 = FUN_0070bfe0(param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = pIVar3;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar3;
  return (undefined4 *)0x0;
}

