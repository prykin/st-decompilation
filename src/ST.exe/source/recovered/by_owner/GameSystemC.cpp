#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/GameSystemC.cpp

// 00576DD0 GameSystemC::GameSystemC
#line 4 "decomp/ST.exe/functions/00576DD0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00577280 -> 00576DD0 @ 005772CA

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B1E0 (store 00576DE1)
   Evidence: final_vptr=0079B1E0; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00576DD0 returns GameSystemC::GameSystemC this @ 00576DFC */

GameSystemC * __thiscall st::fn_00576DD0(GameSystemC *this,AppClassTy *param_1)

{
  st::fn_006E51C0((SystemClassTy *)this,param_1,1);
  this->vtable = &st_global_0079B1E0;
  this->field_0430 = 1;
  this->field_0431 = nullptr;
  return this;
}

// 00577690 GameSystemC::sub_00577690
#line 4 "decomp/ST.exe/functions/00577690/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as GameSystemC.
   Evidence: this_call_owners=[GameSystemC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_00577690(GameSystemC *this)

{
  DWORD DVar1;

  this->field_0430 = 1;
  DVar1 = st::fn_006E51B0(this->field_0018);
  this->field_0020 = DVar1;
  this->field_0024 = 0;
  st::fn_006BC360(DAT_0080679c,(undefined4 *)&this->field_0x28,nullptr);
  return;
}

