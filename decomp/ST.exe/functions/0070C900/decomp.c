
undefined4 * __cdecl FUN_0070c900(int param_1,uint *param_2,char param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *unaff_ESI;
  uint *puVar4;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  uint local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar1 = __setjmp3(local_48,0,unaff_ESI,pIVar5);
  if (iVar1 == 0) {
    if (param_4 < 0) {
      puVar4 = &local_8;
      iVar3 = -1 - param_4;
      iVar1 = FUN_006b4fa0(param_1);
      puVar2 = (undefined4 *)FUN_00752cf0(param_1,iVar1,iVar3,param_3,puVar4);
    }
    else {
      puVar4 = &local_8;
      iVar1 = FUN_006b4fa0(param_1);
      puVar2 = FUN_007527a0(param_1,iVar1,param_4,param_3,puVar4);
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = local_8;
    }
    g_currentExceptionFrame = pIVar5;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar5;
  return (undefined4 *)0x0;
}

