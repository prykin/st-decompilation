#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=3,
   ignored=0, unknown=0 */

int __thiscall STPlaySystemC::sub_0054EBB0(STPlaySystemC *this,char *param_1,uint param_2)

{
  DWORD DVar1;
  int iVar2;

  *(uint *)param_1 = this->field_0041;
  this->field_0041 = this->field_0041 + 1;
  /* ST_CALLSITE[0054EBCC]: CALL 0x004045fc; direct=004045FC STPlaySystemC::AddToRep */
  AddToRep(this,(undefined4 *)param_1,param_2);
  /* ST_CALLSITE[0054EBD1]: CALL dword ptr [0x0085bedc] */
  DVar1 = timeGetTime();
  this->field_007F = DVar1;
  iVar2 = FUN_00715360(g_int_00811764,0,'1',param_1,param_2,1,*(undefined4 *)param_1);
  return iVar2;
}

