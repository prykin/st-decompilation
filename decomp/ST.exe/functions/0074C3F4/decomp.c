#include "../../pseudocode_runtime.h"


void __thiscall FUN_0074c3f4(void *this,undefined4 param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;

  /* ST_CALLSITE[0074C405]: CALL dword ptr [EAX + 0x48] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x48))(0,param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    FUN_00747f68(this,unaff_ESI);
  }
  return;
}

