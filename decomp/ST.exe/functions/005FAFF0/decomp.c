#include "../../pseudocode_runtime.h"


void __thiscall FUN_005faff0(void *this,int param_1)

{
  uint uVar1;

  uVar1 = g_playSystem_00802A38->field_00E4;
  STField<undefined1>(this,0x2e5) = 1;
  STField<uint>(this,0x2e1) = uVar1 + param_1;
  return;
}

