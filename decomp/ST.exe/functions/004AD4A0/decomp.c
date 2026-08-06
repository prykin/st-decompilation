#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0041E530 -> 004AD4A0 @ 0041EE4E */

int __thiscall FUN_004ad4a0(void *this,int *param_1,char *text)

{
  ushort *puVar1;

  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (param_1,CASE_16,text,0xffffffff,0,1,0,nullptr);
  STField<ushort *>(this,0x38) = puVar1;
  return (puVar1 != nullptr) - 1;
}

