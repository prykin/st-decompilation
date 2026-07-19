
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintSID */

void __thiscall SIDTy::PaintSID(SIDTy *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  undefined4 local_44 [16];
  
  errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,g_currentExceptionFrame);
  if (errorCode == 0) {
    return;
  }
  iVar2 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x6b,0,errorCode,&DAT_007a4ccc
                             ,s_SIDTy__PaintSID_007cd63c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x6b);
  return;
}

