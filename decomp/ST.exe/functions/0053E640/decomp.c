
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::DonePanel */

void __thiscall SpecPanelTy::DonePanel(SpecPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if (*(uint *)(local_8 + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x17c));
    }
    *(undefined4 *)(pSVar2 + 0x17c) = 0;
    if (*(uint **)(pSVar2 + 0x189) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pSVar2 + 0x189));
      *(undefined4 *)(pSVar2 + 0x189) = 0;
    }
    if (*(int *)(pSVar2 + 0x185) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pSVar2 + 0x185));
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0xfa,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7870,0xfa);
  return;
}

