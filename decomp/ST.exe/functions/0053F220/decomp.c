
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::DoneProdPanel */

void __thiscall ProdPanelTy::DoneProdPanel(ProdPanelTy *this)

{
  code *pcVar1;
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ProdPanelTy *pPVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  ProdPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    if (*(uint *)(local_8 + 0x180) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x180));
    }
    *(undefined4 *)(pPVar2 + 0x180) = 0;
    if (*(uint *)(pPVar2 + 0x19d) != 0) {
      FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)(pPVar2 + 0x19d));
    }
    *(undefined4 *)(pPVar2 + 0x19d) = 0;
    pPVar5 = pPVar2 + 0x1a1;
    iVar3 = 5;
    do {
      if (*(uint *)pPVar5 != 0) {
        FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)pPVar5);
        *(uint *)pPVar5 = 0;
      }
      pPVar5 = pPVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(uint **)(pPVar2 + 0x17c) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pPVar2 + 0x17c));
      *(undefined4 *)(pPVar2 + 0x17c) = 0;
    }
    if (*(int *)(pPVar2 + 0x184) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pPVar2 + 0x184));
    }
    *(undefined4 *)(pPVar2 + 400) = 0;
    *(undefined4 *)(pPVar2 + 0x188) = 0;
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x1a6,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7870,0x1a6);
  return;
}

