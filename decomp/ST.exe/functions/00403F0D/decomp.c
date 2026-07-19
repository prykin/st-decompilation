
undefined4 __thiscall
STAllPlayersC::DelObjsFromTmp
          (STAllPlayersC *this,undefined4 param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  InternalExceptionFrame IStack_54;
  int iStack_10;
  STAllPlayersC *pSStack_c;
  uint uStack_8;
  
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pSStack_c = this;
  errorCode = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (param_4 == 0) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2b4);
    }
    iStack_10 = *(int *)(param_4 + 0xc);
    uVar4 = 0;
    if (0 < iStack_10) {
      do {
        FUN_006acc70(param_4,uVar4,&uStack_8);
        if ((short)uStack_8 != -1) {
          thunk_FUN_0042c300(param_1,param_2,param_3,param_1,uStack_8);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iStack_10);
    }
    g_currentExceptionFrame = IStack_54.previous;
  }
  else {
    g_currentExceptionFrame = IStack_54.previous;
    if (errorCode != -0x5001fff7) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,700,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__DelObjsFromTmp_007a62ac);
      if (iVar2 == 0) {
        RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2bd);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 0;
}

