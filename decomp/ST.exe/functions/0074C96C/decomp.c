#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074c96c(void *this,int param_1)

{
  RecoveredClass_0074CDC5 *this_00;
  uint *puVar1;
  RecoveredClass_0074CFC0 *pRVar2;
  uint uVar3;
  undefined4 local_8;

  local_8 = 0;
  if (STField<int>(this,0x8c) == 0) {
    this_00 = (RecoveredClass_0074CDC5 *)Library::MSVCRT::FUN_0072e530(0xe8);
    if (this_00 == nullptr) {
      puVar1 = nullptr;
    }
    else {
      puVar1 = RecoveredClass_0074CDC5::FUN_0074cdc5
                         (this_00,0,(int)this,&local_8,(char *)"Input");
    }
    STField<undefined4 *>(this,0x8c) = puVar1;
    if (puVar1 == nullptr) goto LAB_0074c9fe;
  }
  if (STField<int>(this,0x90) == 0) {
    pRVar2 = (RecoveredClass_0074CFC0 *)Library::MSVCRT::FUN_0072e530(0xb0);
    if (pRVar2 == nullptr) {
      pRVar2 = nullptr;
    }
    else {
      pRVar2 = RecoveredClass_0074CFC0::FUN_0074cfc0
                         (pRVar2,0,(int)this,&local_8,(char *)"Output");
    }
    STField<RecoveredClass_0074CFC0 *>(this,0x90) = pRVar2;
    if (pRVar2 == nullptr) {
      if (STField<int *>(this,0x8c) != nullptr) {
        /* ST_CALLSITE[0074C9F5]: CALL dword ptr [EAX + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
      }
      STField<undefined4>(this,0x8c) = 0;
    }
  }
LAB_0074c9fe:
  if (param_1 == 0) {
    uVar3 = STField<undefined4>(this,0x8c);
  }
  else if (param_1 == 1) {
    uVar3 = STField<undefined4>(this,0x90);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

