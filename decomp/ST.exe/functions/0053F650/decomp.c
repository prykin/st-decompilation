
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::SetPanel */

undefined4 __thiscall ProdPanelTy::SetPanel(ProdPanelTy *this,char param_1)

{
  code *pcVar1;
  ProdPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  ProdPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  if (this->field_0194 == param_1) {
    return 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8->field_0194 = param_1;
    if (param_1 == '\0') {
      if ((g_cPanel_00801688 != (CPanelTy *)0x0) && (g_cPanel_00801688->field_023F == CASE_1)) {
        CPanelTy::ShiftControls(g_cPanel_00801688,local_8->field_0195,1);
      }
      iVar2 = 0;
    }
    else {
      (**(code **)(local_8->field_0000 + 0x1c))();
      iVar2 = 1;
    }
    SwitchPanel(this_00,iVar2);
    g_currentExceptionFrame = pIVar5;
    return 1;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x1eb,0,iVar2,&DAT_007a4ccc,
                             s_ProdPanelTy__SetPanel_007c7a60);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x1eb);
  return 1;
}

