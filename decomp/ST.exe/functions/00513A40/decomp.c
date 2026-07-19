
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::IndexBut */

void __thiscall HelpPanelTy::IndexBut(HelpPanelTy *this)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int errorCode;
  int iVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  this_00 = local_8;
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
    local_8->field_01A1 = 10;
    local_8->field_01A3 = 0;
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)&local_8->field_0x68,0,0x21,0x16,*(int *)&local_8->field_0x1dc,0,0x21
               ,0x16,0x1b8,0x118);
    if (*(int *)&this_00->field_0x178 != 0) {
      this_00->field_0028 = 0x4202;
      *(undefined2 *)&this_00->field_0x2c = 0;
      this_00->field_002E = 2;
      *(int *)&this_00->field_0x30 = *(int *)&this_00->field_0x178;
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(&this_00->field_0x18);
      }
    }
    CreateList(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x2c0,0,errorCode,
                             &DAT_007a4ccc,s_HelpPanelTy__IndexBut_007c3a9c);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x2c0);
  return;
}

