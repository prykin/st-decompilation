
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::GetMessage */

undefined4 __thiscall ProdPanelTy::GetMessage(ProdPanelTy *this,int param_1)

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
  char *text;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (PanelTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x2a3,0,iVar4,&DAT_007a4ccc
                               ,s_ProdPanelTy__GetMessage_007c7b04);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x2a3);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  PanelTy::GetMessage(local_8,param_1);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 0xc001) {
    if (uVar2 == 0xc000) {
      pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      PanelTy::PaintIBut(this_00,(AnonShape_00538DB0_574DDCD0 *)param_1,pCVar5,0x274e,0,1);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar2 == 0) {
      sVar1 = *(short *)((int)&this_00[3].field_002C + 2);
      if (sVar1 == 3) {
        iVar4 = (*(int *)&this_00->field_0x58 - this_00->field_0048) + *(int *)&this_00->field_0x50;
        if (iVar4 < (int)this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0xf;
        }
        if ((int)this_00->field_0044 <= iVar4) {
          iVar6 = *(int *)this_00;
          this_00->field_0044 = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 1;
          (**(code **)(iVar6 + 0x18))(1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (sVar1 == 4) {
        iVar4 = *(int *)&this_00->field_0x58 + *(int *)&this_00->field_0x50;
        if ((int)this_00->field_0044 < iVar4) {
          this_00->field_0044 = this_00->field_0044 + 0xf;
        }
        if (iVar4 <= (int)this_00->field_0044) {
          this_00->field_0044 = iVar4;
          *(undefined2 *)((int)&this_00[3].field_002C + 2) = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else {
      if (uVar2 == 3) {
        DoneProdPanel((ProdPanelTy *)this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (uVar2 == 0xbfff) {
        SetPanel((ProdPanelTy *)this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
  }
  else {
    if (uVar2 == 0xc005) {
      text = s_BUT_SLRT_007c7b20;
    }
    else {
      if (uVar2 != 0xc006) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      text = s_BUT_SLLT_007c7abc;
    }
    pCVar5 = thunk_FUN_00571240(text,0);
    PanelTy::PaintBut(this_00,(AnonShape_005389E0_C98BD548 *)param_1,1,pCVar5,thunk_FUN_00529fe0,0,1
                     );
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

