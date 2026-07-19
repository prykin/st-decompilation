
void __thiscall
MMMObjTy::OutLstProc
          (MMMObjTy *this,int param_1,MMMObjTy *param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  StartServTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  InternalExceptionFrame IStack_4c;
  int iStack_8;
  
  if (param_8 != 0) {
    iStack_8 = param_8;
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    errorCode = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      OutBSlProc(param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 (undefined4 *)(DAT_0081176c + 0x140));
      Library::DKW::DDX::FUN_006c68f0(param_1,param_4,param_5,param_6,0x15,DAT_0081176c + 0x144);
      FUN_006c6850(param_1,param_4,param_5,param_6,0x15,*(undefined4 *)(DAT_0081176c + 0x140));
      uVar7 = 0;
      pvVar6 = *(void **)(DAT_0081176c + 0x34);
      uVar5 = 0xffffffff;
      uVar4 = 0xfffffffe;
      puVar2 = (uint *)FUN_006b0140(0x26b4 - (*(char *)(iStack_8 + 0x1a5f) != '\x01'),DAT_00807618);
      StartServTy::WrTextDDX(this_00,0,param_4,param_5,param_6,0x15,puVar2,uVar4,uVar5,pvVar6,uVar7)
      ;
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x3b,0,errorCode,
                               &DAT_007a4ccc,s_MMMObjTy__OutLstProc_007ccd6c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x3b);
  }
  return;
}

