
undefined4 * __cdecl FUN_00725550(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E__ourlib_mfpla_cpp_007f0c44,0x27,0,iVar2,&DAT_007a4ccc,
                               s_mfPlaPtrTy_007f0c38);
    if (iVar3 == 0) {
      FUN_00725680((int *)&local_8);
      RaiseInternalException(iVar2,0,s_E__ourlib_mfpla_cpp_007f0c44,0x2b);
      return (undefined4 *)0x0;
    }
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_mfpla_cpp_007f0c44,0x18);
  }
  iVar2 = FUN_007256a0(param_1,param_2,param_3);
  if (-1 < iVar2) {
    cMf32::RecGet((cMf32 *)param_1,0xd,param_2,(int *)&local_8,param_3);
    if (local_8 != (undefined4 *)0x0) {
      puVar4 = local_8;
      if (0 < iVar2) {
        do {
          local_c = puVar4;
          iVar2 = iVar2 + -1;
          puVar4 = (undefined4 *)(*(short *)((int)local_c + 0x11) * 3 + 0x16 + (int)local_c);
          *local_c = puVar4;
        } while (iVar2 != 0);
      }
      *local_c = 0;
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
    g_currentExceptionFrame = local_50.previous;
    return (undefined4 *)0x0;
  }
  g_currentExceptionFrame = local_50.previous;
  return (undefined4 *)0x0;
}

