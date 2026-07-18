
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::SetPanel */

undefined4 __thiscall SpecPanelTy::SetPanel(SpecPanelTy *this,char param_1)

{
  code *pcVar1;
  SpecPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  uVar4 = DAT_00858df8;
  if (this[0x184] == (SpecPanelTy)param_1) {
    return 0;
  }
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8[0x184] = (SpecPanelTy)param_1;
    if (param_1 == '\0') {
      if ((DAT_00801688 != (CPanelTy *)0x0) && (*(short *)(DAT_00801688 + 0x23f) == 1)) {
        CPanelTy::ShiftControls(DAT_00801688,*(int *)(local_8 + 0x180),1);
      }
      iVar2 = 0;
    }
    else {
      (**(code **)(*(int *)local_8 + 0x20))();
      iVar2 = 1;
    }
    SwitchPanel(this_00,iVar2);
    DAT_00858df8 = (undefined1 *)uVar4;
    return 1;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x124,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c7870,0x124);
  return 1;
}

