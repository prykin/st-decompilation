
void __thiscall InfocPanelTy::DoneInfocPanel(InfocPanelTy *this)

{
  code *pcVar1;
  InfocPanelTy *pIVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  InfocPanelTy *pIStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pIStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pIVar2 = pIStack_8;
  if (iVar3 == 0) {
    if (*(uint *)(pIStack_8 + 0x3d0) != 0) {
      FUN_006e56b0(*(void **)(pIStack_8 + 0xc),*(uint *)(pIStack_8 + 0x3d0));
    }
    *(undefined4 *)(pIVar2 + 0x3d0) = 0;
    if (*(uint **)(pIVar2 + 0x3d5) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pIVar2 + 0x3d5));
      *(undefined4 *)(pIVar2 + 0x3d5) = 0;
    }
    *(undefined4 *)(pIVar2 + 0x3cc) = 0;
    *(undefined4 *)(pIVar2 + 0x3c8) = 0;
    *(undefined4 *)(pIVar2 + 0x3c4) = 0;
    DAT_00801698 = 0;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x4f,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c3eb0,0x4f);
  return;
}

