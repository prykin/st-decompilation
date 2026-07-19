
void __thiscall MAdvTy::NoneMAdv(MAdvTy *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  undefined4 auStack_44 [16];
  
  errorCode = Library::MSVCRT::__setjmp3(auStack_44,0,unaff_ESI,g_currentExceptionFrame);
  if (errorCode == 0) {
    return;
  }
  iVar2 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x57,0,errorCode,&DAT_007a4ccc
                             ,s_MAdvTy__NoneMAdv_007cbc8c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x57);
  return;
}

