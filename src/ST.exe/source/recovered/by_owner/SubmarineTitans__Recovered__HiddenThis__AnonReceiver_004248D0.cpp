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
  RuntimeRecord_007F4D74_0010 *pRVar9;
  int iVar10;
  int local_c;

  iVar10 = param_2;
  if (DAT_007f4d84 <= DAT_007f4d78) {
    pvVar2 = st::fn_006ACF50(st::pointer_boundary_cast<void *>(DAT_007f4d6c),(DAT_007f4d84 * 3 + 0x1e) * 4);
    if (pvVar2 == nullptr) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    DAT_007f4d6c = st::machine_word_boundary_cast<undefined4>(pvVar2);
  }
  pvVar2 = st::fn_006AAC70((param_1 * 0xfffffff + 2 + param_2) * 0x10);
  if (pvVar2 == nullptr) {
    return 0;
  }
  *(void **)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 8) = pvVar2;
  *(undefined4 *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) = 0;
  if (param_3 == 0) {
    iVar3 = param_1 * 0x10;
    *(uint *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) =
         (uint)(*(byte *)((g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    iVar4 = st::fn_00405010(this,(int)pvVar2,0,
                         st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c),
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = g_runtimeRecords_007F4D74[param_1].field_0000;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0000;
      if (iVar1 < iVar7) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar8,CASE_0
                             ,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0000 + DAT_007f4d7c,
         iVar7 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0000 + iVar3) + DAT_007f4d7c)) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0000;
      iVar3 = iVar3 + 0x10;
    }
    local_c = param_2 * 0x10;
    local_EAX_542 =
         st::fn_00405010(this,(int)pvVar2,iVar4,
                      st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0000 + DAT_007f4d7c),
                      DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    param_3 = st::fn_00405010(this,(int)pvVar2,local_EAX_542,
                           st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_000C + DAT_007f4d7c),
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    pRVar9 = g_runtimeRecords_007F4D74;
    if (param_1 < param_2) {
      do {
        iVar7 = STObjectAtByteOffset(pRVar9, local_c).field_000C;
        if ((iVar7 < *(int *)((int)pRVar9 + local_c + -4)) && (param_2 != iVar10)) {
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar7 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          pRVar9 = g_runtimeRecords_007F4D74;
        }
        iVar7 = STObjectAtByteOffset(pRVar9, local_c).field_000C;
        if (*(int *)((int)pRVar9 + local_c + -4) < iVar7) {
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar7 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          pRVar9 = g_runtimeRecords_007F4D74;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar10 = pRVar9[param_1].field_000C;
      if (pRVar9[param_1 + 1].field_000C < iVar10) {
LAB_004278f1:
        param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,DAT_007f4d80 + param_1
                               ,CASE_3,~CASE_0);
        pRVar9 = g_runtimeRecords_007F4D74;
      }
    }
  }
  else {
    if (param_3 == -1) {
      iVar3 = param_1 * 0x10;
      *(uint *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) =
           (uint)(*(byte *)((g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c) *
                            *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                           param_1) >> 7);
      iVar4 = st::fn_00405010(this,(int)pvVar2,0,
                           st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_1].field_0000 + DAT_007f4d7c),
                           DAT_007f4d80 + param_1,CASE_0,~CASE_0);
      iVar7 = g_runtimeRecords_007F4D74[param_1].field_0000;
      for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
        iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0000;
        if (iVar1 < iVar7) {
          iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar8,
                               CASE_0,~CASE_0);
        }
        if ((iVar8 < param_2) &&
           (iVar7 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0000 + DAT_007f4d7c,
           iVar7 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0000 + iVar3) + DAT_007f4d7c))
        {
          iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
        }
        iVar7 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0000;
        iVar3 = iVar3 + 0x10;
      }
      local_c = param_2 * 0x10;
      local_EAX_1193 =
           st::fn_00405010(this,(int)pvVar2,iVar4,
                        st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0000 + DAT_007f4d7c),
                        DAT_007f4d80 + param_2,CASE_1,~CASE_0);
      param_3 = st::fn_00405010(this,(int)pvVar2,local_EAX_1193,
                             st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0004 + DAT_007f4d7c),
                             DAT_007f4d80 + param_2,CASE_3,~CASE_0);
      pRVar9 = g_runtimeRecords_007F4D74;
      if (param_1 < param_2) {
        do {
          iVar7 = STObjectAtByteOffset(pRVar9, local_c).field_0004;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar7 < *(int *)(local_c + -0xc + (int)pRVar9)) && (param_2 != iVar10)) {
            param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar7 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_3,~CASE_0);
            pRVar9 = g_runtimeRecords_007F4D74;
          }
          iVar7 = STObjectAtByteOffset(pRVar9, local_c).field_0004;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(local_c + -0xc + (int)pRVar9) < iVar7) {
            param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar7 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_2,~CASE_0);
            pRVar9 = g_runtimeRecords_007F4D74;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + -1;
          local_c = local_c + -0x10;
        } while (param_1 < param_2);
        if (pRVar9[param_1 + 1].field_0004 < pRVar9[param_1].field_0004) {
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,st::machine_word_boundary_cast<int>(pRVar9[param_1].field_0004 + DAT_007f4d7c),
                                 DAT_007f4d80 + param_1,CASE_3,~CASE_0);
          pRVar9 = g_runtimeRecords_007F4D74;
        }
      }
      iVar10 = pRVar9[param_1].field_0004;
      goto LAB_00427930;
    }
    iVar3 = param_1 * 0x10;
    *(uint *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) =
         (uint)(*(byte *)((g_runtimeRecords_007F4D74[param_1].field_0008 + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    iVar4 = st::fn_00405010(this,(int)pvVar2,0,
                         st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_1].field_0008 + DAT_007f4d7c),
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = g_runtimeRecords_007F4D74[param_1].field_0008;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      iVar1 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0008;
      if (iVar1 < iVar7) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar8,CASE_0
                             ,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0008 + DAT_007f4d7c,
         iVar7 < *(int *)((int)&g_runtimeRecords_007F4D74[1].field_0008 + iVar3) + DAT_007f4d7c)) {
        iVar4 = st::fn_00405010(this,(int)pvVar2,iVar4,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = STObjectAtByteOffset(g_runtimeRecords_007F4D74, iVar3).field_0008;
      iVar3 = iVar3 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar6 = st::fn_00405010(this,(int)pvVar2,iVar4,
                         st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_0008 + DAT_007f4d7c),
                         DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    param_3 = st::fn_00405010(this,(int)pvVar2,iVar6,
                           st::machine_word_boundary_cast<int>(g_runtimeRecords_007F4D74[param_2].field_000C + DAT_007f4d7c),
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    pRVar9 = g_runtimeRecords_007F4D74;
    if (param_1 < param_2) {
      do {
        iVar7 = STObjectAtByteOffset(pRVar9, local_c).field_000C;
        if ((iVar7 < *(int *)(local_c + -4 + (int)pRVar9)) && (param_2 != iVar10)) {
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar7 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          pRVar9 = g_runtimeRecords_007F4D74;
        }
        iVar7 = STObjectAtByteOffset(pRVar9, local_c).field_000C;
        if (*(int *)(local_c + -4 + (int)pRVar9) < iVar7) {
          param_3 = st::fn_00405010(this,(int)pvVar2,param_3,iVar7 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          pRVar9 = g_runtimeRecords_007F4D74;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar10 = pRVar9[param_1].field_000C;
      if (pRVar9[param_1 + 1].field_000C < iVar10) goto LAB_004278f1;
    }
  }
  iVar10 = pRVar9[param_1].field_000C;
LAB_00427930:
  iVar5 = st::fn_00405010(this,(int)pvVar2,param_3,iVar10 + DAT_007f4d7c,DAT_007f4d80 + param_1,CASE_2,
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
  RuntimeRecord_007F4D74_0010 *pRVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_8;

  pRVar3 = g_runtimeRecords_007F4D74 + param_1;
  iVar6 = (DAT_007f4d80 + param_1) * *(int *)&this->field_0x37c + *(int *)&this->field_0x38c;
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar4 = param_1;
      local_14 = pRVar3->field_0000;
      param_1 = pRVar3->field_000C;
      if (param_3 == -1) {
        param_1 = pRVar3->field_0004;
      }
      else if (param_3 == 1) {
        local_14 = pRVar3->field_0008;
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
            pvVar2 = st::fn_006ACF50(st::pointer_boundary_cast<void *>(DAT_007f4d6c),(DAT_007f4d84 * 3 + 0x1e) * 4);
            if (pvVar2 == nullptr) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            DAT_007f4d6c = st::machine_word_boundary_cast<undefined4>(pvVar2);
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
      pRVar3 = pRVar3 + 1;
      iVar6 = iVar6 + *(int *)&this->field_0x37c;
      param_1 = iVar4 + 1;
    } while (iVar4 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      st::fn_00401E06(this,local_8,iVar4,param_3);
    }
  }
  return 0;
}

