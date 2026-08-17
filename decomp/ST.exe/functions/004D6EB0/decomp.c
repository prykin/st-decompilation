#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_004d6eb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;

  /* ST_CALLSITE[004D6EB9]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*(int *)this + 0x2c))();
  /* ST_CALLSITE[004D6EC5]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if ((iVar1 < 0x32) || (iVar1 = (**(code **)(*(int *)this + 0x2c))(), 0x73 < iVar1)) {
    /* ST_CALLSITE[004D6EE1]: CALL dword ptr [EDX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    if (iVar1 < 1) {
      return;
    }
    /* ST_CALLSITE[004D6EED]: CALL dword ptr [EAX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    if (0x28 < iVar1) {
      return;
    }
    /* ST_CALLSITE[004D6EF9]: CALL dword ptr [EDX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    iVar1 = *(int *)(&DAT_007e061c + iVar1 * 4);
  }
  else {
    /* ST_CALLSITE[004D6ED1]: CALL dword ptr [EAX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    iVar1 = *(int *)(&DAT_007e22f8 + iVar1 * 4);
  }
  if (iVar1 != 0) {
    /* ST_CALLSITE[004D6F0B]: CALL dword ptr [EAX + 0xc4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*(int *)this + 0xc4))();
    iVar2 = iVar2 + (param_1 * 100) / iVar1;
    if (100 < iVar2) {
      iVar2 = 100;
    }
    /* ST_CALLSITE[004D6F33]: CALL dword ptr [EDX + 0xc8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 200))(iVar2);
  }
  return;
}

