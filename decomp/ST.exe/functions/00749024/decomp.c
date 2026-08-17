#include "../../pseudocode_runtime.h"


void * __thiscall
FUN_00749024(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  HANDLE pvVar1;

  FUN_0074b7b8(this,param_1,param_2);
  /* ST_CALLSITE[00749039]: CALL dword ptr [0x0085bb88] */
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  STField<undefined4>(this,0x28) = 0;
  STField<undefined4>(this,0x2c) = 0;
  STField<undefined4>(this,0x30) = 0;
  STField<undefined4>(this,0x34) = 0;
  STField<undefined4>(this,0x38) = 0;
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x44) = 0;
  STField<undefined4>(this,0x48) = 0;
  STField<undefined4>(this,0x4c) = 0;
  STField<undefined4>(this,0x50) = 0;
  STField<undefined4>(this,0x54) = 0;
  if (param_4 != 0) {
    /* ST_CALLSITE[00749073]: CALL dword ptr [0x0085bc88] */
    pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
    STField<HANDLE>(this,0x30) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      *param_3 = 0x8007000e;
    }
  }
  return this;
}

