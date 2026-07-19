
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::Update */

void __thiscall BldLabPanelTy::Update(BldLabPanelTy *this,void *param_1)

{
  BldLabPanelTy *pBVar1;
  code *pcVar2;
  BldLabPanelTy *this_00;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint local_c;
  BldLabPanelTy *local_8;
  
  if (*(int *)(this + 0x27a) != 0) {
    local_c = *(uint *)(*(int *)(this + 0x27a) + 0xc);
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_8 = this;
    errorCode = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (errorCode == 0) {
      pBVar1 = local_8 + 0x27a;
      thunk_FUN_0043beb0(DAT_007fa174,0xc,(int *)pBVar1);
      thunk_FUN_0053f510(this_00,*(uint *)(*(int *)pBVar1 + 0xc),local_c);
      thunk_FUN_004efe20(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x30,0,errorCode,
                               &DAT_007a4ccc,s_BldLabPanelTy__Update_007c1928);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_bldlab_cpp_007c18b4,0x30);
  }
  return;
}

