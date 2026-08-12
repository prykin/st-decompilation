#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=0,
   ignored=3, unknown=1 */

void __thiscall FUN_0060ca40(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = STField<int>(this,0x209) - param_1;
  STField<int>(this,0x209) = iVar4;
  thunk_FUN_0060bcb0(this,iVar4);
  if (STField<int>(this,0x209) == 0) {
    iVar4 = STField<int>(this,0x1f9);
    STField<undefined4>(this,0x209) = 0;
    iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
    iVar3 = STField<int>(this,0x1ed);
    iVar3 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
    iVar2 = STField<int>(this,0x1e9);
    iVar2 = STBiasedDiv16(iVar2, 0xc9); /* exact signed 16-bit grid-index division */
    thunk_FUN_00496e40(iVar2,iVar3,iVar4,STField<int>(this,0x18));
  }
  return;
}

