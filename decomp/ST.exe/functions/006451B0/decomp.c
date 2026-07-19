
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::SetDangerous */

undefined4 __thiscall STTorpC::SetDangerous(STTorpC *this,undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 local_c;
  STTorpC *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  local_8 = this;
  errorCode = __setjmp3(local_50,0,unaff_ESI,pIVar5);
  if (errorCode == 0) {
    if (*param_2 == 0xffffffff) {
      local_10 = param_1;
      local_c = 1;
      uVar2 = FUN_006ae1c0(*(uint **)(local_8 + 0x241),&local_10);
      *param_2 = uVar2;
    }
    g_currentExceptionFrame = pIVar5;
    return 0;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x486,0,errorCode,&DAT_007a4ccc
                             ,s_STTorpC__SetDangerous_007d2600);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x487);
  return 0xffffffff;
}

