#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0075034d(void *this,undefined4 param_1,undefined4 param_2)

{
  /* ST_CALLSITE[00750355]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  STField<undefined4>(this,0x68) = param_1;
  STField<undefined4>(this,0x6c) = param_2;
  STField<undefined4>(this,100) = 1;
  FUN_00750287(this);
  /* ST_CALLSITE[00750378]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

