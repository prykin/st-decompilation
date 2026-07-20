
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::MObjProc */

void __thiscall HelpPanelTy::MObjProc(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
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
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  pHVar3 = local_8;
  if (errorCode == 0) {
    HVar1 = local_8->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == (CASE_8|CASE_2))) {
      local_8->field_01A2 = HVar1;
      local_8->field_01AB = local_8->field_01A3;
    }
    else {
      local_8->field_01A2 = 0;
      local_8->field_01AB = 0;
    }
    local_8->field_01A1 = CASE_6|CASE_1;
    local_8->field_01A7 = 0;
    local_8->field_01A3 = 0;
    local_8->field_01AF = 0;
    local_8->field_01B1 = 0;
    if (local_8->field_0178 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      local_8->field_002E = 2;
      *(undefined4 *)&local_8->field_0x30 = local_8->field_0178;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        (*(code *)**(undefined4 **)PTR_00802a30)(&local_8->field_0x18);
      }
    }
    if (pHVar3->field_019C != 0) {
      StartSystemTy::sub_006E56B0(pHVar3->field_000C,pHVar3->field_019C);
    }
    thunk_FUN_00512be0((int)pHVar3->field_01D3);
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

