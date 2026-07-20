
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::GetMessage */

undefined4 __thiscall PausePanelTy::GetMessage(PausePanelTy *this,int param_1)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  PanelTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (PanelTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x9f,0,iVar4,&DAT_007a4ccc,
                               s_PausePanelTy__GetMessage_007c7554);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_pause_cpp_007c7490,0x9f);
    return 0xffff;
  }
  PanelTy::GetMessage(local_8,param_1);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 4) {
    if (uVar2 == 3) {
      DonePausePanel((PausePanelTy *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar2 == 0) {
      sVar1 = *(short *)((int)&this_00[3].field_002C + 2);
      if (sVar1 == 3) {
        iVar4 = *(int *)&this_00->field_0x54 + -0x174 + *(int *)&this_00->field_0x4c;
        if (iVar4 < (int)this_00->field_003C) {
          this_00->field_003C = this_00->field_003C + -0x1e;
        }
        if ((int)this_00->field_003C <= iVar4) {
          this_00->field_003C = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 1;
          ShiftControls((PausePanelTy *)this_00,1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (sVar1 == 4) {
        iVar4 = *(int *)&this_00->field_0x54 + *(int *)&this_00->field_0x4c;
        if ((int)this_00->field_003C < iVar4) {
          this_00->field_003C = this_00->field_003C + 0x1e;
        }
        if (iVar4 <= (int)this_00->field_003C) {
          this_00->field_003C = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (uVar2 == 2) {
      InitPausePanel((PausePanelTy *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (uVar2 == 0xbfff) {
    this_00->field_0028 = 0xa100;
    (*(code *)**(undefined4 **)PTR_00802a30)(&this_00->field_0x18);
  }
  else if (uVar2 == 0xc000) {
    pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    PanelTy::PaintIBut(this_00,param_1,pCVar5,0x274d,1,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

