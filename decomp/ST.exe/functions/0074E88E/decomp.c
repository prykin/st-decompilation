#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074e88e(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_8;

  piVar1 = param_1;
  *param_1 = 0;
  local_8 = this;
  /* ST_CALLSITE[0074E8A4]: CALL dword ptr [ECX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*STField<int *>(this,0x18) + 0x18))(STField<int *>(this,0x18),&param_1);
  if (-1 < iVar2) {
    /* ST_CALLSITE[0074E8BA]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)*param_1)(param_1,&DAT_007a1210,&local_8);
    /* ST_CALLSITE[0074E8C4]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 8))(param_1);
    if (-1 < iVar2) {
      *piVar1 = (int)local_8;
      return 0;
    }
  }
  return 0x80004001;
}

