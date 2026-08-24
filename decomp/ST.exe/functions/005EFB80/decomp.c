#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005efb80(void *this,int param_1)

{
  uint uVar1;
  uVar1 = 0;
  if ((STField<char>(this,0x24f) != '\0') && (STField<int>(this,0x2a7) == param_1)) {
    STField<undefined4>(this,0x2a7) = 0;
    STField<undefined2>(this,0x2ab) = 0;
    STField<undefined1>(this,0x24f) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

