#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=3, ignored=0, unknown=0

   [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall StartSystemTy::sub_005DAA90(StartSystemTy *this)

{
  StartSystemTy *pSVar1;
  int iVar2;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  if (g_int_00811764 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;

    iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pSVar1 = local_8;
    if (iVar2 == 0) {
      /* ST_CALLSITE[005DAACB]: CALL 0x00402b30; direct=00402B30 StartSystemTy::sub_005DAB30 */
      sub_005DAB30(local_8);

      Library::DKW::DDX::FUN_006b65f0(g_int_00811764,&pSVar1->field_068E);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    /* ST_CALLSITE[005DAAFE]: CALL 0x00402b30; direct=00402B30 StartSystemTy::sub_005DAB30 */
    sub_005DAB30(local_8);
  }
  return -6;
}

