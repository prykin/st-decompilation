
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SwitchOptPanel */

void __thiscall HelpPanelTy::SwitchOptPanel(HelpPanelTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  HelpPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x10f,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7c383c,0x10f);
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
      *(undefined4 *)(local_8 + 0x28) = 0x4202;
      *(undefined2 *)(local_8 + 0x2c) = 0;
      *(undefined2 *)(local_8 + 0x2e) = 2;
      *(int *)(local_8 + 0x30) = *(int *)(local_8 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(local_8 + 0x18);
      }
    }
    ShiftControls(this_00,0);
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
      CPanelTy::ShiftControls(DAT_00801688,0);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    if (sVar1 != 3) {
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
  }
  if (param_1 == 0) {
    *(undefined2 *)(this_00 + 0x172) = 4;
    thunk_FUN_005252c0(0xb0);
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

