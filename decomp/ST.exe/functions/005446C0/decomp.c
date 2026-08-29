#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::AddOpticAcc */

void __thiscall CursorClassTy::AddOpticAcc(CursorClassTy *this)

{
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_b8;
  uint local_74 [5];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_28 [4];
  uint local_18;
  undefined4 *local_14;
  CursorClassTy *local_8;

  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  if (iVar2 == 0) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    puVar5 = local_74;
    for (iVar4 = 0x13; this_00 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_14 = local_74;
    local_74[0] = 8;
    local_5c = 2;
    local_60 = local_8->field_0008;
    local_18 = 0x10;
    puVar5 = &DAT_00808136;
    do {
      local_74[1] = puVar5[-0x50];
      local_58 = *puVar5;
      FUN_006e6000(this_00,3,1,local_28);
      puVar5 = puVar5 + 1;
    } while ((int)puVar5 < 0x808146);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x175,0,iVar2,"%s"
                             ,"CursorClassTy::AddOpticAcc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x176);
  return;
}

