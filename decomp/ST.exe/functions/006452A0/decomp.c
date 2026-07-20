
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::ClearDangerous */

undefined4 __thiscall STTorpC::ClearDangerous(STTorpC *this,int param_1,uint param_2)

{
  code *pcVar1;
  STTorpC *pSVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10 [2];
  STTorpC *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x4a1,0,errorCode,
                               &DAT_007a4ccc,s_STTorpC__ClearDangerous_007d261c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(errorCode,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x4a2);
    return 0xffffffff;
  }
  if (param_2 == 0xffffffff) {
    local_10[0] = param_1;
    local_10[1] = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_8->field_0241,local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  FUN_006acc70(local_8->field_0241,param_2,local_10);
  if (local_10[0] == param_1) {
    local_10[1] = 0;
    Library::DKW::TBL::FUN_006ae140((uint *)pSVar2->field_0241,param_2,local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x49e);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

