#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f02c0(void *this,int param_1,undefined1 *param_2)

{
  if (((param_2 != nullptr) && (param_1 == 0x15)) &&
     (STField<char>(this,0x24f) == '\0')) {
    STField<undefined1>(this,0x325) = *param_2;
    STField<undefined1>(this,800) = 1;
    STField<undefined4>(this,0x321) = 0x15;
  }
  return;
}

