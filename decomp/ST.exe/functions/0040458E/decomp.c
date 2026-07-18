
void __thiscall MMObjTy::DoneMMObj(MMObjTy *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  MMObjTy *pMVar4;
  MMObjTy *pMVar5;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  MMObjTy *pMStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pMStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pMVar5 = pMStack_8;
  if (iVar2 == 0) {
    iVar2 = 0xd;
    pMVar4 = pMStack_8 + 0x66;
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
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_mmenuobj_cpp_007cca38,0xe5,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cca38,0xe5);
  return;
}

