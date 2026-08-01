#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::InitSprSistem */

undefined4 __thiscall STFieldC::InitSprSistem(STFieldC *this,int param_1)

{
  dword dVar1;
  STFieldC_field_0234DArray *pSVar2;
  code *pcVar3;
  STFieldC *this_00;
  int errorCode;
  STFieldC_field_0234Element *element_0234;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  STFieldC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0234 != (STFieldC_field_0234DArray *)0x0) &&
       (dVar1 = local_8->field_0234->count, uVar7 = 0, 0 < (int)dVar1)) {
      do {
        pSVar2 = this_00->field_0234;
        if (uVar7 < pSVar2->count) {
          element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar2, uVar7);
        }
        else {
          element_0234 = (STFieldC_field_0234Element *)0x0;
        }
        if (element_0234 != (STFieldC_field_0234Element *)0x0) {
          if ((this_00->field_01F5 == 0x4d) && (param_1 != 0)) {
            element_0234->field_0004 = 0;
          }
          if ((int)element_0234->field_003C < 0) {
            LoadImagSpr(this_00,uVar7);
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)dVar1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_field.cpp",0x208,0,errorCode,
                             "%s","STFieldC::InitSprSistem(void)");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\nick\\to_field.cpp",0x20a);
  return 0xffff;
}

