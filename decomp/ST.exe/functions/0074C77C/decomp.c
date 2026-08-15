#include "../../pseudocode_runtime.h"


int __thiscall FUN_0074c77c(void *this,undefined4 param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;

  if (*(int *)((STField<int *>(this,0xa0))[0x23] + 0x18) == 0) {
    iVar1 = -0x7fff0001;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*STField<int *>(this,0xa0) + 0x48))(1,param_1);
    if (-1 < iVar1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar1 = FUN_0074834e(this,unaff_ESI);
    }
  }
  return iVar1;
}

