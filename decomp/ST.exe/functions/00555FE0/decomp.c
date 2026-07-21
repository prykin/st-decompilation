#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::PrepareToSave */

undefined4 * __thiscall TraksClassTy::PrepareToSave(TraksClassTy *this,uint *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_58;
  TraksClassTy *local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;

  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  uVar5 = local_10;
  if (errorCode == 0) {
    *param_1 = local_10 + 0x5d;
    local_8 = Library::DKW::LIB::FUN_006aac10(local_10 + 0x5d);
    *local_8 = 0x46;
    local_8[1] = 0xff;
    local_8[2] = 2;
    local_8[5] = 1;
    local_8[6] = local_14->field_001C;
    *(bool *)(local_8 + 7) = local_c != (undefined4 *)0x0;
    if (local_c != (undefined4 *)0x0) {
      puVar3 = local_c;
      puVar6 = local_8 + 0x17;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FreeAndNull(&local_c);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_58.previous;
  if (local_8 != (undefined4 *)0x0) {
    FreeAndNull(&local_8);
  }
  if (local_c != (undefined4 *)0x0) {
    FreeAndNull(&local_c);
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0xed,0,errorCode,"%s",
                             "TraksClassTy::PrepareToSave error");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\grig\\traks.cpp",0xee);
  return (undefined4 *)0x0;
}

