#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0075034d(void *this,undefined4 param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  STField<undefined4>(this,0x68) = param_1;
  STField<undefined4>(this,0x6c) = param_2;
  STField<undefined4>(this,100) = 1;
  FUN_00750287(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

