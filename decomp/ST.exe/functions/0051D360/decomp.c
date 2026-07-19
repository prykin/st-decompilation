
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NatProc */

void __thiscall HelpPanelTy::NatProc(HelpPanelTy *this,int param_1,char param_2)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int errorCode;
  UINT UVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (errorCode == 0) {
    if (param_2 == '\0') {
      cVar1 = local_c->field_01A1;
      if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
        local_c->field_01A2 = cVar1;
        *(undefined4 *)&local_c->field_0x1ab = local_c->field_01A3;
      }
      else {
        local_c->field_01A2 = 0;
        *(undefined4 *)&local_c->field_0x1ab = 0;
      }
      local_c->field_01A1 = 0xc;
      local_c->field_01A3 = param_1;
      local_c->field_01A7 = 0;
      *(undefined2 *)&local_c->field_0x1af = 0x23;
      *(undefined2 *)&local_c->field_0x1b1 = 5;
      if (*(int *)&local_c->field_0x178 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        local_c->field_002E = 2;
        *(int *)&local_c->field_0x30 = *(int *)&local_c->field_0x178;
        if (DAT_00802a30 != (undefined4 *)0x0) {
          (**(code **)*DAT_00802a30)(&local_c->field_0x18);
        }
      }
    }
    UVar3 = thunk_FUN_00523410(param_1,'\0',0);
    DrawTitle(this_00,0x55f9,0,UVar3);
    DrawObj(this_00,&local_8,param_1,0,0);
    UVar3 = thunk_FUN_00523410(param_1,'\0',2);
    DrawDescription(this_00,&local_8,UVar3);
    AddLinks(this_00,&local_8,'\f',param_1,0);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x93f,0,errorCode,
                             &DAT_007a4ccc,s_HelpPanelTy__NatProc_007c3d70);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x93f);
  return;
}

