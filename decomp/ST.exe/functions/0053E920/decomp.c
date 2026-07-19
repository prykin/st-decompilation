
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::SetPanel */

undefined4 __thiscall SpecPanelTy::SetPanel(SpecPanelTy *this,char param_1)

{
  code *pcVar1;
  SpecPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  if (this[0x184] == (SpecPanelTy)param_1) {
    return 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,pIVar5);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8[0x184] = (SpecPanelTy)param_1;
    if (param_1 == '\0') {
      if ((DAT_00801688 != (CPanelTy *)0x0) && (*(short *)(DAT_00801688 + 0x23f) == 1)) {
        CPanelTy::ShiftControls(DAT_00801688,*(int *)(local_8 + 0x180),1);
      }
      iVar2 = 0;
    }
    else {
      (**(code **)(*(int *)local_8 + 0x20))();
      iVar2 = 1;
    }
    SwitchPanel(this_00,iVar2);
    g_currentExceptionFrame = pIVar5;
    return 1;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x124,0,iVar2,&DAT_007a4ccc,
                             s_SpecPanelTy__SetPanel_007c7984);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x124);
  return 1;
}

