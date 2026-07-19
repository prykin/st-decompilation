
int * __cdecl FUN_007097c0(int param_1)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  int *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  local_8 = (int *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar5);
  if (errorCode == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfrload_cpp_007eff5c,0x19);
    }
    local_8 = FUN_006aac10(8);
    *local_8 = param_1;
    puVar2 = FUN_006ae290((uint *)0x0,0x14,0x2d,0x14);
    local_8[1] = (int)puVar2;
    g_currentExceptionFrame = pIVar5;
    return local_8;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfrload_cpp_007eff5c,0x22,0,errorCode,&DAT_007a4ccc,
                             s_mfRLoadCreate_007eff4c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    piVar4 = (int *)(*pcVar1)();
    return piVar4;
  }
  if ((byte *)local_8[1] != (byte *)0x0) {
    FUN_006ae110((byte *)local_8[1]);
  }
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfrload_cpp_007eff5c,0x27);
  return (int *)0x0;
}

