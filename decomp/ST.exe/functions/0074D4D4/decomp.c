#include "../../pseudocode_runtime.h"


int FUN_0074d4d4(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  /* ST_CALLSITE[0074D4EC]: CALL dword ptr [0x0085c0d0] */
  CoInitialize((LPVOID)0x0);
  /* ST_CALLSITE[0074D4F9]: CALL dword ptr [EAX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 4))();
  do {
    /* ST_CALLSITE[0074D504]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*param_1)(&local_14);
    /* ST_CALLSITE[0074D516]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1 + 8))(local_14,local_10,local_c,local_8);
  } while (iVar1 == 0);
  /* ST_CALLSITE[0074D51F]: CALL dword ptr [0x0085c0e0] */
  CoUninitialize();
  return iVar1;
}

