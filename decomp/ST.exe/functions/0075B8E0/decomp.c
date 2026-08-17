#include "../../pseudocode_runtime.h"


void FUN_0075b8e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  /* ST_CALLSITE[0075B8EE]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x48);
  STField<undefined4 *>(param_1,0x1aa) = puVar1;
  *puVar1 = Library::DKW::JPG::FUN_0075b920;
  puVar1[1] = Library::DKW::JPG::FUN_0075ba30;
  puVar1 = puVar1 + 10;
  iVar2 = 4;
  do {
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

