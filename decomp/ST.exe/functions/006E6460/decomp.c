#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0052AFE0 -> 006E6460 @ 0052B134; literal 0 at 0052B10F | 00580B60 -> 006E6460 @
   00580C22; literal 1 at 00580C0D */

undefined4 * __thiscall
FUN_006e6460(void *this,undefined4 param_1,int param_2,undefined2 param_3,undefined2 param_4,
            byte param_5,int param_6)

{
  uint *puVar1;
  if (param_2 < 1) {
    return nullptr;
  }
  puVar1 = Library::DKW::LIB::MemAllocClear(0x1c);
  if (puVar1 == nullptr) {
    return nullptr;
  }
  puVar1[6] = param_1;
  ((byte *)puVar1)[3] = param_5;
  STField<undefined2>(puVar1,0xe) = param_3;
  STField<bool>(puVar1,0xd) = param_6 != 0;
  STField<char>(puVar1,0x17) = (char)param_2;
  *(undefined2 *)(puVar1 + 4) = param_4;
  STField<undefined2>(puVar1,0x12) = 0x7fff;
  *(undefined2 *)(puVar1 + 5) = 0x7fff;
  if (param_6 != 0) {
    FUN_006b9910((undefined4 *)((int)this + 0x446),(int)puVar1);
    return puVar1;
  }
  FUN_006b9910((undefined4 *)((int)this + 0x44a),(int)puVar1);
  return puVar1;
}

