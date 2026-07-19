
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 58 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl
PutDDXClip(int param_1,int param_2,int param_3,int param_4,uint param_5,byte *param_6,char param_7,
          BITMAPINFO *param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  if ((DAT_0080759c != 0) && (param_8 != (BITMAPINFO *)0x0)) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
    errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar3);
    if (errorCode == 0) {
      if (param_7 == '\x01') {
        Library::DKW::DDX::FUN_006b42d0
                  (DAT_0080759c,param_1,param_2,param_8,(uint *)0x0,param_3,param_4,param_5,
                   (DWORD)param_6);
      }
      else if (param_7 == '\x06') {
        Library::DKW::DDX::FUN_006b82e0
                  (DAT_0080759c,param_1,param_2,(byte *)param_8,param_3,param_4,param_5,param_6);
        g_currentExceptionFrame = pIVar3;
        return;
      }
      g_currentExceptionFrame = pIVar3;
      return;
    }
    g_currentExceptionFrame = pIVar3;
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0x3a,0,errorCode,
                               &DAT_007a4ccc,s_PutDDXClip_007c7b6c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_support_cpp_007c7b2c,0x3a);
  }
  return;
}

