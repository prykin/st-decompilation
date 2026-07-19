
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::GetMessage */

undefined4 __thiscall PausePanelTy::GetMessage(PausePanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  PanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (PanelTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x9f,0,iVar3,&DAT_007a4ccc,
                               s_PausePanelTy__GetMessage_007c7554);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_pause_cpp_007c7490,0x9f);
    return 0xffff;
  }
  PanelTy::GetMessage(local_8,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      DonePausePanel((PausePanelTy *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar1 == 0) {
      if (*(short *)(this_00 + 0x172) == 3) {
        iVar3 = *(int *)(this_00 + 0x54) + -0x174 + *(int *)(this_00 + 0x4c);
        if (iVar3 < *(int *)(this_00 + 0x3c)) {
          *(int *)(this_00 + 0x3c) = *(int *)(this_00 + 0x3c) + -0x1e;
        }
        if (*(int *)(this_00 + 0x3c) <= iVar3) {
          *(int *)(this_00 + 0x3c) = iVar3;
          *(undefined2 *)(this_00 + 0x172) = 1;
          ShiftControls((PausePanelTy *)this_00,1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                   *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (*(short *)(this_00 + 0x172) == 4) {
        iVar3 = *(int *)(this_00 + 0x54) + *(int *)(this_00 + 0x4c);
        if (*(int *)(this_00 + 0x3c) < iVar3) {
          *(int *)(this_00 + 0x3c) = *(int *)(this_00 + 0x3c) + 0x1e;
        }
        if (iVar3 <= *(int *)(this_00 + 0x3c)) {
          *(int *)(this_00 + 0x3c) = iVar3;
          *(undefined2 *)(this_00 + 0x172) = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                   *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (uVar1 == 2) {
      InitPausePanel((PausePanelTy *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (uVar1 == 0xbfff) {
    *(undefined4 *)(this_00 + 0x28) = 0xa100;
    (**(code **)*DAT_00802a30)(this_00 + 0x18);
  }
  else if (uVar1 == 0xc000) {
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    PanelTy::PaintIBut(this_00,param_1,pCVar4,0x274d,1,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

