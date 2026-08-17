#include "../../pseudocode_runtime.h"


void FUN_0075cb40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_8;

  puVar1 = param_1;
  /* ST_CALLSITE[0075CB50]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar2 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x54);
  STField<undefined4 *>(param_1,0x1ae) = puVar2;
  *puVar2 = Library::DKW::JPG::FUN_0075cbc0;
  iVar4 = 0;
  if (0 < (int)param_1[7]) {
    local_8 = (undefined4 *)(param_1[0x34] + 0x50);
    auto param_1_after_write = puVar2 + 0xb; /* compiler stack-slot lifetime split */
    do {
      /* ST_CALLSITE[0075CB84]: CALL dword ptr [ECX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1,1,0x100);
      *local_8 = puVar2;
      iVar4 = iVar4 + 1;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      local_8 = local_8 + 0x15;
      *param_1_after_write = 0xffffffff;
      param_1_after_write = param_1_after_write + 1;
    } while (iVar4 < (int)puVar1[7]);
  }
  return;
}

