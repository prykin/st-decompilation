
void __thiscall MMsgTy::DoneMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  MMObjTy *pMStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pMStack_8 = (MMObjTy *)this;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  pMVar2 = pMStack_8;
  if (errorCode == 0) {
    MMObjTy::DoneMMObj(pMStack_8);
    *(undefined4 *)(DAT_0081176c + 0x2e6) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1cf7));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1d88));
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x31,0,errorCode,
                             &DAT_007a4ccc,s_MMsgTy__DoneMMsg_007ccc1c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x31);
  return;
}

