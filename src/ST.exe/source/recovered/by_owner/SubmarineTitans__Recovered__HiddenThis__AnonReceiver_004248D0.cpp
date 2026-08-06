#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_004248D0.cpp

// 00427090 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::sub_00427090
#line 4 "decomp/ST.exe/functions/00427090/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0];
   agreed_this_calls=3; incoming_this_accesses=6; incoming_edx_uses=0;
   incoming_stack_parameter_uses=96; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_00427090
          (AnonReceiver_004248D0 *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int local_EAX_542;
  int local_EAX_1193;
  int iVar6;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;

  iVar9 = param_2;
  if (DAT_007f4d84 <= DAT_007f4d78) {
    pvVar2 = st::fn_006ACF50(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
    if (pvVar2 == nullptr) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    DAT_007f4d6c = pvVar2;
  }
  pvVar2 = st::fn_006AAC70((param_1 * 0xfffffff + 2 + param_2) * 0x10);
  if (pvVar2 == nullptr) {
    return 0;
  }
  *(void **)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 8) = pvVar2;
  *(undefined4 *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    iVar3 = param_1 * 0x10;
    *(uint *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) =
         (uint)(*(byte *)((*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    iVar4 = st::fn_00405010(this,(int)pvVar2,0,*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = *(int *)(iVar3 + DAT_007f4d74);
    iVar10 = iVar3;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      if (*(int *)(iVar10 + DAT_007f4d74) < iVar7) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,*(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c,
                             DAT_007f4d80 + iVar8,CASE_0,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar10 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = *(int *)(iVar10 + DAT_007f4d74);
      iVar10 = iVar10 + 0x10;
    }
    local_c = param_2 * 0x10;
    local_EAX_542 =
         st::fn_00405010(this,(int)pvVar2,iVar4,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                      DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_PSEUDO[stack_slot_reuse,raw_pointer_offset]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; candidate structure field after proof; otherwise retain buffer arithmetic */
    param_3 = st::fn_00405010(this,(int)pvVar2,local_EAX_542,
                           *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        iVar10 = *(int *)(iVar7 + 0xc + local_c);
        if ((iVar10 < *(int *)(iVar7 + -4 + local_c)) && (param_2 != iVar9)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        iVar10 = *(int *)(iVar7 + 0xc + local_c);
        if (*(int *)(iVar7 + -4 + local_c) < iVar10) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar9 = *(int *)(iVar3 + 0xc + iVar7);
      if (*(int *)(iVar3 + 0x1c + iVar7) < iVar9) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_004278f1:
        param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar9 + DAT_007f4d7c,DAT_007f4d80 + param_1,
                               CASE_3,~CASE_0);
        iVar7 = DAT_007f4d74;
      }
    }
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_3 == -1) {
      iVar3 = param_1 * 0x10;
      *(uint *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) =
           (uint)(*(byte *)((*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c) *
                            *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                           param_1) >> 7);
      iVar4 = st::fn_00405010(this,(int)pvVar2,0,*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_1,CASE_0,~CASE_0);
      iVar7 = *(int *)(iVar3 + DAT_007f4d74);
      iVar10 = iVar3;
      for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
        if (*(int *)(iVar10 + DAT_007f4d74) < iVar7) {
          iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,*(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c
                               ,DAT_007f4d80 + iVar8,CASE_0,~CASE_0);
        }
        if ((iVar8 < param_2) &&
           (iVar7 = *(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c,
           iVar7 < *(int *)(iVar10 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
          iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
        }
        iVar7 = *(int *)(iVar10 + DAT_007f4d74);
        iVar10 = iVar10 + 0x10;
      }
      local_c = param_2 * 0x10;
      local_EAX_1193 =
           st::fn_00405010(this,(int)pvVar2,iVar4,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                        DAT_007f4d80 + param_2,CASE_1,~CASE_0);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = st::fn_00405010(this,(int)pvVar2,local_EAX_1193,
                             *(int *)(local_c + 4 + DAT_007f4d74) + DAT_007f4d7c,
                             DAT_007f4d80 + param_2,CASE_3,~CASE_0);
      iVar7 = DAT_007f4d74;
      if (param_1 < param_2) {
        do {
          iVar10 = *(int *)(local_c + 4 + iVar7);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar10 < *(int *)(local_c + -0xc + iVar7)) && (param_2 != iVar9)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_3,~CASE_0);
            iVar7 = DAT_007f4d74;
          }
          iVar10 = *(int *)(local_c + 4 + iVar7);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(local_c + -0xc + iVar7) < iVar10) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_2,~CASE_0);
            iVar7 = DAT_007f4d74;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + -1;
          local_c = local_c + -0x10;
        } while (param_1 < param_2);
        iVar9 = *(int *)(iVar3 + 4 + iVar7);
        if (*(int *)(iVar3 + 0x14 + iVar7) < iVar9) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar9 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_1,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
      }
      iVar9 = *(int *)(iVar3 + 4 + iVar7);
      goto LAB_00427930;
    }
    iVar3 = param_1 * 0x10;
    *(uint *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) =
         (uint)(*(byte *)((*(int *)(iVar3 + 8 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    iVar4 = st::fn_00405010(this,(int)pvVar2,0,*(int *)(iVar3 + 8 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = *(int *)(iVar3 + 8 + DAT_007f4d74);
    iVar10 = iVar3;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      iVar1 = *(int *)(iVar10 + 8 + DAT_007f4d74);
      if (iVar1 < iVar7) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar8,CASE_0
                             ,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar10 + 8 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar10 + 0x18 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = *(int *)(iVar10 + 8 + DAT_007f4d74);
      iVar10 = iVar10 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar6 = st::fn_00405010(this,(int)pvVar2,iVar4,*(int *)(local_c + 8 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_PSEUDO[stack_slot_reuse,raw_pointer_offset]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; candidate structure field after proof; otherwise retain buffer arithmetic */
    param_3 = st::fn_00405010(this,(int)pvVar2,iVar6,
                           *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar10 = *(int *)(local_c + 0xc + iVar7);
        if ((iVar10 < *(int *)(local_c + -4 + iVar7)) && (param_2 != iVar9)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar10 = *(int *)(local_c + 0xc + iVar7);
        if (*(int *)(local_c + -4 + iVar7) < iVar10) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar9 = *(int *)(iVar3 + 0xc + iVar7);
      if (*(int *)(iVar3 + 0x1c + iVar7) < iVar9) goto LAB_004278f1;
    }
  }
  local_8 = param_1 * 0x10;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar9 = *(int *)(local_8 + 0xc + iVar7);
LAB_00427930:
  iVar5 = st::fn_00405010(this,(int)pvVar2,param_3,iVar9 + DAT_007f4d7c,DAT_007f4d80 + param_1,CASE_2,
                       ~CASE_0);
  *(int *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 4) = iVar5;
  DAT_007f4d78 = DAT_007f4d78 + 1;
  return 0;
}

// 00427BB0 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00427bb0
#line 4 "decomp/ST.exe/functions/00427BB0/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=21; adopt_untyped_existing_thiscall */

undefined4 __thiscall
st::fn_00427BB0
          (AnonReceiver_004248D0 *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_8;

  piVar3 = (int *)(param_1 * 0x10 + DAT_007f4d74);
  iVar6 = (DAT_007f4d80 + param_1) * *(int *)&this->field_0x37c + *(int *)&this->field_0x38c;
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar4 = param_1;
      local_14 = *piVar3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = piVar3[3];
      if (param_3 == -1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = piVar3[1];
      }
      else if (param_3 == 1) {
        local_14 = piVar3[2];
      }
      if (param_1 < local_14) {
        if (local_8 != 0x7fffffff) {
          st::fn_00401E06(this,local_8,iVar4 + -1,param_3);
          local_8 = 0x7fffffff;
        }
      }
      else {
        bVar5 = *(byte *)(local_14 + DAT_007f4d7c + iVar6);
        iVar7 = local_14 + 1;
        if (iVar7 <= param_1) {
          do {
            if (*(byte *)(DAT_007f4d7c + iVar6 + iVar7) != bVar5) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 <= param_1);
        }
        if ((local_8 != 0x7fffffff) && ((iVar7 <= param_1 || (bVar5 != bVar1)))) {
          st::fn_00401E06(this,local_8,iVar4 + -1,param_3);
          local_8 = 0x7fffffff;
        }
        if (param_1 < iVar7) {
          if (local_8 == 0x7fffffff) {
            local_8 = iVar4;
            bVar1 = bVar5;
          }
        }
        else {
LAB_00427cca:
          iVar8 = iVar7;
          if (DAT_007f4d84 <= DAT_007f4d78) {
            pvVar2 = st::fn_006ACF50(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
            if (pvVar2 == nullptr) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            DAT_007f4d6c = pvVar2;
          }
          pvVar2 = st::fn_006AAC70(0x20);
          if (pvVar2 == nullptr) {
            return 0;
          }
          *(void **)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 8) = pvVar2;
          iVar7 = st::fn_00405010(this,(int)pvVar2,0,DAT_007f4d7c + local_14,DAT_007f4d80 + iVar4,
                               CASE_0,CASE_1);
          iVar7 = st::fn_00405010(this,(int)pvVar2,iVar7,DAT_007f4d7c + -1 + iVar8,DAT_007f4d80 + iVar4
                               ,CASE_3,CASE_2);
          *(int *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 4) = iVar7;
          if ((bVar5 & 0x80) == 0) {
            *(undefined4 *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) = 0;
          }
          else {
            *(undefined4 *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) = 1;
          }
          DAT_007f4d78 = DAT_007f4d78 + 1;
          if (iVar8 <= param_1) {
            iVar7 = iVar8 + 1;
            bVar5 = *(byte *)(DAT_007f4d7c + iVar8 + iVar6);
            local_14 = iVar8;
            if (iVar7 <= param_1) {
              do {
                if (*(byte *)(DAT_007f4d7c + iVar6 + iVar7) != bVar5) break;
                iVar7 = iVar7 + 1;
              } while (iVar7 <= param_1);
            }
            goto LAB_00427cca;
          }
        }
      }
      piVar3 = piVar3 + 4;
      iVar6 = iVar6 + *(int *)&this->field_0x37c;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = iVar4 + 1;
    } while (iVar4 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      st::fn_00401E06(this,local_8,iVar4,param_3);
    }
  }
  return 0;
}

