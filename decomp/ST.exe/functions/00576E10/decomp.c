
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::CreateSystemObjects */

undefined4 __thiscall GameSystemC::CreateSystemObjects(GameSystemC *this)

{
  code *pcVar1;
  GameSystemC *pGVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  GameSystemC *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar5);
  pGVar2 = local_8;
  if (errorCode == 0) {
    (**(code **)(*(int *)local_8 + 0xc))(0x100,&DAT_007fb2a4,0,0);
    (**(code **)(*(int *)pGVar2 + 0xc))(0x102,&DAT_007fb288,0,0);
    g_currentExceptionFrame = pIVar5;
    return 0;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x65,0,errorCode,&DAT_007a4ccc,
                             s_GameSystemC__CreateSystemObjects_007cabcc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x65);
  return 0xfffffffc;
}

