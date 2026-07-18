
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::SetPanel */

undefined4 __thiscall PlayPanelTy::SetPanel(PlayPanelTy *this,char param_1)

{
  code *pcVar1;
  PlayPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 local_48 [16];
  PlayPanelTy *local_8;
  
  uVar4 = DAT_00858df8;
  if (this[0x180] == (PlayPanelTy)param_1) {
    return 0;
  }
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8[0x180] = (PlayPanelTy)param_1;
    if (param_1 == '\0') {
      if ((DAT_00801688 != (CPanelTy *)0x0) && (*(short *)(DAT_00801688 + 0x23f) == 1)) {
        CPanelTy::ShiftControls(DAT_00801688,1);
      }
      iVar2 = 0;
    }
    else {
      if (DAT_008016e8 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(DAT_008016e8,'\0');
      }
      if (DAT_0080167c != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(DAT_0080167c,'\0');
      }
      if (DAT_00801684 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(DAT_00801684,'\0');
      }
      if (DAT_00801698 != (int *)0x0) {
        (**(code **)(*DAT_00801698 + 0x1c))(0);
      }
      if (DAT_00802a44 != (void *)0x0) {
        thunk_FUN_00552160(DAT_00802a44,'\0','\0');
      }
      if (DAT_00801678 != (int *)0x0) {
        (**(code **)(*DAT_00801678 + 0x1c))(0);
      }
      if (DAT_008016ec != (int *)0x0) {
        (**(code **)(*DAT_008016ec + 0x1c))(0);
      }
      if (DAT_00802a48 != (int *)0x0) {
        (**(code **)(*DAT_00802a48 + 0x1c))(0);
      }
      if (DAT_0080168c != (int *)0x0) {
        (**(code **)(*DAT_0080168c + 0x1c))(0);
      }
      if (DAT_00801680 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(DAT_00801680,'\0');
      }
      if (DAT_00801690 != (int *)0x0) {
        (**(code **)(*DAT_00801690 + 0x18))(0);
      }
      if (DAT_008016dc != (OptPanelTy *)0x0) {
        OptPanelTy::SwitchOptPanelOff(DAT_008016dc);
      }
      iVar2 = 1;
    }
    SwitchOptPanel(this_00,iVar2);
    DAT_00858df8 = (undefined1 *)uVar4;
    return 1;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0xe9,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c7574,0xe9);
  return 1;
}

