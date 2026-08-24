#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=6, ignored=0, unknown=0 */

int FUN_006ae230(uint *param_1)

{
  void *pvVar1;

  pvVar1 = Library::DKW::LIB::MemRealloc((void *)param_1[7],(param_1[4] + param_1[5]) * param_1[2]);
  if (pvVar1 == nullptr) {
    return -2;
  }
  if ((*param_1 & 0x100) != 0) {
    /* ST_CALLSITE[006AE26F]: CALL dword ptr [ESI + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_1[6])(pvVar1,param_1[4],param_1[5]);
  }
  param_1[7] = (uint)pvVar1;
  param_1[4] = param_1[4] + param_1[5];
  return 0;
}

