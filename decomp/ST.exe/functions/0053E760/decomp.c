
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::SwitchPanel */

void __thiscall SpecPanelTy::SwitchPanel(SpecPanelTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  SpecPanelTy *pSVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x113,0,iVar4,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar4,0,0x7c7870,0x113);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  sVar1 = *(short *)(local_8 + 0x172);
  if (sVar1 == 1) {
    if (param_1 != 0) {
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    if (*(int *)(local_8 + 0x178) != 0) {
      *(int *)(local_8 + 0x28) = 0x4202;
      *(undefined2 *)(local_8 + 0x2c) = 0;
      *(undefined2 *)(local_8 + 0x2e) = 2;
      *(int *)(local_8 + 0x30) = *(int *)(local_8 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(local_8 + 0x18);
      }
    }
    (**(code **)(*(int *)pSVar3 + 0x18))(0);
  }
  else {
    if (sVar1 == 2) {
      if (param_1 == 0) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      }
      *(undefined2 *)(local_8 + 0x172) = 3;
      thunk_FUN_005252c0(0xaf);
      if (DAT_00801688 == (CPanelTy *)0x0) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      }
      CPanelTy::ShiftControls(DAT_00801688,*(int *)(pSVar3 + 0x180),0);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    if (sVar1 != 3) {
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
  }
  if (param_1 == 0) {
    *(undefined2 *)(pSVar3 + 0x172) = 4;
    thunk_FUN_005252c0(0xb0);
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

