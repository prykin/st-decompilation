#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 00555FE0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00556638 */

byte * __thiscall TraksClassTy::PrepareToSave(TraksClassTy *this,uint *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  byte *pbVar3;
  uint uVar5;
  byte *pbVar6;
  InternalExceptionFrame local_58;
  TraksClassTy *local_14;
  uint local_10;
  byte *local_c;
  byte *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  uVar5 = local_10;
  if (errorCode == 0) {
    *param_1 = local_10 + 0x5d;
    local_8 = Library::DKW::LIB::MemAllocClear(local_10 + 0x5d);
    local_8[0] = 0x46;
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[3] = 0;
    local_8[4] = 0xff;
    local_8[5] = 0;
    local_8[6] = 0;
    local_8[7] = 0;
    local_8[8] = 2;
    local_8[9] = 0;
    local_8[10] = 0;
    local_8[0xb] = 0;
    local_8[0x14] = 1;
    local_8[0x15] = 0;
    local_8[0x16] = 0;
    local_8[0x17] = 0;
    *(undefined4 *)(local_8 + 0x18) = local_14->field_001C;
    local_8[0x1c] = local_c != nullptr;
    if (local_c != nullptr) {
      pbVar3 = local_c;
      pbVar6 = local_8 + 0x5c;
      memmove(pbVar6, pbVar3, uVar5); /* compiler REP MOVS byte copy */
      FreeAndNull(&local_c);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_58.previous;
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  if (local_c != nullptr) {
    FreeAndNull(&local_c);
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0xed,0,errorCode,"%s",
                             "TraksClassTy::PrepareToSave error");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\grig\\traks.cpp",0xee);
  return nullptr;
}

