
void __thiscall SIDTy::DeleteCtrls(SIDTy *this)

{
  code *pcVar1;
  SIDTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  SIDTy *pSVar5;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  SIDTy *pSStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pSStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 == 0) {
    iVar3 = 4;
    pSVar5 = pSStack_8 + 0x1af1;
    do {
      if (*(uint *)pSVar5 != 0) {
        FUN_006e56b0(*(void **)(pSVar2 + 0xc),*(uint *)pSVar5);
      }
      *(uint *)pSVar5 = 0;
      pSVar5 = pSVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_006b3af0(DAT_008075a8,*(uint *)(pSVar2 + 0x1cb4));
    if (*(uint *)(pSVar2 + 0x1b05) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar2 + 0x1b49),*(uint *)(pSVar2 + 0x1b05));
    }
    if (*(uint *)(pSVar2 + 0x1b96) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar2 + 0x1bda),*(uint *)(pSVar2 + 0x1b96));
    }
    if (*(uint *)(pSVar2 + 0x1c27) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pSVar2 + 0x1c6b),*(uint *)(pSVar2 + 0x1c27));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x110,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cd5c4,0x110);
  return;
}

