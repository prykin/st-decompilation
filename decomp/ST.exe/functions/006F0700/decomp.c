
int * __cdecl FUN_006f0700(int param_1,int param_2)

{
  code *pcVar1;
  int errorCode;
  int *piVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  int local_8;
  
  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if ((param_1 < 1) || (param_2 < 1)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x223);
    }
    piVar2 = Library::DKW::LIB::FUN_006aac10(param_1 * param_2 * 0x24 + 0xe);
    *piVar2 = param_1;
    piVar2[1] = param_2;
    g_currentExceptionFrame = local_4c.previous;
    return piVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x229,0,errorCode,&DAT_007a4ccc,
                             s_AuxTMapCreate_007ef054);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    piVar2 = (int *)(*pcVar1)();
    return piVar2;
  }
  FUN_006f07e0(&local_8);
  RaiseInternalException(errorCode,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x22d);
  return (int *)0x0;
}

