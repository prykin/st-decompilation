#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00423E70 returns return of STAllPlayersC::GetObjPtr @ 00423E89
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: previous_type=/uint
   parameter=/ushort Evidence: entry-use width=/ushort; unmasked_dword_reads=0; evidence=00423E73
   MOV EAX,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal

   [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

STGameObjC * __thiscall STGroupBoatC::sub_00423E70(STGroupBoatC *this,ushort param_1)

{
  STGameObjC *pSVar1;

  /* ST_CALLSITE[00423E83]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  pSVar1 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,this->field_0024,param_1,CASE_1);
  return pSVar1;
}

