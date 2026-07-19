
void __cdecl FUN_005404f0(int param_1,int param_2,char param_3,BITMAPINFO *param_4,uint param_5)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  if ((DAT_0080759c != (int *)0x0) && (param_4 != (BITMAPINFO *)0x0)) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
    errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar3);
    if (errorCode == 0) {
      if (param_3 == '\x01') {
        FUN_006b48a0(DAT_0080759c,param_1,param_2,param_4,(uint *)0x0,param_5);
      }
      else if (param_3 == '\x06') {
        Library::DKW::DDX::FUN_006b82e0
                  ((int)DAT_0080759c,param_1,param_2,(byte *)param_4,0,0,
                   (param_4->bmiHeader).biWidth,(byte *)(param_4->bmiHeader).biHeight);
        g_currentExceptionFrame = pIVar3;
        return;
      }
      g_currentExceptionFrame = pIVar3;
      return;
    }
    g_currentExceptionFrame = pIVar3;
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0x26,0,errorCode,
                               &DAT_007a4ccc,s_TransPutDDX_007c7b5c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_support_cpp_007c7b2c,0x26);
  }
  return;
}

