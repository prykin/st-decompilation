#include "../../pseudocode_runtime.h"


void __thiscall FUN_005fafb0(void *this,int param_1)

{
  if (STField<int>(this,0x2dd) == 1) {
    STField<uint>(this,0x2e1) = g_playSystem_00802A38->field_00E4 + param_1;
  }
  return;
}

