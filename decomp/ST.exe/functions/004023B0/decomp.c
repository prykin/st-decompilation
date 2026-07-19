
void __thiscall
FSGSTy::OutChSlProc(FSGSTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   int param_5,int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  undefined4 *puStack_8;
  
  if (param_8 != (undefined4 *)0x0) {
    puStack_8 = param_8;
    IStack_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_50;
    errorCode = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar2 = puStack_8;
    if (errorCode == 0) {
      Library::DKW::DDX::FUN_006c68f0(param_1,param_4,param_5,param_6,param_7,(int)(puStack_8 + 1));
      FUN_006c6850(param_1,param_4,param_5,param_6,param_7,*puVar2);
      Library::DKW::DDX::FUN_006c6660
                (param_1,param_4 + -0x15 + param_6,param_5 + 0x26,7,param_7 - 0x62,3,0);
      Library::DKW::DDX::FUN_006c6470
                (param_1,param_4 + -0x15 + param_6,param_5 + 0x26,(undefined4 *)0x7,param_7 + -0x62,
                 3,*puVar2);
      iStack_c = param_5 + -0x16 + param_7;
      Library::DKW::DDX::FUN_006c53b0
                (param_1,param_4,iStack_c,param_4 + -1 + param_6,iStack_c,*puVar2);
      Library::DKW::DDX::FUN_006c53b0
                (param_1,param_4 + 0x168,iStack_c,param_4 + 0x168,param_5 + -1 + param_7,*puVar2);
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    g_currentExceptionFrame = IStack_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x66,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__OutChSlProc_007cbf98);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x66);
  }
  return;
}

