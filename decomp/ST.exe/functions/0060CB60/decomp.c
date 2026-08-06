#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0060cb60(void *this,int param_1)

{
  undefined4 *puVar1;

  puVar1 = Library::DKW::LIB::MemAlloc(param_1 * 0x44);
  STField<undefined4 *>(this,0x244) = puVar1;
  *puVar1 = 0;
  if (STField<int>(this,0x244) != 0) {
    STField<int>(this,0x23c) = param_1;
    STField<undefined4>(this,0x238) = 10;
    return 1;
  }
  STField<undefined4>(this,0x238) = 10;
  return 0;
}

