#include "../../pseudocode_runtime.h"


void __thiscall FUN_00486af0(void *this,int param_1)

{
  if (param_1 < 0) {
    STField<undefined4>(this,0x716) = 1;
    return;
  }
  if (STField<int>(this,0x712) < param_1) {
    STField<int>(this,0x716) = STField<int>(this,0x712);
    return;
  }
  STField<int>(this,0x716) = param_1;
  return;
}

