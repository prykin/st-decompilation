#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_0074d1ea(void *this,BOOL param_1)

{
  HANDLE pvVar1;

  /* ST_CALLSITE[0074D1F6]: CALL dword ptr [0x0085bb48] */
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}

