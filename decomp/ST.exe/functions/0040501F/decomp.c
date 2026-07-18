
void __thiscall MMsgTy::DoneMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  MMObjTy *pMStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pMStack_8 = (MMObjTy *)this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  pMVar2 = pMStack_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(pMStack_8);
    *(undefined4 *)(DAT_0081176c + 0x2e6) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1cf7));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1d88));
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x31,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ccb74,0x31);
  return;
}

