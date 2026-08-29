#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/DumpClassC.cpp

// 00495920 DumpClassC::DumpClassC
#line 4 "decomp/ST.exe/functions/00495920/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790710 (store 00495928)
   Evidence: final_vptr=00790710; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00495920 returns DumpClassC::DumpClassC this @ 00495931 */

DumpClassC * __thiscall st::fn_00495920(DumpClassC *this)

{
  st::fn_006E5FB0(this);
  this->vtable = &st_global_00790710;
  return this;
}

// 00496E40 DumpClassC::sub_00496E40
#line 4 "decomp/ST.exe/functions/00496E40/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as DumpClassC.
   Evidence: this_call_owners=[DumpClassC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; incoming_this_forward_calls=3;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall
st::fn_00496E40(DumpClassC *this,int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint index;
  int iVar2;
  void *pvVar3;

  index = st::fn_00403E8B(param_1,param_2,nullptr,param_3,param_4,reinterpret_cast<uint *>(&param_4));
  if (-1 < (int)index) {
    if (index < g_array_007FB270->count) {
      pvVar3 = DArrayAt<void>(g_array_007FB270, index);
    }
    else {
      pvVar3 = nullptr;
    }
    st::fn_00403639(index,STField<int>(pvVar3,8),0);
    iVar1 = STField<int>(pvVar3,8);
    st::fn_006B0C70(g_array_007FB270,index);
    iVar2 = st::fn_004010CD(iVar1);
    if (iVar2 == 0) {
      st::fn_006AB060(&DAT_007fb24c + iVar1);
    }
  }
  return;
}
