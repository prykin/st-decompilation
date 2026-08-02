#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_00496e40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint index;
  int iVar2;
  void *pvVar3;

  index = thunk_FUN_00496a90(param_1,param_2,0,param_3,param_4,&param_4);
  if (-1 < (int)index) {
    if (index < g_array_007FB270->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_array_007FB270, index) (runtime stride) */
      pvVar3 = (void *)(g_array_007FB270->elementSize * index + (int)g_array_007FB270->data);
    }
    else {
      pvVar3 = nullptr;
    }
    thunk_FUN_00496b30(index,*(int *)((int)pvVar3 + 8),0);
    iVar1 = *(int *)((int)pvVar3 + 8);
    DArrayRemoveAt(g_array_007FB270,index);
    iVar2 = thunk_FUN_00496f00(iVar1);
    if (iVar2 == 0) {
      FreeAndNull((void **)(&DAT_007fb24c + iVar1));
    }
  }
  return;
}

