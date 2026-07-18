
void __thiscall MMsgTy::ShowSprites(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  MMsgTy *pMVar5;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  MMsgTy *pMStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pMStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pMVar2 = pMStack_8;
  if (iVar3 == 0) {
    if (*(uint *)(pMStack_8 + 0x1cfb) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(pMStack_8 + 0x1d3f),*(uint *)(pMStack_8 + 0x1cfb),0xfffffffe,
                   *(uint *)(pMStack_8 + 0x1d13),*(uint *)(pMStack_8 + 0x1d17));
    }
    iVar3 = 0;
    if (pMVar2[0x9a] != (MMsgTy)0x0) {
      pMVar5 = pMVar2 + 0xe7;
      do {
        if (*(uint *)pMVar5 != 0xffffffff) {
          FUN_006b34d0(*(uint **)(pMVar5 + 0x44),*(uint *)pMVar5,0xfffffffe,*(uint *)(pMVar5 + 0x18)
                       ,*(uint *)(pMVar5 + 0x1c));
        }
        iVar3 = iVar3 + 1;
        pMVar5 = pMVar5 + 0x1fb;
      } while (iVar3 < (int)(uint)(byte)pMVar2[0x9a]);
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x4b,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ccb74,0x4b);
  return;
}

