
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::DrawLine */

void __thiscall cLoadingTy::DrawLine(cLoadingTy *this,uint *param_1)

{
  code *pcVar1;
  cLoadingTy *pcVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  cLoadingTy *local_8;
  
  local_8 = this;
  thunk_FUN_00555570((int)this);
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  pcVar2 = local_8;
  if (errorCode == 0) {
    FUN_006b4170(*(int *)(local_8 + 4),0,*(int *)(local_8 + 0x14) + *(int *)(local_8 + 0xc),
                 *(int *)(local_8 + 0x10) + *(int *)(local_8 + 0x18),*(int *)(local_8 + 0x1c),
                 *(int *)(local_8 + 0x34),0);
    ccFntTy::WrStr(*(ccFntTy **)(pcVar2 + 8),param_1,*(int *)(pcVar2 + 0xc),*(int *)(pcVar2 + 0x10),
                   *(undefined4 *)(pcVar2 + 0x24));
    Library::DKW::DDX::FUN_006b42d0
              ((uint)DAT_0080759c,*(int *)(pcVar2 + 0xc) + *(int *)(pcVar2 + 0x14),
               *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(BITMAPINFO **)pcVar2,(uint *)0x0,
               *(int *)(pcVar2 + 0xc) + *(int *)(pcVar2 + 0x14),
               *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(DWORD *)(pcVar2 + 0x1c),
               *(DWORD *)(pcVar2 + 0x34));
    Library::DKW::DDX::FUN_006b4680
              (DAT_0080759c,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
               *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(BITMAPINFO **)(pcVar2 + 4),
               (uint *)0x0,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
               *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(DWORD *)(pcVar2 + 0x1c),
               *(DWORD *)(pcVar2 + 0x34),0);
    Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
    if (*(code **)(pcVar2 + 0x58) != (code *)0x0) {
      (**(code **)(pcVar2 + 0x58))(*(undefined4 *)(pcVar2 + 0x54));
    }
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0xcc,0,errorCode,&DAT_007a4ccc,
                             s_cLoadingTy__DrawLine_007c8f7c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_grig_loading_cpp_007c8f0c,0xcd);
  return;
}

