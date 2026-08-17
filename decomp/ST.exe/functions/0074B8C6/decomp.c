#include "../../pseudocode_runtime.h"


bool FUN_0074b8c6(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;

  piVar1 = param_2;
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    /* ST_CALLSITE[0074B8E7]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*param_1)(param_1,&DAT_007a22b8,&param_1);
    /* ST_CALLSITE[0074B8F1]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*piVar1)(piVar1,&DAT_007a22b8,&param_2);
    /* ST_CALLSITE[0074B8F9]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 8))(param_1);
    /* ST_CALLSITE[0074B902]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_2 + 8))(param_2);
    bVar2 = param_1 == param_2;
  }
  return bVar2;
}

