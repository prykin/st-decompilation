#include "../../pseudocode_runtime.h"


LPVOID __thiscall FUN_0074bad7(void *this,uint param_1)

{
  LPVOID pvVar1;

  if (STField<uint>(this,0x40) != param_1) {
    /* ST_CALLSITE[0074BAE6]: CALL dword ptr [0x0085c0d8] */
    pvVar1 = CoTaskMemAlloc(param_1);
    if (pvVar1 != (LPVOID)0x0) {
      if (STField<int>(this,0x40) != 0) {
        /* ST_CALLSITE[0074BB09]: CALL dword ptr [0x0085c0dc] */
        CoTaskMemFree(STField<LPVOID>(this,0x44));
      }
      STField<uint>(this,0x40) = param_1;
      STField<LPVOID>(this,0x44) = pvVar1;
      return pvVar1;
    }
    if (STField<uint>(this,0x40) < param_1) {
      return (LPVOID)0x0;
    }
  }
  return STField<LPVOID>(this,0x44);
}

