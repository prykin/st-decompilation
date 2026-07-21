#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::AddSysAcc */

void __thiscall CursorClassTy::AddSysAcc(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  AnonShape_00544100_1A02F945 *pAVar5;
  InternalExceptionFrame local_b8;
  AnonShape_00544100_1A02F945 local_74;
  CursorClassTy *local_28;
  undefined4 local_24 [4];
  undefined4 local_14;
  AnonShape_00544100_1A02F945 *local_10;
  uint local_c;

  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_28 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  this_00 = local_28;
  if (iVar2 == 0) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    iVar2 = 0;
    local_10 = (AnonShape_00544100_1A02F945 *)local_28->field_0008;
    local_c = (-(uint)(DAT_0080734c != '\0') & 2) + 1;
    local_14 = 0x13;
    FUN_006e6000(local_28,3,1,local_24);
    local_14 = 0x15;
    FUN_006e6000(this_00,3,1,local_24);
    this_00->field_00C5 = local_c & 0xffff;
    this_00->field_0034 = local_c & 0xffff;
    this_00->field_00C9 = local_c >> 0x10;
    this_00->field_0038 = local_c >> 0x10;
    pAVar5 = &local_74;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar5 = 0;
      pAVar5 = (AnonShape_00544100_1A02F945 *)&pAVar5->field_0004;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._20_4_ = this_00->field_0008;
    local_10 = &local_74;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._0_4_ = 8;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._24_4_ = 2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._56_4_ = 2;
    local_14 = 0x10;
    local_74.field_0004 = 0x8000000;
    local_74.field_001C = 0xa110;
    local_74.field_003C = 0xa111;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74._52_4_ = local_74._20_4_;
    FUN_006e6000(this_00,3,1,local_24);
    local_74.field_0004 = 0x1000000;
    local_74.field_001C = 0xa112;
    local_74.field_003C = 0xa113;
    FUN_006e6000(this_00,3,1,local_24);
    local_74.field_0004 = 0x40000000;
    local_74.field_001C = 0xa114;
    local_74.field_003C = 0xa115;
    FUN_006e6000(this_00,3,1,local_24);
    local_74.field_003C = 0xa133;
    iVar2 = 4;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_24,(int)&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    local_74.field_003C = 0;
    iVar2 = 8;
    do {
      thunk_FUN_005440c0(this_00,iVar2,local_24,(int)&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x50);
    iVar2 = 0;
    do {
      thunk_FUN_00544150(this_00,iVar2,local_24,(int)&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar2 = 0;
    do {
      thunk_FUN_00544100(this_00,iVar2,local_24,&local_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    g_currentExceptionFrame = local_b8.previous;
    return;
  }
  g_currentExceptionFrame = local_b8.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x127,0,iVar2,"%s"
                             ,"CursorClassTy::AddSysAcc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x128);
  return;
}

