
void __thiscall OptPanelTy::Question(OptPanelTy *this,char param_1)

{
  code *pcVar1;
  OptPanelTy *this_00;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  OptPanelTy *pOStack_8;
  
  uVar4 = DAT_00858df8;
  if (*(short *)(this + 0x172) != 2) {
    return;
  }
  DAT_00858df8 = &stack0xffffffb4;
  pOStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  this_00 = pOStack_8;
  if (iVar2 == 0) {
    if (param_1 == '\x04') {
      if (DAT_008067a0 == '\0') {
        iVar2 = 0x3e84;
      }
      else {
        iVar2 = 0x3e96 - (uint)((uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)(DAT_00802a38 + 0x34)
                                      ) < 6000);
      }
      *(int *)(pOStack_8 + 0x1a5) = iVar2;
    }
    else if (param_1 == '\x05') {
      *(undefined4 *)(pOStack_8 + 0x1a5) = 0x3e85;
    }
    else {
      if (param_1 != '\a') {
        DAT_00858df8 = (undefined1 *)uVar4;
        return;
      }
      *(undefined4 *)(pOStack_8 + 0x1a5) = 0x4272;
    }
    pOStack_8[0x1ab] = (OptPanelTy)param_1;
    *(uint *)(pOStack_8 + 0x1a0) = (uint)(param_1 != '\a');
    pOStack_8[0x1a9] = (OptPanelTy)0x0;
    pOStack_8[0x1a4] = (OptPanelTy)0x5;
    SetOptControls(pOStack_8);
    SwitchOptPanel(this_00,-1);
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x490,0,iVar2,&DAT_007a4ccc);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7c70a0,0x490);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

