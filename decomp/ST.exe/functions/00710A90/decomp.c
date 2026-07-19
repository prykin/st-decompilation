
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::SetSurf */

int __thiscall
ccFntTy::SetSurf(ccFntTy *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6)

{
  code *pcVar1;
  ccFntTy *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  ccFntTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x460);
    }
    pcVar2 = local_8;
    EraseSufr(local_8);
    pcVar2->field_0072 = param_1;
    if (param_2 == 0) {
      param_2 = FUN_006b4fa0(param_1);
    }
    pcVar2->field_0076 = param_2;
    pcVar2->field_007A = 0;
    if ((param_5 < 1) || (param_6 < 1)) {
      param_5 = *(int *)(param_1 + 4);
      param_6 = *(int *)(param_1 + 8);
    }
    pcVar2->field_0068 = param_5;
    pcVar2->field_0060 = param_3;
    pcVar2->field_006C = param_6;
    pcVar2->field_0064 = param_4;
    pcVar2->field_0050 = 0;
    pcVar2->field_0054 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x476,0,iVar3,&DAT_007a4ccc,
                             s_ccFntTy__SetSurf_007f0224);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x478);
  return iVar3;
}

