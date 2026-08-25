#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0062e490(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000014;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000018;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = thunk_FUN_0062db50(this,(int)param_1,in_stack_00000014);
  if (-1 < (int)uVar1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((int)this + (int)param_1 * 4 + 0x50);
    if (uVar1 < STField<uint>(iVar2,0xC)) {
      iVar2 = STField<int>(iVar2,0x8) * uVar1 + STField<int>(iVar2,0x1C);
    }
    else {
      iVar2 = 0;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (in_stack_00000018 != 0) {
      STField<undefined4>(iVar2,0x24) = 1;
      return 0xffffffff;
    }
    thunk_FUN_0062e3a0(this,param_1,uVar1,0);
    STField<undefined4>(iVar2,0x24) = 0;
  }
  return 0xffffffff;
}

