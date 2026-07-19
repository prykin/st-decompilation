
undefined4 __thiscall
STAllPlayersC::RegisterGroup(STAllPlayersC *this,char param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  int errorCode;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  uint *puStack_c;
  int iStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  puStack_c = *(uint **)((int)&DAT_007f4e24 + param_1 * 0xa62 + 1);
  g_currentExceptionFrame = &IStack_50;
  errorCode = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (param_3 == 0) {
      RaiseInternalException
                (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x690);
    }
    puVar2 = puStack_c;
    uVar3 = FUN_006acc70((int)puStack_c,param_2 & 0xffff,&iStack_8);
    if ((uVar3 != 0xfffffffc) && (iStack_8 != 0)) {
      RaiseInternalException
                (-0x5001fffa,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x692);
    }
    Library::DKW::TBL::FUN_006ae140(puVar2,param_2 & 0xffff,&param_3);
    g_currentExceptionFrame = IStack_50.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x695,0,errorCode,
                             &DAT_007a4ccc,s_STAllPlayersC__RegisterGroup_007a6628);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x696);
  return 0xffffffff;
}

