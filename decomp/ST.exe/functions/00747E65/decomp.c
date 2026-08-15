#include "../../pseudocode_runtime.h"


int __thiscall FUN_00747e65(void *this,int *param_1,char *param_2)

{
  int iVar2;
  int iVar1;
  int local_EAX_79;
  int local_EAX_153;
  int local_c;
  int *local_8;

  local_8 = nullptr;
  if ((param_2 != nullptr) && (iVar2 = FUN_0074bb9a(param_2), iVar2 == 0)) {
    iVar1 = FUN_00747ce5(this,param_1);
    return iVar1;
  }
  local_c = -0x7ffbfdf9;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_8);
  if (-1 < iVar2) {
    local_EAX_79 = FUN_00747d92(this,param_1,param_2,local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*local_8 + 8))(local_8);
    if (-1 < local_EAX_79) {
      return 0;
    }
    if (((local_EAX_79 != -0x7fffbffb) && (local_EAX_79 != -0x7ff8ffa9)) &&
       (local_EAX_79 != -0x7ffbfdd6)) {
      local_c = local_EAX_79;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(STField<int>(this,0xc) + 0x30))((int)this + 0xc,&local_8);
  if (iVar2 < 0) {
    return local_c;
  }
  local_EAX_153 = FUN_00747d92(this,param_1,param_2,local_8);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*local_8 + 8))(local_8);
  if (-1 < local_EAX_153) {
    return 0;
  }
  if (local_EAX_153 == -0x7fffbffb) {
    return local_c;
  }
  if (local_EAX_153 == -0x7ff8ffa9) {
    return local_c;
  }
  if (local_EAX_153 != -0x7ffbfdd6) {
    return local_EAX_153;
  }
  return local_c;
}

