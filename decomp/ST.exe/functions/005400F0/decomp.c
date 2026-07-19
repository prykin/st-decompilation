
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::GetMessage */

undefined4 __thiscall ProdPanelTy::GetMessage(ProdPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  ProdPanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x2a3,0,iVar3,&DAT_007a4ccc
                               ,s_ProdPanelTy__GetMessage_007c7b04);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x2a3);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  PanelTy::GetMessage((PanelTy *)local_8,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc001) {
    if (uVar1 == 0xc000) {
      pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      PanelTy::PaintIBut((PanelTy *)this_00,param_1,pCVar4,0x274e,0,1);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar1 == 0) {
      if (this_00->field_0172 == 3) {
        iVar3 = (this_00->field_0058 - this_00->field_0048) + this_00->field_0050;
        if (iVar3 < (int)this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0xf;
        }
        if ((int)this_00->field_0044 <= iVar3) {
          this_00->field_0044 = iVar3;
          this_00->field_0172 = 1;
          (**(code **)(this_00->field_0000 + 0x18))(1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == 4) {
        iVar3 = this_00->field_0058 + this_00->field_0050;
        if ((int)this_00->field_0044 < iVar3) {
          this_00->field_0044 = this_00->field_0044 + 0xf;
        }
        if (iVar3 <= (int)this_00->field_0044) {
          this_00->field_0044 = iVar3;
          this_00->field_0172 = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else {
      if (uVar1 == 3) {
        DoneProdPanel(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (uVar1 == 0xbfff) {
        SetPanel(this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
  }
  else {
    if (uVar1 == 0xc005) {
      pcVar7 = s_BUT_SLRT_007c7b20;
    }
    else {
      if (uVar1 != 0xc006) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      pcVar7 = s_BUT_SLLT_007c7abc;
    }
    pCVar4 = thunk_FUN_00571240(pcVar7,0);
    PanelTy::PaintBut((PanelTy *)this_00,param_1,1,pCVar4,thunk_FUN_00529fe0,0,1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

