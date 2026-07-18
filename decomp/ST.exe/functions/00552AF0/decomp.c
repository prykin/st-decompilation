
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::ShiftControls */

void __thiscall UpgPanelTy::ShiftControls(UpgPanelTy *this,int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_44 [16];
  
  if (param_1 != *(int *)(this + 0x5c)) {
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar3 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar3 = -sVar3;
    }
    *(short *)(this + 0x2e) = sVar3;
    uVar2 = DAT_00858df8;
    iVar4 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      DAT_00858df8 = uVar2;
      return;
    }
    DAT_00858df8 = uVar2;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x36,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c87b8,0x36);
  }
  return;
}

