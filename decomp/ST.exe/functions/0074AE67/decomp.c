#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074ae67(int *param_1)

{
  DWORD DVar1;

  /* ST_CALLSITE[0074AE78]: CALL dword ptr [EAX + 0xb4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0xb4))(param_1[0x4e],param_1[0x4f]);
  /* ST_CALLSITE[0074AE7E]: CALL dword ptr [0x0085bedc] */
  DVar1 = timeGetTime();
  param_1[0x39] = DVar1;
  return;
}

