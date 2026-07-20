
undefined4 FUN_005daa90(void)

{
  int iVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  StartSystemTy *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  if (g_int_00811764 != (int *)0x0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    iVar1 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar2);
    if (iVar1 == 0) {
      StartSystemTy::sub_005DAB30(local_8);
      Library::DKW::DDX::FUN_006b65f0(g_int_00811764,&local_8->field_068E);
      g_currentExceptionFrame = pIVar2;
      return 0;
    }
    g_currentExceptionFrame = pIVar2;
    StartSystemTy::sub_005DAB30(local_8);
  }
  return 0xfffffffa;
}

