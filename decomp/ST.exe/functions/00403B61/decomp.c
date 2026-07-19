
void __thiscall
ChatGlassTy::OutChGlProc
          (ChatGlassTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  undefined4 *puStack_8;
  
  if (param_8 != (undefined4 *)0x0) {
    puStack_8 = param_8;
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar2 = puStack_8;
    if (iVar3 == 0) {
      Library::DKW::DDX::FUN_006c68f0(param_1,param_4,param_5,param_6,param_7,(int)(puStack_8 + 1));
      FUN_006c6850(param_1,param_4,param_5,param_6,param_7,*puVar2);
      iVar3 = param_5 + -0x16 + param_7;
      Library::DKW::DDX::FUN_006c53b0(param_1,param_4,iVar3,param_4 + -1 + param_6,iVar3,*puVar2);
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x153,0,iVar3,&DAT_007a4ccc
                               ,s_ChatGlassTy__OutChGlProc_007ccb54);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x153);
  }
  return;
}

