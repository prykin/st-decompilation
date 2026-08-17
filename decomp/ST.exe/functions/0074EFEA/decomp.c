#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_0074efea(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  /* ST_CALLSITE[0074EFF2]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  STField<undefined4>(this,0x48) = 0;
  STField<undefined4>(this,0x38) = param_1;
  STField<undefined4>(this,0x3c) = param_2;
  STField<undefined4>(this,0x40) = param_3;
  STField<undefined4>(this,0x44) = param_4;
  /* ST_CALLSITE[0074F019]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return 0;
}

