#include "../../pseudocode_runtime.h"


int __thiscall FUN_0074cce2(void *this,int *param_1)

{
  int iVar1;

  if (*(int *)(STField<int>(this,0x8c) + 200) == 0) {
    if ((*(int *)(STField<int>(this,0x8c) + 0x9c) == (STField<int *>(this,0x90))[0x26]) ||
       (param_1 = FUN_0074cb34(this,param_1), param_1 != nullptr)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*(int *)this + 0x68))(param_1);
      if (iVar1 < 0) {
        if (*(int *)(STField<int>(this,0x8c) + 0x9c) !=
            *(int *)(STField<int>(this,0x90) + 0x98)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
      else {
        if (iVar1 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar1 = (**(code **)(*STField<int *>(this,0x90) + 0x44))(param_1);
        }
        else if (iVar1 == 1) {
          iVar1 = 0;
          STField<undefined4>(this,0x54) = 1;
          if (STField<int>(this,0x58) == 0) {
            FUN_00747406(this,0xb,nullptr,0);
            STField<undefined4>(this,0x58) = 1;
          }
        }
        if (*(int *)(STField<int>(this,0x8c) + 0x9c) !=
            *(int *)(STField<int>(this,0x90) + 0x98)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*STField<int *>(this,0x90) + 0x44))(param_1);
  }
  return iVar1;
}

