
void __thiscall OptPanelTy::SwitchOptPanelOff(OptPanelTy *this)

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
  DAT_00858df8 = &stack0xffffffb4;
  pOStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  this_00 = pOStack_8;
  if (iVar2 == 0) {
    if ((*(short *)(pOStack_8 + 0x172) == 1) || (*(short *)(pOStack_8 + 0x172) == 3)) {
      pOStack_8[0x1aa] = (OptPanelTy)0x0;
      pOStack_8[0x1a9] = (OptPanelTy)0x0;
      pOStack_8[0x1a4] = (OptPanelTy)0x1;
      SetOptControls(pOStack_8);
      if (*(short *)(this_00 + 0x172) == 1) {
        ShiftControls(this_00,0);
      }
      *(undefined2 *)(this_00 + 0x172) = 4;
      thunk_FUN_005252c0(0xb0);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x139,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c70a0,0x139);
  return;
}

