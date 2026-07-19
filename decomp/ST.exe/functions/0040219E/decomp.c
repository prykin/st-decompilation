
undefined4 __thiscall STAllPlayersC::IsTorpLive(STAllPlayersC *this,short param_1,int param_2)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 auStack_4c [16];
  undefined4 uStack_c;
  int iStack_8;
  
  pIVar5 = g_currentExceptionFrame;
  uStack_c = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  errorCode = __setjmp3(auStack_4c,0,unaff_ESI,pIVar5);
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar5;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x80b,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__IsTorpLive_007a6740);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x80c);
    }
    return uStack_c;
  }
  uVar2 = FUN_006acc70(DAT_007fa130,(int)param_1,&iStack_8);
  if (uVar2 != 0xfffffffc) {
    if (iStack_8 == 0) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x806);
    }
    if (*(int *)(iStack_8 + 0x18) == param_2) {
      g_currentExceptionFrame = pIVar5;
      return 1;
    }
  }
  g_currentExceptionFrame = pIVar5;
  return uStack_c;
}

