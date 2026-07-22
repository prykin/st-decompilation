#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::NoneSID */

void __thiscall SIDTy::NoneSID(SIDTy *this,void *param_1)

{
  code *pcVar1;
  SIDTy *this_00;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  InternalExceptionFrame local_50;
  SIDTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  DVar2 = timeGetTime();
  this->field_0061 = DVar2;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x98,0,iVar3,"%s",
                               "SIDTy::NoneSID");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x98);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((local_c->field_0065 == '\x01') && (local_c->field_1CC4 != (HANDLE)0x0)) &&
     (DVar2 = WaitForSingleObject(local_c->field_1CC4,0), DVar2 == 0)) {
    FindNextChangeNotification(this_00->field_1CC4);
    PrepFiles(this_00);
    this_00->field_002D = 5;
    piVar5 = &this_00->field_1AF1;
    iVar3 = 2;
    do {
      if (*piVar5 != 0) {
        FUN_006e6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x1d);
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (this_00->field_0065 == '\x03') {
    if (this_00->field_1A68 < this_00->field_1A6C + -1) {
      this_00->field_1A68 = this_00->field_1A68 + 1;
      if (this_00->field_1A64 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 1;
      CreateCtrls(this_00);
    }
  }
  else if (this_00->field_0065 == '\x04') {
    if (0 < this_00->field_1A68) {
      this_00->field_1A68 = this_00->field_1A68 + -1;
      if (this_00->field_1A64 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      this_00->field_0045 = 0x200;
      this_00->field_0049 = 0;
      this_00->field_004D = 0x693f;
      thunk_FUN_005b66e0((MTaskTy *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

