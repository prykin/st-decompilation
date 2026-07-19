
void FUN_00542d80(void)

{
  code *pcVar1;
  int errorCode;
  InterSystemC *this;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_64 [16];
  undefined1 local_24 [16];
  undefined4 local_14;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff98;
  errorCode = Library::MSVCRT::__setjmp3(local_64,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    this = (InterSystemC *)Library::MSVCRT::FUN_0072e530(0x34);
    if (this == (InterSystemC *)0x0) {
      DAT_00802a28 = (InterSystemC *)0x0;
    }
    else {
      DAT_00802a28 = (InterSystemC *)InterSystemC::InterSystemC(this,DAT_00806728);
    }
    *(undefined4 *)&DAT_00802a28->field_0x20 = 0;
    (*DAT_00802a28->vtable->InitSystem)((SystemClassTy *)DAT_00802a28);
    AppClassTy::AddChildSystem
              ((AppClassTy *)&DAT_00807620,DAT_0081163c,(SystemClassTy *)DAT_00802a28,0);
    InterSystemC::CreateInterfObjects(DAT_00802a28);
    local_14 = 5;
    (*DAT_00802a28->vtable->GetMessage)(DAT_00802a28,(int)local_24);
    *(undefined4 *)&DAT_00802a28->field_0x20 = 1;
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_tintersys_cpp_007c7be8,0xca,0,errorCode,
                             &DAT_007a4ccc,s_CreateInterSystem_007c7c58);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tintersys_cpp_007c7be8,0xca);
  return;
}

