
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::IsDangerous */

int __thiscall STTorpC::IsDangerous(STTorpC *this,int param_1,uint *param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 unaff_ESI;
  uint uVar3;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STTorpC *local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)(this->field_0241 + 0xc);
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar2 = local_c;
  if (errorCode == 0) {
    if (local_c == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,
                 0x466);
    }
    uVar3 = 0;
    local_8 = 0;
    *param_2 = 0xffffffff;
    if (0 < iVar2) {
      while (FUN_006acc70(local_10->field_0241,uVar3,&local_18), local_18 != param_1) {
        uVar3 = uVar3 + 1;
        if (iVar2 <= (int)uVar3) {
          g_currentExceptionFrame = local_5c.previous;
          return local_8;
        }
      }
      local_8 = (local_14 != 1) + 1;
      *param_2 = uVar3;
    }
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (errorCode != -0x5001fff7) {
    iVar2 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x471,0,errorCode,
                               &DAT_007a4ccc,s_STTorpC__IsDangerous_007d25e4);
    if (iVar2 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x472);
      return -1;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  *param_2 = 0xffffffff;
  return 0;
}

