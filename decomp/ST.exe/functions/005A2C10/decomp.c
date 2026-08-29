#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChangePlayerPing */

void __thiscall
FSGSTy::ChangePlayerPing(FSGSTy *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  FSGSTy_field_1EA6DArray *pFVar1;
  uint uVar2;
  int errorCode;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  if (((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0'))
     && (this->field_1EA6 != nullptr)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;

    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      uVar6 = 0;
      pFVar1 = local_8->field_1EA6;
      uVar2 = pFVar1->count;
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          pcVar4 = nullptr;
          goto LAB_005a2c91;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar4 = &pFVar1->data->field_0000 + pFVar1->elementSize * uVar6;
LAB_005a2c91:
          if ((pcVar4 != nullptr) && (*(int *)(pcVar4 + 0x21) == param_2)) {
            *(undefined4 *)(pcVar4 + 0x29) = param_3;
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      local_8->field_002D = 5;
      FUN_006e6080(local_8,2,local_8->field_1B20,(undefined4 *)&local_8->field_0x1d);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa60,0,errorCode,
                               "%s","FSGSTy::ChangePlayerPing");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa60);
  }
  return;
}

