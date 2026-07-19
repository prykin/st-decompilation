
void __thiscall
StartServTy::WrTextDDX
          (StartServTy *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          uint *param_6,uint param_7,uint param_8,void *param_9,undefined4 param_10)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  BITMAPINFO *pBStack_c;
  int iStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar2 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_4 < 1) {
      iVar2 = FUN_00711370(param_9,param_6);
      param_4 = iVar2 + (((int)param_7 < 1) - 1 & param_7);
    }
    iStack_8 = param_4;
    if (param_5 < 1) {
      iVar2 = FUN_007113e0(param_9,param_6);
      param_5 = iVar2 + (((int)param_8 < 1) - 1 & param_8);
    }
    if (param_1 == 0) {
      pBStack_c = (BITMAPINFO *)ccFntTy::CreateSurf(param_9,0,0,0,0,iStack_8,param_5,1);
    }
    else {
      pBStack_c = (BITMAPINFO *)
                  FUN_006b55f0((undefined4 *)0x0,0,0,0,param_1,0,param_2,param_3,iStack_8,param_5);
      ccFntTy::SetSurf(param_9,(int)pBStack_c,0,0,0,0,0);
    }
    ccFntTy::WrTxt(param_9,param_6,param_7,param_8,param_10,-1,-1);
    FUN_006b5f80(DAT_008075a8,param_2,param_3,iStack_8,param_5);
    thunk_FUN_005404f0(param_2,param_3,'\x01',pBStack_c,-(uint)(param_1 != 0));
    ccFntTy::EraseSufr(param_9);
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0x75,0,iVar2,&DAT_007a4ccc,
                             s_StartServTy__WrTextDDX_007c7b84);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ccFntTy::EraseSufr(param_9);
  return;
}

