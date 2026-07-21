#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::CreateAddSpr */

int __thiscall STColl3C::CreateAddSpr(STColl3C *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  int local_c;
  STColl3C *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x6c);
    local_8->field_02E6 = puVar3;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(local_8->field_02E6 + 4) = 0xffffffff;
    g_currentExceptionFrame = local_50.previous;
    return local_c + 2;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_coll3_cpp_007ce868,0x5d8,0,iVar2,&DAT_007a4ccc,
                             s_STColl3C__CreateAddSpr_007ce8c4);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,s_E____titans_nick_to_coll3_cpp_007ce868,0x5da);
  return 0xffff;
}

