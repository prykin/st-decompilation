#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006d71d0(void *this,int param_1)

{
  int *this_00;
  void *this_01;
  undefined4 *puVar1;
  int local_8;

  local_8 = 0;
  if ((STField<int>(this,0x8c) == 0) || (STField<int>(this,0x90) == 0)) {
    this_00 = (int *)Library::MSVCRT::FUN_0072e530(0xe8);
    if (this_00 == nullptr) {
      this_00 = nullptr;
    }
    else {
      FUN_0074cdc5(this_00,0,(int)this,&local_8,(char *)"Input");
      *this_00 = (int)&VTable_0079DED8;
      this_00[3] = (int)&VTable_0079DE90;
      this_00[4] = (int)&VTable_0079DE7C;
      this_00[0x26] = (int)&VTable_0079DE58;
    }
    STField<int *>(this,0x8c) = this_00;
    if (local_8 < 0) {
      if (this_00 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*this_00 + 0xc))(1);
      }
    }
    else if (this_00 != nullptr) {
      this_01 = (void *)Library::MSVCRT::FUN_0072e530(0xb0);
      if (this_01 == nullptr) {
        puVar1 = nullptr;
      }
      else {
        puVar1 = FUN_0074cfc0(this_01,0,(int)this,&local_8,(char *)"Output");
      }
      STField<undefined4 *>(this,0x90) = puVar1;
      if ((local_8 < 0) || (puVar1 == nullptr)) {
        if (STField<int *>(this,0x8c) != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
        }
        STField<undefined4>(this,0x8c) = 0;
        if (STField<int *>(this,0x90) != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*STField<int *>(this,0x90) + 0xc))(1);
        }
        STField<undefined4>(this,0x90) = 0;
        return 0;
      }
      goto LAB_006d728d;
    }
    STField<undefined4>(this,0x8c) = 0;
  }
  else {
LAB_006d728d:
    if (param_1 == 0) {
      return STField<undefined4>(this,0x8c);
    }
    if (param_1 == 1) {
      return STField<undefined4>(this,0x90);
    }
  }
  return 0;
}

