
int * __cdecl
FUN_0070be00(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint *param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  InternalExceptionFrame *pIVar3;
  int in_stack_ffffffbc;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pIVar3,in_stack_ffffffbc);
  if (iVar1 == 0) {
    piVar2 = FUN_0070b900(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    g_currentExceptionFrame = pIVar3;
    return piVar2;
  }
  g_currentExceptionFrame = pIVar3;
  return (int *)0x0;
}

