#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DelSysAcc */

void __thiscall CursorClassTy::DelSysAcc(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  AnonShape_00544100_1A02F945 *pAVar5;
  InternalExceptionFrame local_b8;
  AnonShape_00544100_1A02F945 local_74;
  undefined4 local_28 [4];
  undefined4 local_18;
  AnonShape_00544100_1A02F945 *local_14;
  CursorClassTy *local_8;

  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    iVar2 = 0;
    local_14 = (AnonShape_00544100_1A02F945 *)this_00->field_0008;
    local_18 = 0x14;
    FUN_006e6000(this_00,3,1,local_28);
    pAVar5 = &local_74;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar5 = 0;
      pAVar5 = (AnonShape_00544100_1A02F945 *)&pAVar5->field_0004;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._20_4_ = this_00->field_0008;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._24_4_ = 2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._56_4_ = 2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._0_4_ = 8;
    local_18 = 0x11;
    local_74.field_0004 = 0x8000000;
    local_74.field_001C = 0xa110;
    local_74.field_003C = 0xa111;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._52_4_ = local_74._20_4_;
    local_14 = &local_74;
    FUN_006e6000(this_00,3,1,local_28);
    local_74.field_0004 = 0x1000000;
    local_74.field_001C = 0xa112;
    local_74.field_003C = 0xa113;
    FUN_006e6000(this_00,3,1,local_28);
    local_74.field_0004 = 0x40000000;
    local_74.field_001C = 0xa114;
    local_74.field_003C = 0xa115;
    FUN_006e6000(this_00,3,1,local_28);
    local_74.field_003C = 0xa133;
    iVar2 = 4;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_28,(int)&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    local_74.field_003C = 0;
    iVar2 = 8;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_28,(int)&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x50);
    iVar2 = 0;
    do {
      thunk_FUN_00544150(this_00,iVar2,local_28,(int)&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar2 = 0;
    do {
      thunk_FUN_00544100(this_00,iVar2,local_28,&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x15a,0,iVar2,"%s"
                             ,"CursorClassTy::DelSysAcc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x15b);
  return;
}

