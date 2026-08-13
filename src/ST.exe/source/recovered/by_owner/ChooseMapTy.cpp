#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/ChooseMapTy.cpp

// 005AE840 ChooseMapTy::sub_005AE840
#line 4 "decomp/ST.exe/functions/005AE840/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ChooseMapTy.
   Evidence: this_call_owners=[ChooseMapTy]; agreed_this_calls=1; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005AE840(ChooseMapTy *this)

{
  int iVar1;

  iVar1 = this->array_00BC[0xc].field_01EC;
  this->array_00BC[0xc].field_01E0 = 1;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  if (iVar1 != 0) {
    this->field_0025 = iVar1;
    this->field_0031 = 1;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (this->field_1C83 != 0) {
    this->field_0025 = this->field_1C83;
    this->field_0031 = 1;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0389 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0389;
    this->field_0031 = 1;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0550;
    this->field_0031 = 1;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    this->field_0025 = g_startSystem_0081176C->field_054C;
    this->field_002D = 0x29;
    this->field_0031 = 9;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  return;
}

// 005AE950 ChooseMapTy::sub_005AE950
#line 4 "decomp/ST.exe/functions/005AE950/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ChooseMapTy.
   Evidence: this_call_owners=[ChooseMapTy]; agreed_this_calls=1; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005AE950(ChooseMapTy *this)

{
  int iVar1;

  iVar1 = this->field_1C83;
  this->array_00BC[0xc].field_01E0 = 0;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  if (iVar1 != 0) {
    this->field_0025 = iVar1;
    this->field_0031 = 0;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  iVar1 = this->array_00BC[0xc].field_01EC;
  if (iVar1 != 0) {
    this->field_0025 = iVar1;
    this->field_0031 = 0;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0389 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0389;
    this->field_002D = 0x20;
    this->field_0031 = 0;
    this->field_0033 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    this->field_002D = 0x20;
    this->field_0031 = 0;
    this->field_0033 = 0;
    st::fn_006E6080(this,2,g_startSystem_0081176C->field_054C,(undefined4 *)&this->field_0x1d);
    this->field_002D = 0x29;
    this->field_0031 = 0x19;
    this->field_0033 = 0;
    st::fn_006E6080(this,2,g_startSystem_0081176C->field_054C,(undefined4 *)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    this->field_002D = 0x20;
    this->field_0031 = 0;
    this->field_0033 = 0;
    st::fn_006E6080(this,2,g_startSystem_0081176C->field_0550,(undefined4 *)&this->field_0x1d);
  }
  return;
}

// 005B5BE0 ChooseMapTy::sub_005B5BE0
#line 4 "decomp/ST.exe/functions/005B5BE0/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005B5BE0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=11; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=16; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family

   [STMethodOwnerApplier] Structural method owner recovered as ChooseMapTy.
   Evidence: this_call_owners=[ChooseMapTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_005B5BE0(ChooseMapTy *this,RecoveredSourceFamily_dibcopy *param_1,int *param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = (*param_2 + -1) * param_2[5];
  st::fn_006B4170(param_1,0,iVar2,0,st::machine_word_boundary_cast<int>(param_2[5] + -2),param_1->field_0008,0xff);
  if (param_2[1] == 1) {
    st::fn_006B4170(param_1,0,iVar2,0,st::machine_word_boundary_cast<int>(param_2[5] + -2),0x14,0);
    st::fn_006B4170(param_1,0,iVar2 + 1,0x14,st::machine_word_boundary_cast<int>(param_2[5] + -5),2,0);
    st::fn_006B4170(param_1,0,iVar2 + 3,0x16,st::machine_word_boundary_cast<int>(param_2[5] + -9),2,0);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,-(uint)(*param_2 != 1) & 2,iVar2,
                 0x14,(byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,0x14,iVar2 + 3,0x17,
                 (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2 + 3,0x17,st::machine_word_boundary_cast<int>(param_2[5] + -6 + iVar2),
                 0x17,(byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,st::machine_word_boundary_cast<int>(param_2[5] + iVar2 + -6),0x17,
                 st::machine_word_boundary_cast<int>(param_2[5] + iVar2 + -3),0x14,
                 (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
    iVar2 = st::machine_word_boundary_cast<int>(param_2[5] + -3 + iVar2);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,0x14,iVar2,2,
                 (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
    return;
  }
  st::fn_006B4170(param_1,0,iVar2,0,st::machine_word_boundary_cast<int>(param_2[5] + -2),0x13,0);
  st::fn_006B4170(param_1,0,iVar2 + 2,0x13,st::machine_word_boundary_cast<int>(param_2[5] + -6),3,0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,-(uint)(*param_2 != 1) & 2,iVar2,0x13,
               (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,0x13,iVar2 + 3,0x16,
               (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2 + 3,0x16,st::machine_word_boundary_cast<int>(param_2[5] + -6 + iVar2),0x16,
               (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,st::machine_word_boundary_cast<int>(param_2[5] + iVar2 + -6),0x16,
               st::machine_word_boundary_cast<int>(param_2[5] + iVar2 + -3),0x13,
               (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
  iVar1 = st::machine_word_boundary_cast<int>(param_2[5] + -3 + iVar2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar1,0x13,iVar1,2,
               (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,1,st::machine_word_boundary_cast<int>(param_2[5] + -3 + iVar2),1,
               (byte)*(undefined4 *)(this->array_00BC[0xc].field_01DB + 0x140),0xd);
  return;
}

