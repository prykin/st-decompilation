#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::CloseSprBut */

void __thiscall MMsgTy::CloseSprBut(MMsgTy *this)

{
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
    /* ST_CALLSITE[005B91AD]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    MMObjTy::CloseButtons((MMObjTy *)local_10);
    bVar4 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = local_8 & 0xff;
        this_00->array_00BC[uVar2].field_0027.field_0044 = this_00->field_0061;
        this_00->array_00BC[uVar2].field_0027.field_0040 = ((local_c & 0xff) + 1) * 100;
        if (this_00->array_00BC[uVar2].field_0000 != 0) {
          local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
        }
        bVar4 = bVar4 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
      } while (bVar4 < this_00->field_009A);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_009A != 0) {
      do {
        uVar2 = this_00->array_00BC[local_8 & 0xff].field_00B8.field_0004;
        if (uVar2 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->array_00BC[local_8 & 0xff].field_00B8.field_0048,uVar2);
        }
        bVar5 = bVar5 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
      } while (bVar5 < this_00->field_009A);
    }
    /* ST_CALLSITE[005B9275]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
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

