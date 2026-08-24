#include "../../pseudocode_runtime.h"


void __thiscall FUN_0074df72(void *this,undefined4 param_1)

{
  uint *puVar1;
  puVar1 = (undefined4 *)FUN_0074e2ff((AnonShape_0074E2FF_47CF731F *)((int)this + 0xc));
  if ((puVar1 == nullptr) &&
     (puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0xc), puVar1 == nullptr)) {
    return;
  }
  puVar1[2] = param_1;
  puVar1[1] = 0;
  *puVar1 = STField<undefined4>(this,4);
  if (STField<int>(this,4) == 0) {
    *(undefined4 **)this = puVar1;
  }
  else {
    *(undefined4 **)(STField<int>(this,4) + 4) = puVar1;
  }
  STField<int>(this,8) = STField<int>(this,8) + 1;
  STField<undefined4 *>(this,4) = puVar1;
  return;
}

