#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005f09b0(void *this,AnonShape_005EFAE0_B406B78B *param_1)

{
  uint uVar1;
  uVar1 = 0;
  if ((STField<char>(this,0x24f) == '\0') && (param_1 != nullptr)) {
    STField<undefined4>(this,0x2a7) = param_1->field_0018;
    STField<undefined2>(this,0x2ab) = param_1->field_0032;
    STField<undefined4>(this,0x2a3) = param_1->field_0024;
    uVar1 = 1;
    STField<undefined1>(this,0x24f) = 1;
    if (STField<char>(this,800) != '\0') {
      STField<undefined1>(this,800) = 0;
    }
  }
  return uVar1;
}

