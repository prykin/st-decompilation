#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=14, ignored=0, unknown=0 */

int __thiscall FUN_0074e8df(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_8;

  piVar1 = param_1;
  *param_1 = 0;
  local_8 = this;
  /* ST_CALLSITE[0074E8F5]: CALL dword ptr [ECX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*STField<int *>(this,0x18) + 0x18))(STField<int *>(this,0x18),&param_1);
  if (-1 < iVar2) {
    /* ST_CALLSITE[0074E90B]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)*param_1)(param_1,&DAT_007a1200,&local_8);
    /* ST_CALLSITE[0074E915]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 8))(param_1);
    if (-1 < iVar2) {
      *piVar1 = (int)local_8;
      return 0;
    }
  }
  return -0x7fffbfff;
}

