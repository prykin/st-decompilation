#include "../../pseudocode_runtime.h"


void __thiscall FUN_0060a430(void *this,int param_1)

{
  undefined4 uVar1;

  /* ST_CALLSITE[0060A43A]: CALL 0x00405c1d; direct=00405C1D STFieldC::InitSprSistem */
  STFieldC::InitSprSistem(this,param_1);
  uVar1 = thunk_FUN_0060a4b0(this);
  STField<char>(this,0x225) = (char)uVar1;
  STField<undefined1>(this,0x22e) = 1;
  return;
}

