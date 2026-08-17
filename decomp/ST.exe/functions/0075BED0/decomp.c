#include "../../pseudocode_runtime.h"


void FUN_0075bed0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  /* ST_CALLSITE[0075BEDF]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x40);
  STField<undefined4 *>(param_1,0x1aa) = puVar1;
  *puVar1 = Library::DKW::JPG::FUN_0075bf40;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  /* ST_CALLSITE[0075BF09]: CALL dword ptr [EDX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,param_1[7] << 8);
  param_1[0x26] = puVar1;
  iVar3 = 0;
  if (0 < (int)param_1[7]) {
    do {
      puVar4 = puVar1;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0x40;
    } while (iVar3 < (int)param_1[7]);
  }
  return;
}

