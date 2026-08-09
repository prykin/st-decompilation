#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SettMapMTy.cpp

// 005B5F00 SettMapMTy::sub_005B5F00
#line 4 "decomp/ST.exe/functions/005B5F00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_005B5F00(SettMapMTy *this,RecoveredSourceFamily_dibcopy *param_1,int *param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = (*param_2 + -1) * param_2[5];
  st::fn_006B4170(param_1,0,iVar2,0,param_2[5] + -2,param_1->field_0008,0xff);
  if (param_2[1] == 1) {
    st::fn_006B4170(param_1,0,iVar2,3,param_2[5] + -2,param_2[6] + -3,0);
    st::fn_006B4170(param_1,0,iVar2 + 2,1,param_2[5] + -6,2,0);
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,param_2[6] - ((*param_2 != 1) + 1),
                 iVar2,3,(byte)this->field_1A5B->field_0140,0xd);
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,3,iVar2 + 3,0,
                 (byte)this->field_1A5B->field_0140,0xd);
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2 + 3,0,param_2[5] + -6 + iVar2,0,
                 (byte)this->field_1A5B->field_0140,0xd);
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,param_2[5] + iVar2 + -6,0,
                 param_2[5] + iVar2 + -3,3,(byte)this->field_1A5B->field_0140,0xd);
    iVar2 = param_2[5] + -3 + iVar2;
    st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,3,iVar2,param_2[6] + -2,
                 (byte)this->field_1A5B->field_0140,0xd);
    return;
  }
  st::fn_006B4170(param_1,0,iVar2 + 1,4,param_2[5] + -4,param_2[6] + -5,0);
  st::fn_006B4170(param_1,0,iVar2 + 2,2,param_2[5] + -6,2,0);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,param_2[6] + -1,iVar2,4,
               (byte)this->field_1A5B->field_0140,0xd);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,4,iVar2 + 3,1,
               (byte)this->field_1A5B->field_0140,0xd);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2 + 3,1,param_2[5] + -6 + iVar2,1,
               (byte)this->field_1A5B->field_0140,0xd);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,param_2[5] + iVar2 + -6,1,
               param_2[5] + iVar2 + -3,4,(byte)this->field_1A5B->field_0140,0xd);
  iVar1 = param_2[5] + -3 + iVar2;
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar1,4,iVar1,param_2[6] + -1,
               (byte)this->field_1A5B->field_0140,0xd);
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,param_2[6] + -1,
               param_2[5] + -3 + iVar2,param_2[6] + -1,(byte)this->field_1A5B->field_0140,0xd);
  return;
}

// 005D00B0 SettMapMTy::sub_005D00B0
#line 4 "decomp/ST.exe/functions/005D00B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005D00B0(SettMapMTy *this,AnonShape_005D00B0_9E7CC102 *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_1a;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar1 = param_1->field_0050;
  memset(&local_64, 0, 0x60); /* compiler bulk-zero initialization */
  STPiece<3,1>(local_64) = param_1->field_0003;
  STPiece<2,1>(local_64) = param_1->field_0002;
  local_60 = 1;
  st::fn_006AFE40(&local_14,puVar1);
  local_10 = param_1->field_0054;
  local_1a = param_1->field_004A;
  local_c = param_1->field_0058;
  local_8 = param_1->field_005C;
  local_19 = 0;
  local_15 = 0;
  st::fn_006B11D0(&this->field_1F84->flags,param_2,&local_64);
  return;
}

// 005D1380 SettMapMTy::sub_005D1380
#line 4 "decomp/ST.exe/functions/005D1380/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005D1380(SettMapMTy *this)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;

  DAT_0080874d = -1;
  pSVar1 = this->field_1F84;
  if (pSVar1 != nullptr) {
    uVar2 = pSVar1->count;
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      while ((((!bVar5 ||
               (pcVar3 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar4,
               pcVar3 == nullptr)) || (pcVar3[4] != '\x02')) ||
             (*(int *)(pcVar3 + 6) != DAT_0080877f))) {
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      }
      DAT_0080874d = pcVar3[2];
      DAT_0080874e = pcVar3[3];
    }
  }
  return;
}

