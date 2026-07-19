
undefined4 * __cdecl FUN_0070c400(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  int *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  local_8 = (int *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar1 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  if (iVar1 != 0) {
    g_currentExceptionFrame = pIVar3;
    if (local_8 != (int *)0x0) {
      FUN_006ab060(&local_8);
    }
    return (undefined4 *)0x0;
  }
  local_8 = FUN_0070b900(param_1,0,0,0,0,0x1010101,8,(uint *)0x0,0);
  if (param_2 == 0) {
    puVar2 = FUN_0070c390((int)local_8);
  }
  else {
    puVar2 = FUN_0070c270((int)local_8);
  }
  if (puVar2 == (undefined4 *)0x0) {
    RaiseInternalException(-2,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x481);
    return (undefined4 *)0x0;
  }
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  g_currentExceptionFrame = pIVar3;
  return puVar2;
}

