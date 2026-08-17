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
  undefined4 *puVar2;
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
    puVar2 = st::pointer_boundary_cast<undefined4 *>(st::fn_006ACF50(PTR_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4));
    if (puVar2 == nullptr) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    PTR_007f4d6c = puVar2;
  }
  pvVar3 = st::fn_006AAC70((param_1 * 0xfffffff + 2 + param_2) * 0x10);
  if (pvVar3 == nullptr) {
    return 0;
  }
  PTR_007f4d6c[DAT_007f4d78 * 3 + 2] = st::machine_word_boundary_cast<undefined4>(pvVar3);
  PTR_007f4d6c[DAT_007f4d78 * 3] = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    iVar4 = param_1 * 0x10;
    PTR_007f4d6c[DAT_007f4d78 * 3] =
         (uint)(*(byte *)((g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    /* ST_CALLSITE[004271A4]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    iVar7 = st::fn_00405010(this,(int)pvVar3,0,
                         st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c),
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar8 = g_runtimeRecords_007F4D74[param_1].field_0000;
    for (iVar9 = param_1; iVar9 <= param_2; iVar9 = iVar9 + 1) {
      iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
      if (iVar1 < iVar8) {
        /* ST_CALLSITE[00427202]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = st::fn_00405010(this,(int)pvVar3,iVar7,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar9,CASE_0
                             ,~CASE_0);
      }
      if ((iVar9 < param_2) &&
         (iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000 + DAT_007f4d7c,
         iVar8 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0000 + iVar4) + DAT_007f4d7c)) {
        /* ST_CALLSITE[00427257]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = st::fn_00405010(this,(int)pvVar3,iVar7,iVar8,DAT_007f4d80 + iVar9,CASE_1,~CASE_0);
      }
      iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
      iVar4 = iVar4 + 0x10;
    }
    local_c = param_2 * 0x10;
    /* ST_CALLSITE[004272AE]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    local_EAX_542 =
         st::fn_00405010(this,(int)pvVar3,iVar7,
                      st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0000 + DAT_007f4d7c),
                      DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_CALLSITE[004272DA]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    param_3 = st::fn_00405010(this,(int)pvVar3,local_EAX_542,
                           st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_000C + DAT_007f4d7c),
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    pRVar10 = g_runtimeRecords_007F4D74;
    if (param_1 < param_2) {
      do {
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if ((iVar8 < *(int *)((int)pRVar10 + local_c + -4)) && (param_2 != iVar11)) {
          /* ST_CALLSITE[00427330]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = st::fn_00405010(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          pRVar10 = g_runtimeRecords_007F4D74;
        }
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if (*(int *)((int)pRVar10 + local_c + -4) < iVar8) {
          /* ST_CALLSITE[0042736B]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = st::fn_00405010(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
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
        param_3 = st::fn_00405010(this,(int)pvVar3,param_3,iVar11 + DAT_007f4d7c,DAT_007f4d80 + param_1
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
      iVar7 = st::fn_00405010(this,(int)pvVar3,0,
                           st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c),
                           DAT_007f4d80 + param_1,CASE_0,~CASE_0);
      iVar8 = g_runtimeRecords_007F4D74[param_1].field_0000;
      for (iVar9 = param_1; iVar9 <= param_2; iVar9 = iVar9 + 1) {
        iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
        if (iVar1 < iVar8) {
          /* ST_CALLSITE[0042748D]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          iVar7 = st::fn_00405010(this,(int)pvVar3,iVar7,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar9,
                               CASE_0,~CASE_0);
        }
        if ((iVar9 < param_2) &&
           (iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000 + DAT_007f4d7c,
           iVar8 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0000 + iVar4) + DAT_007f4d7c))
        {
          /* ST_CALLSITE[004274E2]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          iVar7 = st::fn_00405010(this,(int)pvVar3,iVar7,iVar8,DAT_007f4d80 + iVar9,CASE_1,~CASE_0);
        }
        iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0000;
        iVar4 = iVar4 + 0x10;
      }
      local_c = param_2 * 0x10;
      /* ST_CALLSITE[00427539]: CALL 0x00405010; direct=00405010 sub_004248D0 */
      local_EAX_1193 =
           st::fn_00405010(this,(int)pvVar3,iVar7,
                        st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0000 + DAT_007f4d7c),
                        DAT_007f4d80 + param_2,CASE_1,~CASE_0);
      /* ST_CALLSITE[00427565]: CALL 0x00405010; direct=00405010 sub_004248D0 */
      param_3 = st::fn_00405010(this,(int)pvVar3,local_EAX_1193,
                             st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0004 + DAT_007f4d7c),
                             DAT_007f4d80 + param_2,CASE_3,~CASE_0);
      pRVar10 = g_runtimeRecords_007F4D74;
      if (param_1 < param_2) {
        do {
          iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_0004;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar8 < *(int *)(local_c + -0xc + (int)pRVar10)) && (param_2 != iVar11)) {
            /* ST_CALLSITE[004275BB]: CALL 0x00405010; direct=00405010 sub_004248D0 */
            param_3 = st::fn_00405010(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_3,~CASE_0);
            pRVar10 = g_runtimeRecords_007F4D74;
          }
          iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_0004;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(local_c + -0xc + (int)pRVar10) < iVar8) {
            /* ST_CALLSITE[004275F6]: CALL 0x00405010; direct=00405010 sub_004248D0 */
            param_3 = st::fn_00405010(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_2,~CASE_0);
            pRVar10 = g_runtimeRecords_007F4D74;
          }
          param_2 = param_2 + -1;
          local_c = local_c + -0x10;
        } while (param_1 < param_2);
        if (pRVar10[param_1 + 1].field_0004 < pRVar10[param_1].field_0004) {
          /* ST_CALLSITE[0042764F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = st::fn_00405010(this,(int)pvVar3,param_3,st::machine_word_boundary_cast<int>(pRVar10[param_1].field_0004 + DAT_007f4d7c)
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
    iVar7 = st::fn_00405010(this,(int)pvVar3,0,
                         st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_1].field_0008 + DAT_007f4d7c),
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar8 = g_runtimeRecords_007F4D74[param_1].field_0008;
    for (iVar9 = param_1; iVar9 <= param_2; iVar9 = iVar9 + 1) {
      iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0008;
      if (iVar1 < iVar8) {
        /* ST_CALLSITE[00427749]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = st::fn_00405010(this,(int)pvVar3,iVar7,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar9,CASE_0
                             ,~CASE_0);
      }
      if ((iVar9 < param_2) &&
         (iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0008 + DAT_007f4d7c,
         iVar8 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0008 + iVar4) + DAT_007f4d7c)) {
        /* ST_CALLSITE[0042779F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
        iVar7 = st::fn_00405010(this,(int)pvVar3,iVar7,iVar8,DAT_007f4d80 + iVar9,CASE_1,~CASE_0);
      }
      iVar8 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar4).field_0008;
      iVar4 = iVar4 + 0x10;
    }
    local_c = param_2 * 0x10;
    /* ST_CALLSITE[004277F8]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    iVar6 = st::fn_00405010(this,(int)pvVar3,iVar7,
                         st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0008 + DAT_007f4d7c),
                         DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_CALLSITE[00427824]: CALL 0x00405010; direct=00405010 sub_004248D0 */
    param_3 = st::fn_00405010(this,(int)pvVar3,iVar6,
                           st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_000C + DAT_007f4d7c),
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    pRVar10 = g_runtimeRecords_007F4D74;
    if (param_1 < param_2) {
      do {
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if ((iVar8 < *(int *)(local_c + -4 + (int)pRVar10)) && (param_2 != iVar11)) {
          /* ST_CALLSITE[0042787A]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = st::fn_00405010(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          pRVar10 = g_runtimeRecords_007F4D74;
        }
        iVar8 = STObjectAtByteOffset(pRVar10, local_c).field_000C;
        if (*(int *)(local_c + -4 + (int)pRVar10) < iVar8) {
          /* ST_CALLSITE[004278B5]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          param_3 = st::fn_00405010(this,(int)pvVar3,param_3,iVar8 + DAT_007f4d7c,
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
  iVar5 = st::fn_00405010(this,(int)pvVar3,param_3,iVar11 + DAT_007f4d7c,DAT_007f4d80 + param_1,CASE_2,
                       ~CASE_0);
  PTR_007f4d6c[DAT_007f4d78 * 3 + 1] = iVar5;
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
  undefined4 *puVar2;
  void *pvVar3;
  RuntimeRecord_007F4D74_0010 *pRVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_8;

  pRVar4 = g_runtimeRecords_007F4D74 + param_1;
  iVar7 = (DAT_007f4d80 + param_1) * *(int *)&this->field_0x37c + *(int *)&this->field_0x38c;
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar5 = param_1;
      local_14 = pRVar4->field_0000;
      auto param_1_after_write = pRVar4->field_000C; /* compiler stack-slot lifetime split */
      if (param_3 == -1) {
        param_1_after_write = pRVar4->field_0004;
      }
      else if (param_3 == 1) {
        local_14 = pRVar4->field_0008;
      }
      if (param_1_after_write < local_14) {
        if (local_8 != 0x7fffffff) {
          /* ST_CALLSITE[00427C48]: CALL 0x00401e06; direct=00401E06 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::sub_00427090 */
          st::fn_00401E06(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
      }
      else {
        bVar6 = *(byte *)(local_14 + DAT_007f4d7c + iVar7);
        iVar8 = local_14 + 1;
        if (iVar8 <= param_1_after_write) {
          do {
            if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 <= param_1_after_write);
        }
        if ((local_8 != 0x7fffffff) && ((iVar8 <= param_1_after_write || (bVar6 != bVar1)))) {
          /* ST_CALLSITE[00427CAD]: CALL 0x00401e06; direct=00401E06 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::sub_00427090 */
          st::fn_00401E06(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
        if (param_1_after_write < iVar8) {
          if (local_8 == 0x7fffffff) {
            local_8 = iVar5;
            bVar1 = bVar6;
          }
        }
        else {
LAB_00427cca:
          iVar9 = iVar8;
          if (DAT_007f4d84 <= DAT_007f4d78) {
            puVar2 = st::pointer_boundary_cast<undefined4 *>(st::fn_006ACF50(PTR_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4));
            if (puVar2 == nullptr) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            PTR_007f4d6c = puVar2;
          }
          pvVar3 = st::fn_006AAC70(0x20);
          if (pvVar3 == nullptr) {
            return 0;
          }
          PTR_007f4d6c[DAT_007f4d78 * 3 + 2] = st::machine_word_boundary_cast<undefined4>(pvVar3);
          /* ST_CALLSITE[00427D4A]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          iVar8 = st::fn_00405010(this,(int)pvVar3,0,DAT_007f4d7c + local_14,DAT_007f4d80 + iVar5,
                               CASE_0,CASE_1);
          /* ST_CALLSITE[00427D6F]: CALL 0x00405010; direct=00405010 sub_004248D0 */
          iVar8 = st::fn_00405010(this,(int)pvVar3,iVar8,DAT_007f4d7c + -1 + iVar9,DAT_007f4d80 + iVar5
                               ,CASE_3,CASE_2);
          PTR_007f4d6c[DAT_007f4d78 * 3 + 1] = iVar8;
          if ((bVar6 & 0x80) == 0) {
            PTR_007f4d6c[DAT_007f4d78 * 3] = 0;
          }
          else {
            PTR_007f4d6c[DAT_007f4d78 * 3] = 1;
          }
          DAT_007f4d78 = DAT_007f4d78 + 1;
          if (iVar9 <= param_1_after_write) {
            iVar8 = iVar9 + 1;
            bVar6 = *(byte *)(DAT_007f4d7c + iVar9 + iVar7);
            local_14 = iVar9;
            if (iVar8 <= param_1_after_write) {
              do {
                if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
                iVar8 = iVar8 + 1;
              } while (iVar8 <= param_1_after_write);
            }
            goto LAB_00427cca;
          }
        }
      }
      pRVar4 = pRVar4 + 1;
      iVar7 = iVar7 + *(int *)&this->field_0x37c;
      param_1_after_write = iVar5 + 1;
    } while (iVar5 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      /* ST_CALLSITE[00427E5C]: CALL 0x00401e06; direct=00401E06 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::sub_00427090 */
      st::fn_00401E06(this,local_8,iVar5,param_3);
    }
  }
  return 0;
}

