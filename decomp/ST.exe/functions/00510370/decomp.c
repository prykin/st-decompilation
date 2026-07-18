
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::ShiftControls */

void __thiscall FrmPanelTy::ShiftControls(FrmPanelTy *this,int param_1)

{
  code *pcVar1;
  FrmPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  FrmPanelTy *pFVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  FrmPanelTy *local_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    local_8 = this;
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar3 == 0) {
      iVar3 = 8;
      pFVar5 = local_8 + 0x1b3;
      do {
        if (*(int *)pFVar5 != 0) {
          FUN_006e6080(this_00,2,*(int *)pFVar5,(undefined4 *)(this_00 + 0x18));
        }
        pFVar5 = pFVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      pFVar5 = this_00 + 0x1d3;
      iVar3 = 4;
      do {
        if (*(int *)pFVar5 != 0) {
          FUN_006e6080(this_00,2,*(int *)pFVar5,(undefined4 *)(this_00 + 0x18));
        }
        pFVar5 = pFVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x5e,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c2958,0x5e);
  }
  return;
}

