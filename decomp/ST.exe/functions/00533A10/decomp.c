
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::Notification */

void __thiscall OptPanelTy::Notification(OptPanelTy *this,char param_1,OptPanelTy param_2)

{
  short sVar1;
  code *pcVar2;
  OptPanelTy *this_00;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  OptPanelTy *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  this_00 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined1 *)uVar5;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x4a6,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7c70a0,0x4a6);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1 == '\n') {
    *(undefined4 *)(local_8 + 0x1a5) = 0x4271;
    local_8[0x1ac] = param_2;
  }
  else if (param_1 == '\v') {
    *(undefined4 *)(local_8 + 0x1a5) = 0x4270;
  }
  else {
    if (param_1 != '\f') {
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    }
    *(undefined4 *)(local_8 + 0x1a5) = 0x4276;
  }
  local_8[0x1ab] = (OptPanelTy)param_1;
  *(undefined4 *)(local_8 + 0x1a0) = 0;
  local_8[0x1a9] = (OptPanelTy)0x0;
  local_8[0x1a4] = (OptPanelTy)0xb;
  SetOptControls(local_8);
  sVar1 = *(short *)(this_00 + 0x172);
  if ((sVar1 == 2) || (sVar1 == 4)) {
    SwitchOptPanel(this_00,-1);
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  return;
}

