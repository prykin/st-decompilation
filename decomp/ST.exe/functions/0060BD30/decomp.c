#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0060bd30(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *local_40 [8];
  undefined4 local_20 [3];
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_c;

  ppuVar2 = local_40;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = nullptr;
    ppuVar2 = ppuVar2 + 1;
  }
  memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
  local_40[3] = (undefined4 *)0x4;
  local_c = 0;
  local_40[4] = (undefined4 *)0x110;
  local_40[2] = (undefined4 *)param_1[6];
  local_20[2] = STField<undefined4>(this,0x1d9);
  local_14 = STField<undefined2>(this,0x205);
  local_12 = STField<undefined2>(this,0x201);
  local_20[1] = STField<undefined4>(this,0x1f5);
  local_20[0] = param_2;
  local_40[5] = local_20;
  /* ST_CALLSITE[0060BDA7]: CALL dword ptr [EDX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)*param_1)(local_40);
  return;
}

