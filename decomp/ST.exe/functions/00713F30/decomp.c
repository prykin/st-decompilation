
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   cTypingTy::TypingInitSarr */

int __thiscall
cTypingTy::TypingInitSarr
          (cTypingTy *this,int param_1,void *param_2,int param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7,uint param_8,uint param_9,int param_10,
          int param_11,int param_12,undefined4 param_13)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  cTypingTy *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == (void *)0x0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0xa39);
    }
    local_8 = (uint *)ccFntTy::_SarrToTxt(param_2,(char *)0x0,param_1);
    iVar2 = TypingInit(local_c,local_8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,param_10,param_11,param_12,param_13);
    if (local_8 != (uint *)0x0) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return iVar2;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0xa3e,0,iVar2,&DAT_007a4ccc,
                             s_cTypingTy__TypingInitSarr_007f03d4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (local_8 != (uint *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0xa41);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

