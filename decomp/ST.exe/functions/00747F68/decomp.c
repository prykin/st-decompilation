#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=1, ignored=0, unknown=1 */

int __thiscall FUN_00747f68(void *this,int *param_1)

{
  int iVar1;

  /* ST_CALLSITE[00747F78]: CALL dword ptr [ECX + 0x24] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (param_1 == STField<int *>(this,100)) {
    iVar1 = -0x7ffbfdf8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

