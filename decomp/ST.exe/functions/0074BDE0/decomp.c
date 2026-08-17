#include "../../pseudocode_runtime.h"


void * __thiscall FUN_0074bde0(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  FUN_00746ee3(this,param_1,param_2,(LPCRITICAL_SECTION)((int)this + 0x5c),param_3);
  STField<undefined4>(this,0x50) = 0;
  STField<undefined4>(this,0x54) = 0;
  STField<undefined4>(this,0x58) = 0;
  /* ST_CALLSITE[0074BE0C]: CALL EDI */
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c));
  /* ST_CALLSITE[0074BE12]: CALL EDI */
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x74));
  STField<undefined4>(this,0x8c) = 0;
  STField<undefined4>(this,0x90) = 0;
  return this;
}

