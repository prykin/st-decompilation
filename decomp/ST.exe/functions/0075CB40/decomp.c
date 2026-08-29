#include "../../pseudocode_runtime.h"


void FUN_0075cb40(RecoveredRecord_0075CB40_F517851C *param_1)

{
  RecoveredRecord_0075CB40_F517851C *pRVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_8;

  pRVar1 = param_1;
  /* ST_CALLSITE[0075CB50]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar2 = (undefined4 *)(**(code **)param_1->field_0000)(param_1,1,0x54);
  param_1->field_01AE = puVar2;
  *puVar2 = Library::DKW::JPG::FUN_0075cbc0;
  iVar4 = 0;
  if (0 < *(int *)&param_1->field_0x1c) {
    local_8 = (undefined4 *)(*(int *)&param_1->field_0xd0 + 0x50);
    auto param_1_after_write = (RecoveredRecord_0075CB40_F517851C *)(puVar2 + 0xb); /* compiler stack-slot lifetime split */
    do {
      /* ST_CALLSITE[0075CB84]: CALL dword ptr [ECX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      puVar2 = (undefined4 *)(**(code **)pRVar1->field_0000)(pRVar1,1,0x100);
      *local_8 = puVar2;
      iVar4 = iVar4 + 1;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      local_8 = local_8 + 0x15;
      param_1_after_write->field_0000 = 0xffffffff;
      param_1_after_write = (RecoveredRecord_0075CB40_F517851C *)&param_1_after_write->field_0x4;
    } while (iVar4 < *(int *)&pRVar1->field_0x1c);
  }
  return;
}

