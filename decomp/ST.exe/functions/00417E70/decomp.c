#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00417e70(void *this,short param_1)

{
  short sVar1;

  sVar1 = (short)(0x168 / (longlong)(int)param_1);
  if ((int)sVar1 * (int)param_1 != 0x168) {
    return 0xffffffff;
  }
  STField<short>(this,0x8c) = param_1;
  STField<short>(this,0x86) = sVar1;
  return 0;
}

