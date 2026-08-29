#include "../../pseudocode_runtime.h"


int FUN_006bb780(RecoveredRecord_006BB780_43119500 *param_1,undefined4 *param_2,undefined4 param_3,
                undefined4 param_4,int param_5,int param_6,undefined4 *param_7,int param_8)

{
  int iVar1;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_20;
  int local_c;
  int local_8;

  *param_2 = 0;
  local_88 = 0x7c;
  local_84 = 7;
  local_40 = 0x20;
  if (param_6 == 0) {
    if (param_5 != 0) {
      local_84 = 0x1007;
      local_3c = 0x40;
      local_34 = param_5;
      if (param_7 == nullptr) {
        if (param_5 == 0x10) {
          local_30 = 0x7c00;
          local_2c = 0x3e0;
          local_28 = 0x1f;
        }
        else if (0x10 < param_5) {
          local_30 = 0xff0000;
          local_2c = 0xff00;
          local_28 = 0xff;
        }
      }
      else {
        local_30 = *param_7;
        local_2c = param_7[1];
        local_28 = param_7[2];
      }
    }
  }
  else {
    local_38 = param_6;
    local_34 = param_5;
    local_84 = 0x1007;
    local_3c = 0x200;
    local_30 = *param_7;
    local_2c = param_7[1];
    local_28 = param_7[2];
  }
  local_7c = param_3;
  local_20 = 0x4080;
  local_80 = param_4;
  /* ST_CALLSITE[006BB86F]: CALL dword ptr [ECX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*param_1->field_0030 + 0x18))(param_1->field_0030,&local_88,param_2,0);
  if ((iVar1 == 0) && (param_8 != -1)) {
    local_8 = param_8;
    local_c = param_8;
    /* ST_CALLSITE[006BB88F]: CALL dword ptr [ECX + 0x74] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)*param_2 + 0x74))((int *)*param_2,0x10,&local_c);
    if (iVar1 != 0) {
      /* ST_CALLSITE[006BB89D]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}

