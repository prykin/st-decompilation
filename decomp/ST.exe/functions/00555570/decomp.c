#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as cLoadingTy.
   Evidence: this_call_owners=[cLoadingTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=0,
   ignored=3, unknown=1 */

void __thiscall cLoadingTy::sub_00555570(cLoadingTy *this)

{
  int iVar1;
  tagMSG local_20;

  if (this->field_0048 != 0) {
    /* ST_CALLSITE[00555594]: CALL ESI */
    iVar1 = PeekMessageA(&local_20,g_hWnd_00806748,0,0,1);
    while (iVar1 != 0) {
      /* ST_CALLSITE[005555AC]: CALL EDI */
      TranslateMessage(&local_20);
      /* ST_CALLSITE[005555B2]: CALL EBX */
      DispatchMessageA(&local_20);
      /* ST_CALLSITE[005555C5]: CALL ESI */
      iVar1 = PeekMessageA(&local_20,g_hWnd_00806748,0,0,1);
    }
  }
  return;
}

