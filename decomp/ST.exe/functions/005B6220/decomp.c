
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::DoneMMObj */

void __thiscall MMObjTy::DoneMMObj(MMObjTy *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  MMObjTy *pMVar4;
  MMObjTy *pMVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar5 = local_8;
  if (iVar2 == 0) {
    iVar2 = 0xd;
    pMVar4 = local_8 + 0x66;
    do {
      if (*(uint *)pMVar4 != 0) {
        FUN_006e56b0(*(void **)(pMVar5 + 0xc),*(uint *)pMVar4);
      }
      *(uint *)pMVar4 = 0;
      pMVar4 = pMVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pMVar5 = pMVar5 + 0x174;
    iVar2 = 0xd;
    do {
      SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar5 + -0x91));
      SpriteClassTy::CloseSprite((SpriteClassTy *)pMVar5);
      if (*(SpriteClassTy *)(pMVar5 + -0x92) != (SpriteClassTy)0x0) {
        SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar5 + 0x91));
      }
      pMVar5 = pMVar5 + 0x1fb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0xe5,0,iVar2,&DAT_007a4ccc,
                             s_MMObjTy__DoneMMObj_007ccacc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0xe5);
  return;
}

