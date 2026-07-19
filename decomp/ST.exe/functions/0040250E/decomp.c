
void __thiscall
MReportTy::PaintObjScore(MReportTy *this,int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  MReportTy *pMVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  MReportTy *pMStack_c;
  uint uStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pMStack_c = this;
  errorCode = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar3 = pMStack_c;
  if (errorCode == 0) {
    if (param_1 != -1) {
      cVar1 = *(char *)((int)&DAT_0080c83a + (byte)pMStack_c[0x69] + 3);
      uStack_8 = CONCAT31(uStack_8._1_3_,cVar1);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_1);
      ccFntTy::SetSurf(*(ccFntTy **)(pMVar3 + 0x8b),*(int *)(pMVar3 + 0x73),0,param_3 + 8,
                       param_4 + 5,0x36,0x14);
      if (cVar1 == -1) {
        uVar4 = 8;
      }
      else {
        uVar4 = uStack_8 & 0xff;
      }
      ccFntTy::WrStr(*(ccFntTy **)(pMVar3 + 0x8b),&DAT_0080f33a,-1,-1,uVar4);
    }
    cVar1 = DAT_0080c846;
    uStack_8 = CONCAT31(uStack_8._1_3_,DAT_0080c846);
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_2);
    ccFntTy::SetSurf(*(ccFntTy **)(pMVar3 + 0x8b),*(int *)(pMVar3 + 0x73),0,param_3 + 0x4c,
                     param_4 + 5,0x36,0x14);
    if (cVar1 == -1) {
      uVar4 = 8;
    }
    else {
      uVar4 = uStack_8 & 0xff;
    }
    ccFntTy::WrStr(*(ccFntTy **)(pMVar3 + 0x8b),&DAT_0080f33a,-1,-1,uVar4);
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x21c,0,errorCode,
                             &DAT_007a4ccc,s_MReportTy__PaintObjScore_007cd008);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x21c);
  return;
}

