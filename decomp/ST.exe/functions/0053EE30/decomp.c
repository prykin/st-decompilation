
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PreInitProdPanel */

void __thiscall ProdPanelTy::PreInitProdPanel(ProdPanelTy *this)

{
  code *pcVar1;
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  ProdPanelTy *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(local_8 + 0x4c));
    *(int *)(pPVar2 + 0x44) = *(int *)(pPVar2 + 0x50) + *(int *)(pPVar2 + 0x58);
    *(int *)(pPVar2 + 0x174) =
         (*(int *)(pPVar2 + 0x48) - (*(int *)(pPVar2 + 0x50) + *(int *)(pPVar2 + 0x58))) +
         DAT_00806734;
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x178,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7870,0x178);
  return;
}

