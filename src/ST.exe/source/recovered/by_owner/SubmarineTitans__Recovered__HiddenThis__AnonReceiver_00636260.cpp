#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_00636260.cpp

// 00636260 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::FUN_00636260
#line 4 "decomp/ST.exe/functions/00636260/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00636260.
   Evidence: incoming_receiver_captures=1; receiver_accesses=16; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=2; adopt_untyped_existing_thiscall */

undefined4 __thiscall
st::fn_00636260
          (AnonReceiver_00636260 *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  DArrayTy *array;
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar5;
  longlong lVar6;
  undefined4 local_50 [13];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  AnonReceiver_00636260 *local_8;

  *(uint *)&this->field_0xc = param_1;
  *(int *)&this->field_0x10 = param_2;
  *(int *)&this->field_0x14 = param_3;
  *(int *)&this->field_0x18 = param_4;
  *(int *)&this->field_0x1c = param_4;
  *(uint *)&this->field_0x30 = g_playSystem_00802A38->field_00E4;
  local_8 = this;
  iVar1 = st::fn_00402162(this);
  *(int *)&this->field_0x28 = iVar1;
  *(int *)&this->field_0x4 = param_7;
  if (param_7 != 0) {
    if (param_7 == 1) {
      *(undefined4 *)&this->field_0x20 = 0x11;
      goto LAB_006362c5;
    }
    if (param_7 != 2) goto LAB_006362c5;
  }
  *(undefined4 *)&this->field_0x20 = 0x16;
LAB_006362c5:
  array = st::fn_006AE290(nullptr,param_5 * param_6,0x32,10);
  *(DArrayTy **)&this->field_0x2c = array;
  if ((array != nullptr) && (0 < param_4)) {
    *(int *)this = param_5;
    *(int *)&this->field_0x8 = param_6;
    memset(local_50, 0, 0x32); /* compiler bulk-zero initialization */
    st::fn_006AE140(array,param_5 * param_6 - 1,local_50);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    local_c = _DAT_0079c5a4 / (float)param_5;
    if (0 < param_5) {
      do {
        fcos((float10)(int)param_1 * (float10)local_c);
        fsin((float10)(int)param_1 * (float10)local_c);
        lVar6 = st::fn_0072E288();
        local_18 = (undefined4)lVar6;
        lVar6 = st::fn_0072E288();
        local_1c = (undefined4)lVar6;
        lVar6 = st::fn_0072E288();
        local_10 = (undefined4)lVar6;
        lVar6 = st::fn_0072E288();
        local_14 = (undefined4)lVar6;
        if (0 < param_6) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = param_6;
          uVar5 = param_1;
          do {
            iVar2 = *(int *)&this->field_0x2c;
            if (uVar5 < *(uint *)(iVar2 + 0xc)) {
              piVar3 = (int *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c));
            }
            else {
              piVar3 = nullptr;
            }
            *piVar3 = param_7;
            if (*(int *)&local_8->field_0x28 == 0) {
              piVar3[1] = -1;
            }
            else {
              uVar1 = st::fn_00402A22(*(int *)&local_8->field_0x4);
              piVar3[1] = uVar1;
            }
            STField<undefined4>(piVar3,0x12) = local_14;
            STField<undefined4>(piVar3,0xe) = local_10;
            STField<undefined4>(piVar3,0x26) = local_18;
            STField<int>(piVar3,0x22) = param_6;
            STField<int>(piVar3,0x16) = param_3;
            uVar5 = uVar5 + param_5;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_4 = param_4 + -1;
            piVar3[2] = 0;
            STField<undefined1>(piVar3,0xd) = 0;
            STField<undefined4>(piVar3,0x1a) = 0;
            STField<undefined4>(piVar3,0x1e) = 0;
            STField<undefined4>(piVar3,0x2a) = local_1c;
            STField<undefined4>(piVar3,0x2e) = 0;
            this = local_8;
          } while (param_4 != 0);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while ((int)param_1 < param_5);
    }
  }
  return 0;
}

// 00636FC0 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::sub_00636FC0
#line 4 "decomp/ST.exe/functions/00636FC0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260];
   agreed_this_calls=1; incoming_this_accesses=3; incoming_edx_uses=0;
   incoming_stack_parameter_uses=0; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_00636FC0
          (AnonReceiver_00636260 *this)

{
  int iVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = *(int *)&this->field_0xc;
  sVar2 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  iVar5 = *(int *)&this->field_0x10;
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar1 = *(int *)&this->field_0x14;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_c = (short)(((short)(iVar1 / 200) + sVar2) - (short)((longlong)iVar1 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar1 / 200) + sVar2) -
                          (short)((longlong)iVar1 * 0x51eb851f >> 0x3f));
  }
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar4) &&
       (iVar4 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar5)) &&
     (iVar5 <= g_sT3DSMAPContext_00807598->field_0054)) {
    local_8 = st::fn_006DDBD0();
    pVVar3 = g_visibleClass_00802A88;
    if (local_8 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return local_8;
    }
    if (DAT_0080874d == -1) {
      return local_8;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_8;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,&local_10,
               &local_14);
    if (local_c < 0) {
      return local_8;
    }
    if (4 < local_c) {
      return local_8;
    }
    if (local_10 < 0) {
      return local_8;
    }
    if ((int)pVVar3->field_0030 <= local_10) {
      return local_8;
    }
    local_14 = g_centeredOffsets5[local_c] + local_14;
    if (local_14 < 0) {
      return local_8;
    }
    if (pVVar3->field_0034 <= local_14) {
      return local_8;
    }
    if (pVVar3->field_004C == nullptr) {
      return local_8;
    }
    if (pVVar3->field_004C[local_10 + local_14 * pVVar3->field_0030] != 0) {
      return local_8;
    }
  }
  return 0;
}

