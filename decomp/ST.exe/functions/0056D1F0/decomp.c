
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CommonFunction */

undefined4 __thiscall STAppC::CommonFunction(STAppC *this,int param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  STAppC *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  if (this->field_4EFA != 0) {
    return 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    if (DAT_0080674c == 0) {
      Library::DKW::DDX::FUN_006bd740(DAT_008075a8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    }
    if ((*(int *)&local_8->field_0x4ef6 != 0) &&
       (DAT_0080673c = DAT_0080673c + -1, DAT_0080673c < 1)) {
      DAT_0080673c = *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10);
      if ((DAT_00802a30 != 0) && (*(int *)(DAT_00802a30 + 0xa9) == 0)) {
        Library::DKW::DDX::FUN_006b8d50(*(int **)(DAT_00802a30 + 0xad),0,0,0,0);
      }
      FUN_006ed100(DAT_00807598);
      Library::DKW::DDX::FUN_006bd740(DAT_008075a8);
    }
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar2 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x3e6,0,errorCode,&DAT_007a4ccc,
                             s_STAppC__CommonFunction_007ca114);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tapp_cpp_007ca0c8,999);
  return 0xffffffff;
}

