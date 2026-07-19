
void __thiscall MMsgTy::ShowSprites(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  MMsgTy *pMVar5;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  MMsgTy *pMStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pMStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = pMStack_8;
  if (iVar3 == 0) {
    if (*(uint *)(pMStack_8 + 0x1cfb) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(pMStack_8 + 0x1d3f),*(uint *)(pMStack_8 + 0x1cfb),0xfffffffe,
                 *(uint *)(pMStack_8 + 0x1d13),*(uint *)(pMStack_8 + 0x1d17));
    }
    iVar3 = 0;
    if (pMVar2[0x9a] != (MMsgTy)0x0) {
      pMVar5 = pMVar2 + 0xe7;
      do {
        if (*(uint *)pMVar5 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)(pMVar5 + 0x44),*(uint *)pMVar5,0xfffffffe,*(uint *)(pMVar5 + 0x18),
                     *(uint *)(pMVar5 + 0x1c));
        }
        iVar3 = iVar3 + 1;
        pMVar5 = pMVar5 + 0x1fb;
      } while (iVar3 < (int)(uint)(byte)pMVar2[0x9a]);
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x4b,0,iVar3,&DAT_007a4ccc,
                             s_MMsgTy__ShowSprites_007ccc48);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x4b);
  return;
}

