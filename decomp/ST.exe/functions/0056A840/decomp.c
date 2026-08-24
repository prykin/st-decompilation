#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0056a840(void *this,byte param_1)

{
  undefined *puVar1;
  byte *puVar2;
  byte *puVar3;
  int local_8;

  puVar1 = nullptr;
  puVar2 = (undefined1 *)((int)this + (uint)param_1 * 8 + 0x142f);
  puVar3 = (undefined1 *)(param_1 + 0x142f + (int)this);
  local_8 = 8;
  do {
    *puVar2 = 0;
    *puVar3 = 0;
    if ((g_visibleClass_00802A88 != nullptr) &&
       (param_1 == STField<byte>(this,0x112d))) {
      /* ST_CALLSITE[0056A88A]: CALL 0x00405f15; direct=00405F15 VisibleClassTy::sub_0055B7F0 */
      VisibleClassTy::sub_0055B7F0(g_visibleClass_00802A88,0,puVar1);
    }
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

