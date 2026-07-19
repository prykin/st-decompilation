
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::MObjProc */

void __thiscall HelpPanelTy::MObjProc(HelpPanelTy *this)

{
  char cVar1;
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
    cVar1 = local_8->field_01A1;
    if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
      local_8->field_01A2 = cVar1;
      *(undefined4 *)&local_8->field_0x1ab = local_8->field_01A3;
    }
    else {
      local_8->field_01A2 = 0;
      *(undefined4 *)&local_8->field_0x1ab = 0;
    }
    local_8->field_01A1 = 7;
    local_8->field_01A7 = 0;
    local_8->field_01A3 = 0;
    *(undefined2 *)&local_8->field_0x1af = 0;
    *(undefined2 *)&local_8->field_0x1b1 = 0;
    if (*(int *)&local_8->field_0x178 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      local_8->field_002E = 2;
      *(int *)&local_8->field_0x30 = *(int *)&local_8->field_0x178;
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(&local_8->field_0x18);
      }
    }
    if (*(uint *)&pHVar3->field_0x19c != 0) {
      FUN_006e56b0(*(void **)&pHVar3->field_0xc,*(uint *)&pHVar3->field_0x19c);
    }
    thunk_FUN_00512be0(*(int *)&pHVar3->field_0x1d3);
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

