
int __cdecl FUN_00648e70(int param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  ushort *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_8 = (ushort *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    if ((DAT_00802a38 == (void *)0x0) || (param_1 == 0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_creat_cpp_007d2880,0x82);
    }
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_2 = PTR_s_AIBOSS_0079d664;
    }
    local_8 = FUN_006f2d90(param_1,param_2,1,0);
    if (local_8 == (ushort *)0x0) {
      local_8 = (ushort *)thunk_FUN_00649eb0();
    }
    FUN_006e6200(DAT_00802a38,0x403,(undefined4 *)0x28,(undefined4 *)0x0,(int *)0x0,local_8,0);
    thunk_FUN_006484f0((int *)&local_8);
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_creat_cpp_007d2880,0x8d,0,iVar2,&DAT_007a4ccc,
                             s_CreateArbiter_007d28b4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  thunk_FUN_006484f0((int *)&local_8);
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_creat_cpp_007d2880,0x8f);
  return iVar2;
}

