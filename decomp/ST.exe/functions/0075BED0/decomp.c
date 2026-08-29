#include "../../pseudocode_runtime.h"


void FUN_0075bed0(RecoveredRecord_0075BED0_B3917790 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  /* ST_CALLSITE[0075BEDF]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)param_1->field_0000)(param_1,1,0x40);
  param_1->field_01AA = puVar1;
  *puVar1 = Library::DKW::JPG::FUN_0075bf40;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)
           /* ST_CALLSITE[0075BF09]: CALL dword ptr [EDX] */
           (**(code **)param_1->field_0000)(param_1,1,*(int *)&param_1->field_0x1c << 8);
  *(undefined4 **)&param_1->field_0x98 = puVar1;
  iVar3 = 0;
  if (0 < *(int *)&param_1->field_0x1c) {
    do {
      puVar4 = puVar1;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0x40;
    } while (iVar3 < *(int *)&param_1->field_0x1c);
  }
  return;
}

