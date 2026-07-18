
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::ShiftControls */

void __thiscall PlayPanelTy::ShiftControls(PlayPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PlayPanelTy *pPVar5;
  PlayPanelTy *pPVar6;
  undefined4 local_54;
  undefined4 local_50 [16];
  PlayPanelTy *local_10;
  int local_c;
  PlayPanelTy *local_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pPVar5 = this + 0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pPVar5 = 0;
      pPVar5 = pPVar5 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    local_10 = this;
    iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    pPVar5 = local_10;
    if (iVar4 == 0) {
      if (*(int *)(local_10 + 0x17c) != 0) {
        FUN_006e6080(local_10,2,*(int *)(local_10 + 0x17c),(undefined4 *)(local_10 + 0x18));
      }
      pPVar6 = pPVar5 + 0x181;
      local_c = 8;
      do {
        iVar4 = 2;
        local_8 = pPVar6;
        do {
          if (*(int *)pPVar6 != 0) {
            FUN_006e6080(pPVar5,2,*(int *)pPVar6,(undefined4 *)(pPVar5 + 0x18));
          }
          pPVar6 = pPVar6 + 0x20;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pPVar6 = local_8 + 4;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = pPVar6;
      if (*(int *)(pPVar5 + 0x1c5) != 0) {
        FUN_006e6080(pPVar5,2,*(int *)(pPVar5 + 0x1c5),(undefined4 *)(pPVar5 + 0x18));
      }
      if (*(int *)(pPVar5 + 0x1c1) != 0) {
        FUN_006e6080(pPVar5,2,*(int *)(pPVar5 + 0x1c1),(undefined4 *)(pPVar5 + 0x18));
      }
      DAT_00858df8 = (undefined4 *)local_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0xfe,0,iVar4,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c7574,0xfe);
  }
  return;
}

