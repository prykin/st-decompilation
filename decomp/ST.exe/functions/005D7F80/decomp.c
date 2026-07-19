
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DoneSID */

void __thiscall SIDTy::DoneSID(SIDTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  MMObjTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = (MMObjTy *)this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  pMVar2 = local_8;
  if (errorCode == 0) {
    MMObjTy::DoneMMObj(local_8);
    if (*(byte **)(pMVar2 + 0x1cd0) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pMVar2 + 0x1cd0));
    }
    *(undefined4 *)(pMVar2 + 0x1cd0) = 0;
    if (*(byte **)(pMVar2 + 0x1ccc) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pMVar2 + 0x1ccc));
    }
    *(undefined4 *)(pMVar2 + 0x1ccc) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1a60));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1b01));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1b92));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1c23));
    if (*(uint *)(pMVar2 + 0x1cb4) != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pMVar2 + 0x1cb4));
    }
    *(undefined4 *)(pMVar2 + 0x1cb4) = 0xffffffff;
    if (*(int *)(pMVar2 + 0x1cb8) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1cb8));
    }
    if (*(int *)(pMVar2 + 0x1cc8) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1cc8));
    }
    if (*(int *)(pMVar2 + 0x1cbc) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1cbc));
    }
    if (*(int *)(pMVar2 + 0x1cc0) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1cc0));
    }
    if (*(int *)(pMVar2 + 0x4d) != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)(pMVar2 + 0x3d));
    }
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x62,0,errorCode,&DAT_007a4ccc
                             ,s_SIDTy__DoneSID_007cd628);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x62);
  return;
}

