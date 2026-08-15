#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00677ef0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*param_3 + 0x138))();
  DAT_00811980 = DAT_00811980 + iVar1;
  return 0;
}

