#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0];
   agreed_this_calls=3; incoming_this_accesses=6; incoming_edx_uses=0;
   incoming_stack_parameter_uses=96; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::sub_00427090
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
    pvVar2 = Library::DKW::LIB::MemRealloc(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
    if (pvVar2 == nullptr) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    DAT_007f4d6c = pvVar2;
  }
  pvVar2 = Library::DKW::LIB::MemAlloc((param_1 * 0xfffffff + 2 + param_2) * 0x10);
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
    iVar4 = sub_004248D0(this,(int)pvVar2,0,*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = *(int *)(iVar3 + DAT_007f4d74);
    iVar10 = iVar3;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      if (*(int *)(iVar10 + DAT_007f4d74) < iVar7) {
        iVar4 = sub_004248D0(this,(int)pvVar2,iVar4,*(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c,
                             DAT_007f4d80 + iVar8,CASE_0,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar10 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar4 = sub_004248D0(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = *(int *)(iVar10 + DAT_007f4d74);
      iVar10 = iVar10 + 0x10;
    }
    local_c = param_2 * 0x10;
    local_EAX_542 =
         sub_004248D0(this,(int)pvVar2,iVar4,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                      DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_PSEUDO[stack_slot_reuse,raw_pointer_offset]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; candidate structure field after proof; otherwise retain buffer arithmetic */
    param_3 = sub_004248D0(this,(int)pvVar2,local_EAX_542,
                           *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        iVar10 = *(int *)(iVar7 + 0xc + local_c);
        if ((iVar10 < *(int *)(iVar7 + -4 + local_c)) && (param_2 != iVar9)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        iVar10 = *(int *)(iVar7 + 0xc + local_c);
        if (*(int *)(iVar7 + -4 + local_c) < iVar10) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
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
        param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar9 + DAT_007f4d7c,DAT_007f4d80 + param_1,
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
      iVar4 = sub_004248D0(this,(int)pvVar2,0,*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_1,CASE_0,~CASE_0);
      iVar7 = *(int *)(iVar3 + DAT_007f4d74);
      iVar10 = iVar3;
      for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
        if (*(int *)(iVar10 + DAT_007f4d74) < iVar7) {
          iVar4 = sub_004248D0(this,(int)pvVar2,iVar4,*(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c
                               ,DAT_007f4d80 + iVar8,CASE_0,~CASE_0);
        }
        if ((iVar8 < param_2) &&
           (iVar7 = *(int *)(iVar10 + DAT_007f4d74) + DAT_007f4d7c,
           iVar7 < *(int *)(iVar10 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
          iVar4 = sub_004248D0(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
        }
        iVar7 = *(int *)(iVar10 + DAT_007f4d74);
        iVar10 = iVar10 + 0x10;
      }
      local_c = param_2 * 0x10;
      local_EAX_1193 =
           sub_004248D0(this,(int)pvVar2,iVar4,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                        DAT_007f4d80 + param_2,CASE_1,~CASE_0);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = sub_004248D0(this,(int)pvVar2,local_EAX_1193,
                             *(int *)(local_c + 4 + DAT_007f4d74) + DAT_007f4d7c,
                             DAT_007f4d80 + param_2,CASE_3,~CASE_0);
      iVar7 = DAT_007f4d74;
      if (param_1 < param_2) {
        do {
          iVar10 = *(int *)(local_c + 4 + iVar7);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar10 < *(int *)(local_c + -0xc + iVar7)) && (param_2 != iVar9)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_3,~CASE_0);
            iVar7 = DAT_007f4d74;
          }
          iVar10 = *(int *)(local_c + 4 + iVar7);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(local_c + -0xc + iVar7) < iVar10) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
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
          param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar9 + DAT_007f4d7c,
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
    iVar4 = sub_004248D0(this,(int)pvVar2,0,*(int *)(iVar3 + 8 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = *(int *)(iVar3 + 8 + DAT_007f4d74);
    iVar10 = iVar3;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      iVar1 = *(int *)(iVar10 + 8 + DAT_007f4d74);
      if (iVar1 < iVar7) {
        iVar4 = sub_004248D0(this,(int)pvVar2,iVar4,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar8,CASE_0
                             ,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar10 + 8 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar10 + 0x18 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar4 = sub_004248D0(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = *(int *)(iVar10 + 8 + DAT_007f4d74);
      iVar10 = iVar10 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar6 = sub_004248D0(this,(int)pvVar2,iVar4,*(int *)(local_c + 8 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_PSEUDO[stack_slot_reuse,raw_pointer_offset]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; candidate structure field after proof; otherwise retain buffer arithmetic */
    param_3 = sub_004248D0(this,(int)pvVar2,iVar6,
                           *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar10 = *(int *)(local_c + 0xc + iVar7);
        if ((iVar10 < *(int *)(local_c + -4 + iVar7)) && (param_2 != iVar9)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar10 = *(int *)(local_c + 0xc + iVar7);
        if (*(int *)(local_c + -4 + iVar7) < iVar10) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,
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
  iVar5 = sub_004248D0(this,(int)pvVar2,param_3,iVar9 + DAT_007f4d7c,DAT_007f4d80 + param_1,CASE_2,
                       ~CASE_0);
  *(int *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 4) = iVar5;
  DAT_007f4d78 = DAT_007f4d78 + 1;
  return 0;
}

