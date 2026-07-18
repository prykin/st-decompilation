
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::ShiftControls */

void __thiscall OptPanelTy::ShiftControls(OptPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  OptPanelTy *pOVar6;
  OptPanelTy *pOVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  OptPanelTy *local_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pOVar6 = this + 0x18;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pOVar6 = 0;
      pOVar6 = pOVar6 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    pOVar6 = local_8;
    if (iVar5 == 0) {
      iVar5 = 10;
      pOVar7 = local_8 + 0x1b5;
      do {
        if (*(int *)pOVar7 != 0) {
          FUN_006e6080(pOVar6,2,*(int *)pOVar7,(undefined4 *)(pOVar6 + 0x18));
        }
        pOVar7 = pOVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      pOVar7 = pOVar6 + 0x1ad;
      iVar5 = 2;
      do {
        if (*(int *)pOVar7 != 0) {
          FUN_006e6080(pOVar6,2,*(int *)pOVar7,(undefined4 *)(pOVar6 + 0x18));
        }
        pOVar7 = pOVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      switch(pOVar6[0x1a4]) {
      case (OptPanelTy)0x3:
      case (OptPanelTy)0x4:
      case (OptPanelTy)0xc:
      case (OptPanelTy)0xe:
        pOVar7 = pOVar6 + 0x18;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pOVar7 = 0;
          pOVar7 = pOVar7 + 4;
        }
        if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
          uVar3 = 0x56;
        }
        *(undefined4 *)(pOVar6 + 0x28) = uVar3;
        if (*(int *)(pOVar6 + 0x1b5) != 0) {
          FUN_006e6080(pOVar6,2,*(int *)(pOVar6 + 0x1b5),(undefined4 *)(pOVar6 + 0x18));
        }
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x156,0,iVar5,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c70a0,0x156);
  }
  return;
}

