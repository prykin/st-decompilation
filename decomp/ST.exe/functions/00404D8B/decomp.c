
void __thiscall
cLoadingTy::SetProcess(cLoadingTy *this,undefined4 param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  cLoadingTy *this_00;
  int errorCode;
  DWORD DVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  cLoadingTy *pcStack_8;
  
  pcStack_8 = this;
  thunk_FUN_00555570((int)this);
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  this_00 = pcStack_8;
  if (errorCode == 0) {
    if (-1 < *(int *)(pcStack_8 + 0x3c)) {
      SetState(pcStack_8,2,0,(char *)0x0);
    }
    *(undefined4 *)(this_00 + 0x3c) = param_1;
    DVar2 = timeGetTime();
    *(DWORD *)(this_00 + 0x44) = DVar2;
    *(int *)(this_00 + 0x40) = param_3;
    if (param_3 == 0) {
      *(undefined4 *)(this_00 + 0x40) = 1;
    }
    *(undefined4 *)(this_00 + 0x50) = 0xffffffff;
    DrawLineCR(this_00,param_2);
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0x109,0,errorCode,&DAT_007a4ccc
                             ,s_cLoadingTy__SetProcess_007c8fb4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_grig_loading_cpp_007c8f0c,0x10a);
  return;
}

