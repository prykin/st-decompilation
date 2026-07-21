#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::InitSprSistem */

undefined4 __thiscall STFieldC::InitSprSistem(STFieldC *this,int param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  STFieldC *this_00;
  int errorCode;
  void *pvVar4;
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
    if ((local_8->field_0234 != (DArrayTy *)0x0) &&
       (dVar1 = local_8->field_0234->count, uVar7 = 0, 0 < (int)dVar1)) {
      do {
        pDVar2 = this_00->field_0234;
        if (uVar7 < pDVar2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar7) (runtime stride) */
          pvVar4 = (void *)(pDVar2->elementSize * uVar7 + (int)pDVar2->data);
        }
        else {
          pvVar4 = (void *)0x0;
        }
        if (pvVar4 != (void *)0x0) {
          if ((this_00->field_01F5 == 0x4d) && (param_1 != 0)) {
            *(undefined4 *)((int)pvVar4 + 4) = 0;
          }
          if (*(int *)((int)pvVar4 + 0x3c) < 0) {
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

