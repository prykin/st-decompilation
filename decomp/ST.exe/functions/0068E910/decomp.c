#include "../../pseudocode_runtime.h"


void __fastcall FUN_0068e910(RecoveredRecord_0068E910_916952FD *param_1)

{
  DArrayTy *pDVar1;

  if (param_1->field_00BD != nullptr) {
    DArrayDestroy(param_1->field_00BD);
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x4a,10);
    param_1->field_00BD = pDVar1;
  }
  return;
}

