#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0056A965 MOV EDX,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0 */

void __thiscall FUN_0056a960(void *this,byte param_1,byte param_2)

{
  undefined *puVar1;
  char cVar2;

  puVar1 = (undefined *)(uint)param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  cVar2 = '\x01' - *(char *)((int)this + (int)puVar1 * 8 + param_2 + 0x142f);
  *(char *)((int)this + (int)puVar1 * 8 + param_2 + 0x142f) = cVar2;
  if ((g_visibleClass_00802A88 != nullptr) &&
     (param_2 == STField<byte>(this,0x112d))) {
    if (cVar2 == '\0') {
      VisibleClassTy::sub_0055B7F0(g_visibleClass_00802A88,0,puVar1);
      return;
    }
    if (STField<char>(this,0x1474) != '\0') {
      VisibleClassTy::sub_0055B7F0(g_visibleClass_00802A88,1,puVar1);
    }
  }
  return;
}

