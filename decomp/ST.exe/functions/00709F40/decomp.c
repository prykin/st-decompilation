
int __cdecl FUN_00709f40(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_c = -4;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar4);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E__Ourlib_mfrload_cpp_007eff5c,0x10a,0,iVar2,&DAT_007a4ccc,
                               s__mfRLoadAddReff_007eff8c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_mfrload_cpp_007eff5c,0x10c);
    return iVar2;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfrload_cpp_007eff5c,0x101);
    return -0x34;
  }
  if (*(int *)(param_1 + 4) == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfrload_cpp_007eff5c,0x102);
    return -0x34;
  }
  iVar2 = FUN_00709990(param_1,param_2,&local_8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x25) + 1;
    *(int *)(iVar2 + 0x25) = iVar3;
    g_currentExceptionFrame = pIVar4;
    return iVar3;
  }
  g_currentExceptionFrame = pIVar4;
  return local_c;
}

