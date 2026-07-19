
void __thiscall MTestTy::PaintMTest(MTestTy *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_48 [16];
  MTestTy *pMStack_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pMStack_8 = this;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(pMStack_8 + 0x5d));
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Start_test_obj_cpp_007cdcbc,0x57,0,errorCode,
                             &DAT_007a4ccc,s_MTestTy__PaintMTest_007cdd14);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_test_obj_cpp_007cdcbc,0x57);
  return;
}

