#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0052AFE0 -> 006E6460 @ 0052B134; literal 0 at 0052B10F | 00580B60 -> 006E6460 @
   00580C22; literal 1 at 00580C0D

   [STPrototypeApplier] Propagated return.
   Evidence: 006E6460 returns used as parameter 0 of FUN_006e6540 @ 0052B1F4 */

RecoveredRecordView_006E6540_42B9D3AB * __thiscall
FUN_006e6460(void *this,undefined4 param_1,int param_2,undefined2 param_3,undefined2 param_4,
            byte param_5,int param_6)

{
  RecoveredRecordView_006E6540_42B9D3AB *pRVar1;

  if (param_2 < 1) {
    return nullptr;
  }

  pRVar1 = Library::DKW::LIB::MemAllocClear(0x1c);
  if (pRVar1 == nullptr) {
    return nullptr;
  }
  *(undefined4 *)(pRVar1 + 1) = param_1;
  pRVar1->field_0xc = param_5;
  *(undefined2 *)&pRVar1->field_0xe = param_3;
  pRVar1->field_0xd = param_6 != 0;
  pRVar1->field_0017 = (byte)param_2;
  *(undefined2 *)&pRVar1->field_0x10 = param_4;
  *(undefined2 *)&pRVar1->field_0x12 = 0x7fff;
  *(undefined2 *)&pRVar1->field_0x14 = 0x7fff;
  if (param_6 != 0) {
    FUN_006b9910((undefined4 *)((int)this + 0x446),(int)pRVar1);
    return pRVar1;
  }
  FUN_006b9910((undefined4 *)((int)this + 0x44a),(int)pRVar1);
  return pRVar1;
}

