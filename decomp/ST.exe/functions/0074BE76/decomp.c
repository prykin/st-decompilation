#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074be76(void *this,int param_1)

{
  RecoveredClass_0074CDC5 *this_00;
  uint *puVar1;
  RecoveredClass_0074CFC0 *this_01;
  undefined4 local_8;

  local_8 = 0;
  if (STField<int>(this,0x8c) == 0) {
    this_00 = (RecoveredClass_0074CDC5 *)Library::MSVCRT::FUN_0072e530(0xe0);
    if (this_00 == nullptr) {
      puVar1 = nullptr;
    }
    else {
      puVar1 = RecoveredClass_0074CDC5::sub_0074C38F
                         (this_00,0,(int)this,&local_8,(char *)L"XForm In");
    }
    STField<undefined4 *>(this,0x8c) = puVar1;
    if (puVar1 == nullptr) {
      return 0;
    }
    this_01 = (RecoveredClass_0074CFC0 *)Library::MSVCRT::FUN_0072e530(0xa8);
    if (this_01 == nullptr) {
      puVar1 = nullptr;
    }
    else {
      puVar1 = RecoveredClass_0074CFC0::sub_0074C658
                         (this_01,0,(int)this,&local_8,(char *)L"XForm Out");
    }
    STField<undefined4 *>(this,0x90) = puVar1;
    if (puVar1 == nullptr) {
      if (STField<int *>(this,0x8c) != nullptr) {
        /* ST_CALLSITE[0074BEF7]: CALL dword ptr [EAX + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
      }
      STField<undefined4>(this,0x8c) = 0;
    }
  }
  if (param_1 == 0) {
    return STField<undefined4>(this,0x8c);
  }
  if (param_1 != 1) {
    return 0;
  }
  return STField<undefined4>(this,0x90);
}

