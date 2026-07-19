
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::Question */

void __thiscall OptPanelTy::Question(OptPanelTy *this,char param_1)

{
  code *pcVar1;
  OptPanelTy *this_00;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  OptPanelTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  if (*(short *)(this + 0x172) != 2) {
    return;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,pIVar4);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (param_1 == '\x04') {
      if (DAT_008067a0 == '\0') {
        iVar2 = 0x3e84;
      }
      else {
        iVar2 = 0x3e96 - (uint)((uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)(DAT_00802a38 + 0x34)
                                      ) < 6000);
      }
      *(int *)(local_8 + 0x1a5) = iVar2;
    }
    else if (param_1 == '\x05') {
      *(undefined4 *)(local_8 + 0x1a5) = 0x3e85;
    }
    else {
      if (param_1 != '\a') {
        g_currentExceptionFrame = pIVar4;
        return;
      }
      *(undefined4 *)(local_8 + 0x1a5) = 0x4272;
    }
    local_8[0x1ab] = (OptPanelTy)param_1;
    *(uint *)(local_8 + 0x1a0) = (uint)(param_1 != '\a');
    local_8[0x1a9] = (OptPanelTy)0x0;
    local_8[0x1a4] = (OptPanelTy)0x5;
    SetOptControls(local_8);
    SwitchOptPanel(this_00,-1);
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x490,0,iVar2,&DAT_007a4ccc,
                             s_OptPanelTy__Question_007c72f8);
  if (iVar3 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x490);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

