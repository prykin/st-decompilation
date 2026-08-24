#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006d71d0(void *this,int param_1)

{
  RecoveredClass_0074CDC5 *this_00;
  RecoveredClass_0074CFC0 *pRVar1;
  int local_8;

  local_8 = 0;
  if ((STField<int>(this,0x8c) == 0) || (STField<int>(this,0x90) == 0)) {
    this_00 = (RecoveredClass_0074CDC5 *)Library::MSVCRT::FUN_0072e530(0xe8);
    if (this_00 == nullptr) {
      this_00 = nullptr;
    }
    else {
      RecoveredClass_0074CDC5::FUN_0074cdc5(this_00,0,(int)this,&local_8,(char *)"Input");
      this_00->field_0000 = (VTable_007A1950 *)&VTable_0079DED8;
      this_00->field_000C = &VTable_0079DE90;
      this_00->field_0010 = &VTable_0079DE7C;
      this_00->field_0098 = &VTable_0079DE58;
    }
    STField<RecoveredClass_0074CDC5 *>(this,0x8c) = this_00;
    if (local_8 < 0) {
      if (this_00 != nullptr) {
        /* ST_CALLSITE[006D72F3]: CALL dword ptr [EDX + 0xc] */
        (*this_00->field_0000->slot_0C)(this_00,1);
      }
    }
    else if (this_00 != nullptr) {
      pRVar1 = (RecoveredClass_0074CFC0 *)Library::MSVCRT::FUN_0072e530(0xb0);
      if (pRVar1 == nullptr) {
        pRVar1 = nullptr;
      }
      else {
        pRVar1 = RecoveredClass_0074CFC0::FUN_0074cfc0
                           (pRVar1,0,(int)this,&local_8,(char *)"Output");
      }
      STField<RecoveredClass_0074CFC0 *>(this,0x90) = pRVar1;
      if ((local_8 < 0) || (pRVar1 == nullptr)) {
        if (STField<int *>(this,0x8c) != nullptr) {
          /* ST_CALLSITE[006D72C1]: CALL dword ptr [EDX + 0xc] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
        }
        STField<undefined4>(this,0x8c) = 0;
        if (STField<int *>(this,0x90) != nullptr) {
          /* ST_CALLSITE[006D72D8]: CALL dword ptr [EAX + 0xc] */
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

