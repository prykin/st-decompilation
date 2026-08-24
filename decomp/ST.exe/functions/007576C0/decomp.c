#include "../../pseudocode_runtime.h"


void FUN_007576c0(undefined4 *param_1)

{
  uint *puVar1;
  /* ST_CALLSITE[007576CE]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,0,0x1c);
  STField<undefined4 *>(param_1,0x1a2) = puVar1;
  *puVar1 = Library::DKW::JPG::FUN_007579c0;
  puVar1[1] = Library::DKW::JPG::FUN_00757c90;
  puVar1[2] = Library::DKW::JPG::FUN_00757710;
  puVar1[3] = Library::DKW::JPG::FUN_007579a0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}

