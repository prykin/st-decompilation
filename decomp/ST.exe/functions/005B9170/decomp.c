#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::CloseSprBut */

void __thiscall MMsgTy::CloseSprBut(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  InternalExceptionFrame local_54;
  MMsgTy *local_10;
  uint local_c;
  uint local_8;

  bVar5 = 0;
  local_c = local_c & 0xffffff00;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (errorCode == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_10);
    bVar4 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = local_8 & 0xff;
        *(undefined4 *)((int)&this_00->field_0127 + uVar2 * 0x1fb) = this_00->field_0061;
        *(uint *)((int)&this_00->field_0123 + uVar2 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
        if (*(int *)(&this_00->field_0xbc + uVar2 * 0x1fb) != 0) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
        }
        bVar4 = bVar4 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar4);
      } while (bVar4 < this_00->field_009A);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = *(uint *)((int)&this_00->field_0178 + (local_8 & 0xff) * 0x1fb);
        if (uVar2 != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)&this_00->field_01BC + (local_8 & 0xff) * 0x1fb),uVar2);
        }
        bVar5 = bVar5 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar5);
      } while (bVar5 < this_00->field_009A);
    }
    HidePanel(this_00,1,1,1);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x1d3,0,errorCode,
                             "%s","MMsgTy::CloseSprBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x1d3);
  return;
}

