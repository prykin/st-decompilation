
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterGroup */

undefined4 __thiscall
STAllPlayersC::UnRegisterGroup(STAllPlayersC *this,char param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  int errorCode;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  local_c = *(uint **)((int)&DAT_007f4e24 + param_1 * 0xa62 + 1);
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (param_3 == 0) {
      RaiseInternalException
                (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x6a7);
    }
    puVar2 = local_c;
    uVar3 = FUN_006acc70((int)local_c,param_2 & 0xffff,&local_8);
    if ((uVar3 == 0xfffffffc) || (local_8 != param_3)) {
      RaiseInternalException
                (-0x5001fffe,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x6a9);
    }
    local_8 = 0;
    Library::DKW::TBL::FUN_006ae140(puVar2,param_2 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x6ad,0,errorCode,
                             &DAT_007a4ccc,s_STAllPlayersC__UnRegisterGroup_007a664c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x6ae);
  return 0xffffffff;
}

