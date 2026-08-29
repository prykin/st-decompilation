#include "../../pseudocode_runtime.h"


int __thiscall FUN_006901f0(void *this,int param_1,uint *param_2)

{
  AiFltClassTy *this_00;
  int iVar1;

  /* ST_CALLSITE[006901F7]: CALL 0x00402fdb; direct=00402FDB thunk_FUN_0068e190; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__thiscall;pointer:/AiFltClassTy;pointer:/void;/int */
  this_00 = thunk_FUN_0068e190(this,param_1);
  if (this_00 != nullptr) {
    /* ST_CALLSITE[00690206]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
    iVar1 = AiFltClassTy::GetAiMess(this_00,param_2);
    return iVar1;
  }
  return -4;
}

