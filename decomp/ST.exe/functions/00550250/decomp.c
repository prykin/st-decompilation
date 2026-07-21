#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SendMail */

void __thiscall STPlaySystemC::SendMail(STPlaySystemC *this,void *param_1)

{
  dword dVar1;
  dword dVar2;
  code *pcVar3;
  STPlaySystemC *this_00;
  int errorCode;
  int iVar4;
  STControlCommand *command;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  uint local_8;

  if ((this->field_003D != (AnonPointee_STPlaySystemC_003D *)0x0) &&
     (this->field_003D->field_0005 != 0)) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (errorCode == 0) {
      local_8 = 0;
      command = (STControlCommand *)&local_c->field_003D->field_0x7;
      if (local_c->field_003D->field_0005 != 0) {
        do {
          dVar1 = command->secondaryPayloadSize;
          dVar2 = command->primaryPayloadSize;
          thunk_FUN_005501d0(this_00,command);
          local_8 = local_8 + 1;
          command = (STControlCommand *)((int)&command[1].unknown_00 + dVar1 + dVar2);
        } while (local_8 < (ushort)this_00->field_003D->field_0005);
      }
      this_00->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x819,0,errorCode,
                               "%s","STPlaySystemC::SendMail");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x81a);
  }
  return;
}

