#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CC840 returns zeroed full register at 004CC86B @ 004CC86E */

uint __fastcall FUN_004cc840(int *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  if ((-1 < iVar1 / 0x14) && (iVar1 / 0x14 < 4)) {
    TLOBaseTy::sub_004CC880((TLOBaseTy *)param_1,1);
  }
  return 0;
}

