#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/WaitTy.cpp

// 005E9970 WaitTy::sub_005E9970
#line 4 "decomp/ST.exe/functions/005E9970/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as WaitTy.
   Evidence: this_call_owners=[WaitTy]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005E9970(WaitTy *this)

{
  this->array_00BC[0xc].field_01E0 = 1;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  if (g_startSystem_0081176C->field_0389 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0389;
    this->field_0031 = 1;
    this->field_0033 = 0;
    /* ST_CALLSITE[005E99AD]: CALL dword ptr [EDX + 0x18] */
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0550;
    this->field_0031 = 1;
    this->field_0033 = 0;
    /* ST_CALLSITE[005E99D3]: CALL dword ptr [EDX + 0x18] */
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    this->field_0025 = g_startSystem_0081176C->field_054C;
    this->field_002D = 0x29;
    this->field_0031 = 9;
    this->field_0033 = 0;
    /* ST_CALLSITE[005E9A00]: CALL dword ptr [EDX + 0x18] */
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  return;
}

// 005E9A40 WaitTy::sub_005E9A40
#line 4 "decomp/ST.exe/functions/005E9A40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as WaitTy.
   Evidence: this_call_owners=[WaitTy]; agreed_this_calls=2; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005E9A40(WaitTy *this)

{
  this->array_00BC[0xc].field_01E0 = 0;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  if (g_startSystem_0081176C->field_0389 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0389;
    this->field_002D = 0x20;
    this->field_0031 = 0;
    this->field_0033 = 0;
    /* ST_CALLSITE[005E9A7D]: CALL dword ptr [EDX + 0x18] */
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    this->field_002D = 0x20;
    this->field_0031 = 0;
    this->field_0033 = 0;
    st::fn_006E6080(this,2,g_startSystem_0081176C->field_054C,reinterpret_cast<undefined4 *>(&this->field_0x1d));
    this->field_002D = 0x29;
    this->field_0031 = 0x19;
    this->field_0033 = 0;
    st::fn_006E6080(this,2,g_startSystem_0081176C->field_054C,reinterpret_cast<undefined4 *>(&this->field_0x1d));
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    this->field_002D = 0x20;
    this->field_0031 = 0;
    this->field_0033 = 0;
    st::fn_006E6080(this,2,g_startSystem_0081176C->field_0550,reinterpret_cast<undefined4 *>(&this->field_0x1d));
  }
  return;
}
