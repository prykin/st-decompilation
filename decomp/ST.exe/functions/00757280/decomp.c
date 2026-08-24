#include "../../pseudocode_runtime.h"


void FUN_00757280(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  if (param_1[4] == 0) {
    /* ST_CALLSITE[00757295]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)*param_1)(param_1,1,0x1c);
    param_1[4] = uVar1;
  }
  *(code **)(param_1[4] + 8) = Library::DKW::JPG::FUN_007572f0;
  *(code **)(param_1[4] + 0xc) = Library::DKW::JPG::FUN_00757300;
  *(code **)(param_1[4] + 0x10) = Library::DKW::JPG::FUN_00757330;
  *(code **)(param_1[4] + 0x14) = Library::DKW::JPG::FUN_00757cd0;
  *(code **)(param_1[4] + 0x18) = Library::DKW::JPG::FUN_00757350;
  *(undefined4 *)(param_1[4] + 4) = 0x7fffffff;
  *(undefined4 *)param_1[4] = param_2;
  return;
}

