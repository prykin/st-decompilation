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
  uint *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar7;
  int local_EAX_542;
  int local_EAX_1193;
  int iVar6;
  int iVar5;
  int iVar8;
  int iVar9;
  RuntimeRecord_007F4D74_0010 *pRVar10;
  int iVar11;
  int local_c;

  iVar11 = param_2;
  if (DAT_007f4d84 <= DAT_007f4d78) {
    puVar2 = Library::DKW::LIB::MemRealloc(PTR_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
    if (puVar2 == nullptr) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    PTR_007f4d6c = puVar2;
  }
  pvVar3 = Library::DKW::LIB::MemAlloc((param_1 * 0xfffffff + 2 + param_2) * 0x10);
  if (pvVar3 == nullptr) {
    return 0;
  }
  PTR_007f4d6c[DAT_007f4d78 * 3 + 2] = pvVar3;
  PTR_007f4d6c[DAT_007f4d78 * 3] = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    iVar4 = param_1 * 0x10;
    PTR_007f4d6c[DAT_007f4d78 * 3] =
         (uint)(*(byte *)((g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    /* ST_CALLSITE[004271A4]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    iVar7 = sub_004248D0(this,(int)pvVar3,0,
                         g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar8 = g_runtimeRecords_007F4D74[param_1].field_0000;
    for (iVar9 = param_1; iVar9 <= param_2; iVar9 = iVar9 + 1) {
      iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
      if (iVar1 < iVar8) {
        /* ST_CALLSITE[00427202]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = sub_004248D0(this,(int)pvVar3,iVar7,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar9,CASE_0
                             ,~CASE_0);
      }
      if ((iVar9 < param_2) &&
         (iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000 + DAT_007f4d7c,
         iVar8 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0000 + iVar4) + DAT_007f4d7c)) {
        /* ST_CALLSITE[00427257]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = sub_004248D0(this,(int)pvVar3,iVar7,iVar8,DAT_007f4d80 + iVar9,CASE_1,~CASE_0);
      }
      iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
      iVar4 = iVar4 + 0x10;
    }
    local_c = param_2 * 0x10;
    /* ST_CALLSITE[004272AE]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    local_EAX_542 =
         sub_004248D0(this,(int)pvVar3,iVar7,
                      g_runtimeRecords_007F4D74[param_2].field_0000 + DAT_007f4d7c,
                      DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_CALLSITE[004272DA]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    param_3 = sub_004248D0(this,(int)pvVar3,local_EAX_542,
                           g_runtimeRecords_007F4D74[param_2].field_000C + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    pRVar10 = g_runtimeRecords_007F4D74;
    if (param_1 < param_2) {
      do {
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if ((iVar8 < *(int *)((int)pRVar10 + local_c + -4)) && (param_2 != iVar11)) {
          /* ST_CALLSITE[00427330]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          pRVar10 = g_runtimeRecords_007F4D74;
        }
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if (*(int *)((int)pRVar10 + local_c + -4) < iVar8) {
          /* ST_CALLSITE[0042736B]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          pRVar10 = g_runtimeRecords_007F4D74;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar11 = pRVar10[param_1].field_000C;
      if (pRVar10[param_1 + 1].field_000C < iVar11) {
LAB_004278f1:
        /* ST_CALLSITE[0042790E]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar11 + DAT_007f4d7c,DAT_007f4d80 + param_1
                               ,CASE_3,~CASE_0);
        pRVar10 = g_runtimeRecords_007F4D74;
      }
    }
  }
  else {
    if (param_3 == -1) {
      iVar4 = param_1 * 0x10;
      PTR_007f4d6c[DAT_007f4d78 * 3] =
           (uint)(*(byte *)((g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c) *
                            *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                           param_1) >> 7);
      /* ST_CALLSITE[0042742F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
      iVar7 = sub_004248D0(this,(int)pvVar3,0,
                           g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c,
                           DAT_007f4d80 + param_1,CASE_0,~CASE_0);
      iVar8 = g_runtimeRecords_007F4D74[param_1].field_0000;
      for (iVar9 = param_1; iVar9 <= param_2; iVar9 = iVar9 + 1) {
        iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
        if (iVar1 < iVar8) {
          /* ST_CALLSITE[0042748D]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          iVar7 = sub_004248D0(this,(int)pvVar3,iVar7,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar9,
                               CASE_0,~CASE_0);
        }
        if ((iVar9 < param_2) &&
           (iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000 + DAT_007f4d7c,
           iVar8 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0000 + iVar4) + DAT_007f4d7c))
        {
          /* ST_CALLSITE[004274E2]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          iVar7 = sub_004248D0(this,(int)pvVar3,iVar7,iVar8,DAT_007f4d80 + iVar9,CASE_1,~CASE_0);
        }
        iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
        iVar4 = iVar4 + 0x10;
      }
      local_c = param_2 * 0x10;
      /* ST_CALLSITE[00427539]: CALL 0x00405010; direct=00405010 sub_004248D0 */
      local_EAX_1193 =
           sub_004248D0(this,(int)pvVar3,iVar7,
                        g_runtimeRecords_007F4D74[param_2].field_0000 + DAT_007f4d7c,
                        DAT_007f4d80 + param_2,CASE_1,~CASE_0);
      /* ST_CALLSITE[00427565]: CALL 0x00405010; direct=00405010 sub_004248D0 */
      param_3 = sub_004248D0(this,(int)pvVar3,local_EAX_1193,
                             g_runtimeRecords_007F4D74[param_2].field_0004 + DAT_007f4d7c,
                             DAT_007f4d80 + param_2,CASE_3,~CASE_0);
      pRVar10 = g_runtimeRecords_007F4D74;
      if (param_1 < param_2) {
        do {
          iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_0004;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar8 < *(int *)(local_c + -0xc + (int)pRVar10)) && (param_2 != iVar11)) {
            /* ST_CALLSITE[004275BB]: CALL 0x00405010; direct=00405010 sub_004248D0 */
            param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_3,~CASE_0);
            pRVar10 = g_runtimeRecords_007F4D74;
          }
          iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_0004;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(local_c + -0xc + (int)pRVar10) < iVar8) {
            /* ST_CALLSITE[004275F6]: CALL 0x00405010; direct=00405010 sub_004248D0 */
            param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_2,~CASE_0);
            pRVar10 = g_runtimeRecords_007F4D74;
          }
          param_2 = param_2 + -1;
          local_c = local_c + -0x10;
        } while (param_1 < param_2);
        if (pRVar10[param_1 + 1].field_0004 < pRVar10[param_1].field_0004) {
          /* ST_CALLSITE[0042764F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,pRVar10[param_1].field_0004 + DAT_007f4d7c
                                 ,DAT_007f4d80 + param_1,CASE_3,~CASE_0);
          pRVar10 = g_runtimeRecords_007F4D74;
        }
      }
      iVar11 = pRVar10[param_1].field_0004;
      goto LAB_00427930;
    }
    iVar4 = param_1 * 0x10;
    PTR_007f4d6c[DAT_007f4d78 * 3] =
         (uint)(*(byte *)((g_runtimeRecords_007F4D74[param_1].field_0008 + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    /* ST_CALLSITE[004276E9]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    iVar7 = sub_004248D0(this,(int)pvVar3,0,
                         g_runtimeRecords_007F4D74[param_1].field_0008 + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar8 = g_runtimeRecords_007F4D74[param_1].field_0008;
    for (iVar9 = param_1; iVar9 <= param_2; iVar9 = iVar9 + 1) {
      iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0008;
      if (iVar1 < iVar8) {
        /* ST_CALLSITE[00427749]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = sub_004248D0(this,(int)pvVar3,iVar7,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar9,CASE_0
                             ,~CASE_0);
      }
      if ((iVar9 < param_2) &&
         (iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0008 + DAT_007f4d7c,
         iVar8 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0008 + iVar4) + DAT_007f4d7c)) {
        /* ST_CALLSITE[0042779F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = sub_004248D0(this,(int)pvVar3,iVar7,iVar8,DAT_007f4d80 + iVar9,CASE_1,~CASE_0);
      }
      iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0008;
      iVar4 = iVar4 + 0x10;
    }
    local_c = param_2 * 0x10;
    /* ST_CALLSITE[004277F8]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    iVar6 = sub_004248D0(this,(int)pvVar3,iVar7,
                         g_runtimeRecords_007F4D74[param_2].field_0008 + DAT_007f4d7c,
                         DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_CALLSITE[00427824]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    param_3 = sub_004248D0(this,(int)pvVar3,iVar6,
                           g_runtimeRecords_007F4D74[param_2].field_000C + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    pRVar10 = g_runtimeRecords_007F4D74;
    if (param_1 < param_2) {
      do {
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if ((iVar8 < *(int *)(local_c + -4 + (int)pRVar10)) && (param_2 != iVar11)) {
          /* ST_CALLSITE[0042787A]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          pRVar10 = g_runtimeRecords_007F4D74;
        }
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if (*(int *)(local_c + -4 + (int)pRVar10) < iVar8) {
          /* ST_CALLSITE[004278B5]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          pRVar10 = g_runtimeRecords_007F4D74;
        }
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar11 = pRVar10[param_1].field_000C;
      if (pRVar10[param_1 + 1].field_000C < iVar11) goto LAB_004278f1;
    }
  }
  iVar11 = pRVar10[param_1].field_000C;
LAB_00427930:
  /* ST_CALLSITE[0042793B]: CALL 0x00405010; direct=00405010 sub_004248D0 */
  iVar5 = sub_004248D0(this,(int)pvVar3,param_3,iVar11 + DAT_007f4d7c,DAT_007f4d80 + param_1,CASE_2,
                       ~CASE_0);
  PTR_007f4d6c[DAT_007f4d78 * 3 + 1] = iVar5;
  DAT_007f4d78 = DAT_007f4d78 + 1;
  return 0;
}

