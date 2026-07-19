
int thunk_FUN_00555720(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 auStack_44 [16];
  
  iVar2 = __setjmp3(auStack_44,0,unaff_ESI,g_currentExceptionFrame);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0x37,0,iVar2,&DAT_007a4ccc,
                             s_TraksClassTy__CreateDate_error_007c9124);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_grig_traks_cpp_007c9104,0x38);
  return iVar2;
}

