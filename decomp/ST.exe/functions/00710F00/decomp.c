
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::EraseSufr */

int __thiscall ccFntTy::EraseSufr(ccFntTy *this)

{
  code *pcVar1;
  ccFntTy *pcVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  ccFntTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,pIVar5);
  pcVar2 = local_8;
  if (iVar3 == 0) {
    if ((*(int *)(local_8 + 0x72) != 0) && (*(int *)(local_8 + 0x7a) != 0)) {
      FUN_006ab060((undefined4 *)(local_8 + 0x72));
      *(undefined4 *)(pcVar2 + 0x76) = 0;
    }
    g_currentExceptionFrame = pIVar5;
    return 0;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x4e3,0,iVar3,&DAT_007a4ccc,
                             s_ccFntTy__EraseSufr_007f0264);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x4e5);
  return iVar3;
}

