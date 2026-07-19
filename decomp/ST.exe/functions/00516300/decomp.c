
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::MObjProc */

void __thiscall HelpPanelTy::MObjProc(HelpPanelTy *this)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = __setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  pHVar3 = local_8;
  if (errorCode == 0) {
    HVar1 = local_8[0x1a1];
    if (((HVar1 == (HelpPanelTy)0x0) || (HVar1 == (HelpPanelTy)0x6)) || (HVar1 == (HelpPanelTy)0xa))
    {
      local_8[0x1a2] = HVar1;
      *(undefined4 *)(local_8 + 0x1ab) = *(undefined4 *)(local_8 + 0x1a3);
    }
    else {
      local_8[0x1a2] = (HelpPanelTy)0x0;
      *(undefined4 *)(local_8 + 0x1ab) = 0;
    }
    local_8[0x1a1] = (HelpPanelTy)0x7;
    *(undefined4 *)(local_8 + 0x1a7) = 0;
    *(undefined4 *)(local_8 + 0x1a3) = 0;
    *(undefined2 *)(local_8 + 0x1af) = 0;
    *(undefined2 *)(local_8 + 0x1b1) = 0;
    if (*(int *)(local_8 + 0x178) != 0) {
      *(undefined4 *)(local_8 + 0x28) = 0x4202;
      *(undefined2 *)(local_8 + 0x2c) = 0;
      *(undefined2 *)(local_8 + 0x2e) = 2;
      *(int *)(local_8 + 0x30) = *(int *)(local_8 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(local_8 + 0x18);
      }
    }
    if (*(uint *)(pHVar3 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(pHVar3 + 0xc),*(uint *)(pHVar3 + 0x19c));
    }
    thunk_FUN_00512be0(*(int *)(pHVar3 + 0x1d3));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x46e,0,errorCode,
                             &DAT_007a4ccc,s_HelpPanelTy__MObjProc_007c3c0c);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x46e);
  return;
}

