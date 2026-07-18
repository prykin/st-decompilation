
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::ShiftControls */

void __thiscall SpecPanelTy::ShiftControls(SpecPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SpecPanelTy *pSVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pSVar5 = this + 0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar5 = 0;
      pSVar5 = pSVar5 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (*(int *)(local_8 + 0x17c) != 0) {
        FUN_006e6080(local_8,2,*(int *)(local_8 + 0x17c),(undefined4 *)(local_8 + 0x18));
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x134,0,iVar4,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c7870,0x134);
  }
  return;
}

