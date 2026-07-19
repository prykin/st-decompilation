
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintObjScore */

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
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar3 = local_c;
  if (errorCode == 0) {
    if (param_1 != -1) {
      cVar1 = *(char *)((int)&DAT_0080c83a + (byte)local_c->field_0069 + 3);
      local_8 = CONCAT31(local_8._1_3_,cVar1);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_1);
      ccFntTy::SetSurf(pMVar3->field_008B,pMVar3->field_0073,0,param_3 + 8,param_4 + 5,0x36,0x14);
      if (cVar1 == -1) {
        uVar4 = 8;
      }
      else {
        uVar4 = local_8 & 0xff;
      }
      ccFntTy::WrStr(pMVar3->field_008B,&DAT_0080f33a,-1,-1,uVar4);
    }
    cVar1 = DAT_0080c846;
    local_8 = CONCAT31(local_8._1_3_,DAT_0080c846);
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_2);
    ccFntTy::SetSurf(pMVar3->field_008B,pMVar3->field_0073,0,param_3 + 0x4c,param_4 + 5,0x36,0x14);
    if (cVar1 == -1) {
      uVar4 = 8;
    }
    else {
      uVar4 = local_8 & 0xff;
    }
    ccFntTy::WrStr(pMVar3->field_008B,&DAT_0080f33a,-1,-1,uVar4);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
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

