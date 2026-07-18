
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::ShiftControls */

void __thiscall BehPanelTy::ShiftControls(BehPanelTy *this,int param_1)

{
  code *pcVar1;
  BehPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  BehPanelTy *local_8;
  
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
      if (*(int *)(local_8 + 0x1be) != 0) {
        FUN_006e6080(local_8,2,*(int *)(local_8 + 0x1be),(undefined4 *)(local_8 + 0x18));
      }
      if (*(int *)(this_00 + 0x1c2) != 0) {
        FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1c2),(undefined4 *)(this_00 + 0x18));
      }
      if (*(int *)(this_00 + 0x1c6) != 0) {
        FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1c6),(undefined4 *)(this_00 + 0x18));
      }
      if (*(int *)(this_00 + 0x1ca) != 0) {
        FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1ca),(undefined4 *)(this_00 + 0x18));
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_behpanel_cpp_007c1694,0x87,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c1694,0x87);
  }
  return;
}

