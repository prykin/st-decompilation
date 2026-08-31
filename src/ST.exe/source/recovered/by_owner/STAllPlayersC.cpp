#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STAllPlayersC.cpp

// 0042A940 STAllPlayersC::STAllPlayersC
#line 4 "decomp/ST.exe/functions/0042A940/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079059C (store 0042A955)
   Evidence: final_vptr=0079059C; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STAllPlayersC * __thiscall st::fn_0042A940(STAllPlayersC *this)

{
  PackedRecord_A62x8 *pPVar1;
  int iVar2;

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079059C;
  pPVar1 = g_packedRecords_A62x8;
  for (iVar2 = 0x14d5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pPVar1 = 0;
    pPVar1 = (PackedRecord_A62x8 *)((int)&pPVar1->field1_0x1 + 3);
  }
  pPVar1 = g_packedRecords_A62x8;
  do {
    pPVar1->field0_0x0 = 0;
    pPVar1 = pPVar1 + 1;
  } while ((int)pPVar1 < 0x7fa130);
  return this;
}

// 004B76D0 STAllPlayersC::sub_004B76D0
#line 4 "decomp/ST.exe/functions/004B76D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044EE30 -> 004B76D0 @ 0044F3D5 | 0044EE30 -> 004B76D0 @ 0044F6F3 | 004B9FA0 ->
   004B76D0 @ 004BA37A | 004CCC10 -> 004B76D0 @ 004CD1D2 | 004D11D0 -> 004B76D0 @ 004D2293 |
   004DC760 -> 004B76D0 @ 004DC975 | 004DEC10 -> 004B76D0 @ 004DEDE1 | 004DF3B0 -> 004B76D0 @
   004DF5C5
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/uint
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=004B76D8 MOV
   EDI,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=8; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=7;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall st::fn_004B76D0(STAllPlayersC *this,uint param_1,int param_2)

{
  int iVar1;


  iVar1 = st::fn_00402897((char)param_1,param_2);

  st::fn_00403076(this,param_1,iVar1);
  return;
}

// 004B7710 STAllPlayersC::sub_004B7710
#line 4 "decomp/ST.exe/functions/004B7710/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044EE30 -> 004B7710 @ 00450E64 | 0044EE30 -> 004B7710 @ 0045AC44 | 004B9A40 ->
   004B7710 @ 004B9A8C | 004D2760 -> 004B7710 @ 004D2843 | 004D32C0 -> 004B7710 @ 004D3905 |
   004DC760 -> 004B7710 @ 004DC7FB | 004DC760 -> 004B7710 @ 004DC881 | 004DEC10 -> 004B7710 @
   004DED56 | 004DF3B0 -> 004B7710 @ 004DF44B | 004DF3B0 -> 004B7710 @ 004DF4D1
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/uint
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=004B7718 MOV
   EDI,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=10; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=7;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall st::fn_004B7710(STAllPlayersC *this,uint param_1,int param_2)

{
  int iVar1;


  iVar1 = st::fn_00402897((char)param_1,param_2);

  st::fn_004048DB(this,param_1,iVar1);
  return;
}

// 004B7750 STAllPlayersC::sub_004B7750
#line 4 "decomp/ST.exe/functions/004B7750/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B6E30 -> 004B7750 @ 004B6F30; unproven partial register write at 004B6F26 | 004B7750
   -> 004B7350 @ 004B7836 | 004B7750 -> 004B7520 @ 004B77F5

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; incoming_this_forward_calls=8;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall st::fn_004B7750(STAllPlayersC *this,uint param_1)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Global_sub_004B7350_param_2Enum GVar5;
  char cVar6;
  DArrayOf_STGameObjCPtr *array;
  DArrayTy *array_00;
  uint index;
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c;
  STAllPlayersC *local_8;

  cVar6 = (char)param_1;
  iVar2 = (int)cVar6;
  if (g_packedRecords_A62x8[iVar2].field1948_0x992 != nullptr) {
    (g_packedRecords_A62x8[iVar2].field1948_0x992)->count = 0;
    local_8 = this;

    iVar3 = st::fn_00403ADF(cVar6);

    iVar4 = st::fn_0040291E(cVar6);
    if (iVar4 < iVar3) {
      array = g_packedRecords_A62x8[iVar2].field3_0x9;
      iVar3 = 0;
      if ((array != nullptr) && (local_10 = 0, array->count != 0)) {
LAB_004b77c4:

        st::fn_006ACC70(reinterpret_cast<DArrayTy *>(array),local_10,&local_c);
        if ((local_c != nullptr) &&
           /* ST_CALLSITE[004B77DD]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
           ((iVar4 = STStructuralVirtualCall<undefined4>(local_c, 0x2C), iVar4 != 0x78 ||

            (iVar4 = st::fn_00402077(param_1,STField<Global_sub_004B7520_param_2Enum>(local_c,0x259)), iVar4 != 0)))) {
          /* ST_CALLSITE[004B7807]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          iVar4 = STStructuralVirtualCall<undefined4>(local_c, 0x2C);

          local_14 = st::fn_00402897(cVar6,iVar4);
          if (0 < local_14) {
            local_1c = local_c[6];
            /* ST_CALLSITE[004B782C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
            GVar5 = STStructuralVirtualCall<undefined4>(local_c, 0x2C);

            local_18 = st::fn_00404AC5(param_1,GVar5);
            array_00 = g_packedRecords_A62x8[iVar2].field1948_0x992;
            index = 0;
            if (array_00->count != 0) {
              do {

                st::fn_006ACC70(array_00,index,local_28);
                if (*(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_24 * 4) <
                    *(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_18 * 4)) {

                  st::fn_006B11D0
                            (&(g_packedRecords_A62x8[iVar2].field1948_0x992)->flags,index,reinterpret_cast<undefined4 *>(&local_1c));
                  iVar3 = iVar3 + local_14;

                  iVar4 = st::fn_0040291E(cVar6);
                  if (iVar4 < iVar3) goto LAB_004b78f0;
                  goto cf_continue_loop_004B78A7;
                }
                array_00 = g_packedRecords_A62x8[iVar2].field1948_0x992;
                index = index + 1;
              } while (index < array_00->count);
            }

            iVar4 = st::fn_0040291E(cVar6);
            if (local_14 + iVar3 <= iVar4) {

              st::fn_006AE1C0
                        (g_packedRecords_A62x8[iVar2].field1948_0x992,&local_1c);
              iVar3 = iVar3 + local_14;
            }
          }
        }
        goto cf_continue_loop_004B78A7;
      }
    }
  }
  return 0;
  while( true ) {

    st::fn_006ACC70(g_packedRecords_A62x8[iVar2].field1948_0x992,dVar1 - 1,local_28);
    iVar3 = iVar3 - local_20;

    st::fn_006B0C70(g_packedRecords_A62x8[iVar2].field1948_0x992,
                   st::machine_word_boundary_cast<uint>((g_packedRecords_A62x8[iVar2].field1948_0x992)->count - 1));

    iVar4 = st::fn_0040291E(cVar6);
    if (iVar3 <= iVar4) break;
LAB_004b78f0:
    dVar1 = (g_packedRecords_A62x8[iVar2].field1948_0x992)->count;
    if (dVar1 == 0) break;
  }
cf_continue_loop_004B78A7:
  array = g_packedRecords_A62x8[iVar2].field3_0x9;
  local_10 = local_10 + 1;
  if (array->count <= local_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

// 004B79C0 STAllPlayersC::sub_004B79C0
#line 4 "decomp/ST.exe/functions/004B79C0/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=8, ignored=0,
   unknown=0

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=8; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=7;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall st::fn_004B79C0(STAllPlayersC *this,char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  DArrayTy *array;
  uint index;
  int local_10 [3];


  iVar1 = st::fn_00403ADF(param_1);

  iVar2 = st::fn_0040291E(param_1);
  if (iVar1 <= iVar2) {
    return 1;
  }
  index = 0;
  array = g_packedRecords_A62x8[param_1].field1948_0x992;
  if (array->count != 0) {
    do {

      st::fn_006ACC70(array,index,local_10);
      if (local_10[0] == param_2) {
        return 1;
      }
      array = g_packedRecords_A62x8[param_1].field1948_0x992;
      index = index + 1;
    } while (index < array->count);
  }
  return 0;
}

// 004D7480 STAllPlayersC::sub_004D7480
#line 4 "decomp/ST.exe/functions/004D7480/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=11; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall
st::fn_004D7480
          (STAllPlayersC *this,char param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = param_3;
  local_8 = param_7;
  iVar1 = (int)param_1;
  local_c = param_6;
  local_10 = param_5;
  local_14 = param_4;

  st::fn_006AE1C0
            (reinterpret_cast<DArrayTy *>((&g_packedRecords_A62x8[iVar1].field_0x7ee + param_2 * 0x44)),&local_18);
  (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] + param_4;
  (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] + param_5;
  (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] + param_6;
  (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] + param_7;

  st::fn_004028F6(param_1);
  return 0;
}

// 004D7570 STAllPlayersC::sub_004D7570
#line 4 "decomp/ST.exe/functions/004D7570/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004749C0 -> 004D7570 @ 0047525A; /STBoatC+0x18 | 004C7460 -> 004D7570 @ 004C74A4;
   /TLOBaseTy+0x18

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=4;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall
st::fn_004D7570(STAllPlayersC *this,char param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;

  iVar2 = (int)param_1;
  (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
  do {
    uVar1 = st::machine_word_boundary_cast<uint>((&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11]);
    if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1)
    goto cf_common_exit_004D766D;
    piVar3 = reinterpret_cast<int *>(((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                    (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]));
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
    if (piVar3 == nullptr) goto cf_common_exit_004D766D;
  } while ((int *)*piVar3 != param_3);
  (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] - piVar3[1];
  (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - piVar3[2];
  (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] - piVar3[3];
  (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] - piVar3[4];
  if ((&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] = 0;
  }

  st::fn_006B0C70(reinterpret_cast<DArrayTy *>((&g_packedRecords_A62x8[iVar2].field_0x7ee + param_2 * 0x44)),
                 st::machine_word_boundary_cast<uint>((&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] - 1));
cf_common_exit_004D766D:

  st::fn_004028F6(param_1);
  return 0;
}

// 004D76E0 STAllPlayersC::sub_004D76E0
#line 4 "decomp/ST.exe/functions/004D76E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C7460 -> 004D76E0 @ 004C7688; /TLOBaseTy+0x18

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=6; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=6;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall
st::fn_004D76E0
          (STAllPlayersC *this,char param_1,int param_2,int *param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;

  iVar2 = (int)param_1;
  (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
  while (uVar1 = st::machine_word_boundary_cast<uint>((&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11]),
        uVar1 < (&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11]) {
    piVar3 = reinterpret_cast<int *>(((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                    (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]));
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
    if (piVar3 == nullptr) break;
    if ((int *)*piVar3 == param_3) {
      (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] - piVar3[1];
      (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - piVar3[2];
      (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] - piVar3[3];
      (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] - piVar3[4];
      if ((&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] = 0;
      }
      piVar3[2] = param_5;
      piVar3[3] = param_6;
      piVar3[1] = param_4;
      piVar3[4] = param_7;
      (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] + param_4;
      (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] + piVar3[2];
      (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] + piVar3[3];
      (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] + piVar3[4];

      st::fn_004028F6(param_1);
      return 0;
    }
  }
  /* ST_CALLSITE[004D7854]: CALL 0x00405556; direct=00405556 STAllPlayersC::sub_004D7480 */
  st::fn_00405556(this,param_1,param_2,st::machine_word_boundary_cast<undefined4>(param_3),param_4,param_5,param_6,param_7);
  return 0;
}

// 004D8B70 STAllPlayersC::sub_004D8B70
#line 4 "decomp/ST.exe/functions/004D8B70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=45; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=29;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall st::fn_004D8B70(STAllPlayersC *this,char param_1)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int iVar2;
  int uVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;

  uVar6 = (uint)param_1;
  if (uVar6 == 0xff) {
    return 0;
  }
  if ((uVar6 == DAT_0080874d) && (g_money_008016D4 != nullptr)) {
    if (g_packedRecords_A62x8[uVar6].field0_0x0 == '\x03') {

      uVar2 = st::fn_004036A7(uVar6);

      iVar3 = st::fn_00405D80(uVar6);
      iVar2 = (uVar2 * 0x14) / iVar3;
      if (0x14 < iVar2) {
        iVar2 = 0x14;
      }
      bVar1 = (byte)iVar2;
      uVar7 = g_packedRecords_A62x8[uVar6].field16_0x23;
      iVar2 = 0;
      bVar9 = 1;
      uVar8 = g_packedRecords_A62x8[uVar6].field1951_0x99e;
      /* ST_CALLSITE[004D8C0C]: CALL 0x004036a7; direct=004036A7 thunk_FUN_004e41c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/MoneyTy; source view only; no Ghidra override */
      uVar5 = st::fn_004036A7(uVar6);
      /* ST_CALLSITE[004D8C18]: CALL 0x00401e83; direct=00401E83 MoneyTy::sub_0052BC30 */
      st::fn_00401E83(g_money_008016D4,uVar5,uVar7,uVar8,bVar1,bVar9,iVar2);
      return 0;
    }
    iVar2 = g_packedRecords_A62x8[uVar6].field1940_0x972;
    iVar4 = iVar2 - g_packedRecords_A62x8[uVar6].field1941_0x976;
    if (iVar4 < 0) {
      /* ST_CALLSITE[004D8C55]: CALL 0x00401e83; direct=00401E83 MoneyTy::sub_0052BC30 */
      st::fn_00401E83
                (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
                 g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27
                 ,0xd,0,0);
      return 0;
    }
    if (((iVar2 != 0) && (iVar4 != 0)) && (iVar4 = (iVar4 * 0xd) / iVar2, 0xd < iVar4)) {
      iVar4 = 0xd;
    }
    /* ST_CALLSITE[004D8C9A]: CALL 0x00401e83; direct=00401E83 MoneyTy::sub_0052BC30 */
    st::fn_00401E83
              (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
               g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27,
               (byte)iVar4,1,0);
  }
  return 0;
}

// 004DA390 STAllPlayersC::sub_004DA390
#line 4 "decomp/ST.exe/functions/004DA390/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=46; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_004DA390(STAllPlayersC *this,uint param_1,byte *param_2,int param_3)

{
  uint32_t _local_10;

  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  int uVar5;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int uVar10;
  int iVar6;
  byte *puVar10;
  int iVar11;
  byte recordIndex;
  uint uVar12;
  byte *puVar13;
  bool bVar14;
  uint local_280 [78];
  uint local_148 [3];
  ushort local_13c;
  int local_138;
  int local_134;
  uint local_130;
  ushort local_12c;
  byte local_10;
  undefined3 uStack_f;
  STAllPlayersC *local_c;
  byte *local_8;
  char bVar1;

  pbVar3 = param_2;
  param_2[1] = 0xff;
  param_2[2] = 0xff;
  param_2[3] = 0xff;
  param_2[4] = 0xff;
  local_8 = &g_bulkInitializedRecords_008087C7[0].field_0022;
  param_2[5] = 0xff;
  param_2[6] = 0xff;
  param_2[7] = 0xff;
  param_2[8] = 0xff;
  *param_2 = 0;
  local_c = this;
  do {
    pbVar8 = local_8;
    recordIndex = (byte)param_1;
    if (*local_8 != 0xff) {
      /* ST_CALLSITE[004DA3C6]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar5 = st::fn_004049B7(*local_8);
      uVar5 = (int)(byte)uVar5;
      if (uVar5 == 1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (byte *)0x3d;
      }
      else if (uVar5 == 2) {
        param_2 = (byte *)0x8d;
      }
      else if (uVar5 == 3) {
        param_2 = (byte *)0x49;
      }
      else {
        param_2 = nullptr;
      }
      bVar4 = *pbVar8;
      if (((bVar4 != 0xff) && (bVar4 != param_1)) && (pbVar8[-1] != 0)) {
        if (param_3 != 0) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_10 = CONCAT31(uStack_f,bVar4);
          if (DAT_00808a8f == '\0') {
            if (bVar4 == recordIndex) {
LAB_004da4d3:
              iVar7 = 0;
            }
            else {
              uVar12 = param_1 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar4][uVar12];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar12][bVar4] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar12][bVar4] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar12][bVar4] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar12][bVar4] != 1)) goto LAB_004da4d3;
                iVar7 = 2;
              }
            }
            bVar14 = iVar7 < 0;
          }
          else {
            bVar14 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar4].field_0023;
          }
          if ((bVar14) &&
             ((g_packedRecords_A62x8[param_1].field1982_0xa0e != 3 ||

              (iVar7 = st::fn_0040186B((uint)bVar4,(int)param_2),
              (uint)((&DAT_00798f74)[iVar7] + g_packedRecords_A62x8[param_1].field1985_0xa1a) <=
              g_playSystem_00802A38->field_00E4)))) goto LAB_004da71f;
        }
        bVar1 = *local_8;
        pbVar8 = (byte *)(uint)(byte)bVar1;

        iVar7 = st::fn_004016E0(bVar1);
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 9) = iVar7;

        iVar7 = st::fn_00403954(bVar1);
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0xd) = iVar7;
        /* ST_CALLSITE[004DA577]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar4 = st::fn_004049B7(bVar1);
        if (bVar4 == 3) {

          iVar7 = st::fn_00401E6A(pbVar8);
        }
        else {

          iVar7 = st::fn_00402284(bVar1);
        }
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x11) = iVar7;
        /* ST_CALLSITE[004DA5B5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar4 = st::fn_004049B7(bVar1);
        if (bVar4 == 3) {

          uVar10 = st::fn_004036A7(param_1);

          iVar6 = st::fn_00405D80(param_1);
          iVar7 = (uVar10 * 0x14) / iVar6;
          if (0x14 < iVar7) {
            iVar7 = 0x14;
          }
        }
        else {
          iVar11 = g_packedRecords_A62x8[(int)pbVar8].field1940_0x972;
          iVar9 = iVar11 - g_packedRecords_A62x8[(int)pbVar8].field1941_0x976;
          iVar7 = 0;
          if (iVar9 != 0) {
            if (iVar11 == 0) {
              iVar7 = -0xd;
            }
            else {
              iVar7 = (iVar9 * 0xd) / iVar11;
            }
          }
        }
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x15) = iVar7;

        puVar10 = reinterpret_cast<byte *>((st::fn_004044E4(local_280,bVar1)));
        puVar13 = reinterpret_cast<byte *>((local_148));
        memmove(puVar13, puVar10, 0x138); /* compiler REP MOVS byte copy */
        sVar5 = (short)local_148[1] + (short)local_148[0];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x89) = sVar5 + (short)local_148[2];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8b) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8d) = (short)local_148[2];
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8f) = local_13c;
        sVar5 = (short)local_134 + (short)local_138;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x91) = sVar5 + (short)local_130;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x93) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x95) = (short)local_130;
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x97) = local_12c;
        pbVar3[*pbVar3 + 1] = bVar1;
        *pbVar3 = *pbVar3 + 1;
      }
    }
LAB_004da71f:
    local_8 = local_8 + 0x51;
    if (0x808a70 < (int)local_8) {

      iVar7 = st::fn_004016E0(recordIndex);
      *(int *)(pbVar3 + 0x79) = iVar7;

      iVar7 = st::fn_00403954(recordIndex);
      *(int *)(pbVar3 + 0x7d) = iVar7;
      /* ST_CALLSITE[004DA762]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar4 = st::fn_004049B7(recordIndex);
      if (bVar4 == 3) {

        iVar7 = st::fn_00401E6A((byte *)param_1);
      }
      else {

        iVar7 = st::fn_00402284(recordIndex);
      }
      *(int *)(pbVar3 + 0x81) = iVar7;
      iVar7 = g_packedRecords_A62x8[param_1].field1940_0x972;
      iVar9 = iVar7 - g_packedRecords_A62x8[param_1].field1941_0x976;
      iVar11 = 0;
      if (iVar9 != 0) {
        if (iVar7 == 0) {
          iVar11 = -0xd;
        }
        else {
          iVar11 = (iVar9 * 0xd) / iVar7;
        }
      }
      *(int *)(pbVar3 + 0x85) = iVar11;

      puVar10 = reinterpret_cast<byte *>((st::fn_004044E4(local_280,recordIndex)));
      puVar13 = reinterpret_cast<byte *>((local_148));
      memmove(puVar13, puVar10, 0x138); /* compiler REP MOVS byte copy */
      sVar5 = (short)local_148[1] + (short)local_148[0];
      *(short *)(pbVar3 + 0xfb) = sVar5;
      *(short *)(pbVar3 + 0xfd) = (short)local_148[2];
      *(short *)(pbVar3 + 0xf9) = sVar5 + (short)local_148[2];
      *(undefined2 *)(pbVar3 + 0xff) = local_13c;
      sVar5 = (short)(local_134 + local_138);
      *(short *)(pbVar3 + 0x103) = sVar5;
      *(short *)(pbVar3 + 0x105) = (short)local_130;
      *(short *)(pbVar3 + 0x101) = sVar5 + (short)local_130;
      *(undefined2 *)(pbVar3 + 0x107) = local_12c;
      pbVar3[8] = recordIndex;
      return 0;
    }
  } while( true );
}

// 004DB160 STAllPlayersC::sub_004DB160
#line 4 "decomp/ST.exe/functions/004DB160/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004DB160.
   Evidence: incoming_receiver_captures=1; receiver_accesses=8; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[24];
   expected_stack=24; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=39; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_004DB160
          (STAllPlayersC *this,int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5
          ,int *param_6)

{
  STAllPlayersC *pSVar1;
  short sVar2;
  int iVar4;
  int local_EAX_191;
  int uVar4;
  int iVar5;
  STWorldObject *this_00;
  int local_EAX_744;
  int local_EAX_990;
  int local_EAX_1169;
  uint uVar6;
  int iVar10;
  int iVar3;
  short sVar7;
  int *piVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  STWorldObjectVTable *pSVar13;
  int local_60 [21];
  STAllPlayersC *local_c;
  int local_8;

  *param_6 = -1;
  sVar2 = (short)*param_3;
  local_c = this;
  if ((((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (sVar9 = (short)*param_4, -1 < sVar9)) &&
       ((sVar9 < g_worldGrid.sizeY && (sVar7 = (short)*param_5, -1 < sVar7)))) &&
      ((sVar7 < g_worldGrid.sizeZ &&
       ((this_00 = STGridAt3D(g_worldGrid, sVar2, sVar9, sVar7).objects[0], this_00 != nullptr &&
        (this_00[1].vtable != (STWorldObjectVTable *)param_1)))))) &&
     /* ST_CALLSITE[004DB201]: CALL dword ptr [EAX + 0x2c] */
     ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
      /* ST_CALLSITE[004DB20D]: CALL dword ptr [EDX + 0x2c] */
      (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))) {
    /* ST_CALLSITE[004DB21F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_191 = st::fn_004049B7(*(char *)&this_00[1].vtable);
    local_EAX_191 = (int)(byte)local_EAX_191;
    if (local_EAX_191 == 1) {

      iVar4 = st::fn_0040186B((int)this_00[1].vtable,0x42);
    }
    else {
      if (local_EAX_191 == 2) {
        pSVar13 = this_00[1].vtable;
        iVar4 = 0x43;
      }
      else {
        if (local_EAX_191 != 3) goto LAB_004db257;
        pSVar13 = this_00[1].vtable;
        iVar4 = 99;
      }

      iVar4 = st::fn_0040186B((int)pSVar13,iVar4);
    }
    if (iVar4 != 0) {
      iVar4 = *param_5;
      iVar12 = *param_4;
      iVar11 = *param_3;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_004DB690:
      param_1 = iVar11;
      *param_6 = (int)this_00[1].vtable;
      if (param_1 < 0) {
        return;
      }
      if (iVar12 < 0) {
        return;
      }
      if (iVar4 < 0) {
        return;
      }
      iVar4 = 0;
      piVar8 = local_60;
      do {
        *piVar8 = iVar4;
        pSVar1 = local_c;
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar4 < 0x15);
      iVar4 = 0x15;
      do {
        uVar6 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
        pSVar1->field_001C = uVar6;
        uVar6 = (uVar6 >> 0x10) % 0x15;
        do {
          uVar10 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
          pSVar1->field_001C = uVar10;
          uVar10 = (uVar10 >> 0x10) % 0x15;
        } while (uVar10 == uVar6);
        iVar11 = local_60[uVar6];
        iVar4 = iVar4 + -1;
        local_60[uVar6] = local_60[uVar10];
        local_60[uVar10] = iVar11;
      } while (iVar4 != 0);
      iVar4 = 1;
      uVar6 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar6;
      uVar6 = (uVar6 >> 0x10) % 0xd2;
      iVar11 = 0;
      piVar8 = local_60;
      do {
        uVar6 = uVar6 - *piVar8;
        if ((int)uVar6 < 1) {
          iVar4 = local_60[iVar11];
          break;
        }
        iVar11 = iVar11 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar11 < 0x15);
      uVar6 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar6;
      uVar10 = (uVar6 >> 0x10) % 0x168;

      uVar6 = st::fn_006AFF50(uVar10);

      iVar10 = st::fn_006B1280(uVar6 * iVar4);
      iVar11 = iVar10 + param_1;

      uVar6 = st::fn_006AFF5B(uVar10);

      iVar3 = st::fn_006B1280(uVar6 * iVar4);
      iVar12 = iVar3 + iVar12;
      if (iVar11 < 0) {
        return;
      }
      if (g_worldGrid.sizeX <= iVar11) {
        return;
      }
      if (iVar12 < 0) {
        return;
      }
      if (g_worldGrid.sizeY <= iVar12) {
        return;
      }
      *param_3 = iVar11;
      *param_4 = iVar12;
      return;
    }
  }
LAB_004db257:
  uint param_5_after_write = 0x1; /* compiler stack-slot lifetime split */
  sVar2 = g_worldGrid.sizeZ;
  do {
    local_8 = 0;
    if (sVar2 != 1 && -1 < sVar2 + -1) {
      do {
        iVar11 = *param_3 - (int)param_5_after_write;
        if (iVar11 <= *param_3 + (int)param_5_after_write) {
          do {
            if ((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) {
              iVar12 = *param_4 - (int)param_5_after_write;
              sVar2 = (short)iVar11;
              if ((((-1 < iVar12) &&
                   (((iVar12 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeX))))
                  && (((sVar9 = (short)iVar12, -1 < sVar9 && (sVar9 < g_worldGrid.sizeY)) &&
                      (sVar7 = (short)local_8, -1 < sVar7)))) &&
                 (((sVar7 < g_worldGrid.sizeZ &&
                   (this_00 = STGridAt3D(g_worldGrid, sVar2, sVar9, sVar7).objects[0],
                   this_00 != nullptr)) &&
                  ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                   /* ST_CALLSITE[004DB343]: CALL dword ptr [EDX + 0x2c] */
                   ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                    /* ST_CALLSITE[004DB34F]: CALL dword ptr [EAX + 0x2c] */
                    (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))))))) {
                /* ST_CALLSITE[004DB365]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                uVar4 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                uVar4 = (int)(byte)uVar4;
                if (uVar4 == 1) {

                  iVar5 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db3e4;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = st::fn_0040186B((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
LAB_004db3e4:
              iVar12 = *param_4 + (int)param_5_after_write;
              if ((((-1 < iVar12) && (iVar12 < g_worldGrid.sizeY)) &&
                  (this_00 = STPointerBoundaryCast<STWorldObject *>(st::fn_00401442(sVar2,(short)iVar12,(short)local_8,0)),
                  this_00 != nullptr)) &&
                 ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                  /* ST_CALLSITE[004DB42A]: CALL dword ptr [EAX + 0x2c] */
                  ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                   /* ST_CALLSITE[004DB436]: CALL dword ptr [EDX + 0x2c] */
                   (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))))) {
                /* ST_CALLSITE[004DB448]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                local_EAX_744 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                local_EAX_744 = (int)(byte)local_EAX_744;
                if (local_EAX_744 == 1) {

                  iVar5 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (local_EAX_744 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (local_EAX_744 != 3) goto LAB_004db497;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = st::fn_0040186B((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db497:
            iVar11 = iVar11 + 1;
          } while (iVar11 <= *param_3 + (int)param_5_after_write);
        }
        iVar12 = (*param_4 - (int)param_5_after_write) + 1;
        if (iVar12 <= *param_4 + -1 + (int)param_5_after_write) {
          do {
            if ((-1 < iVar12) && (iVar12 < g_worldGrid.sizeY)) {
              iVar11 = *param_3 - (int)param_5_after_write;
              if ((-1 < iVar11) &&
                 ((((iVar11 < g_worldGrid.sizeX &&
                    (this_00 = STPointerBoundaryCast<STWorldObject *>(st::fn_00401442((short)iVar11,(short)iVar12,(short)local_8,0)),
                    this_00 != nullptr)) &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)) &&
                  /* ST_CALLSITE[004DB520]: CALL dword ptr [EDX + 0x2c] */
                  ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                   /* ST_CALLSITE[004DB52C]: CALL dword ptr [EAX + 0x2c] */
                   (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))))) {
                /* ST_CALLSITE[004DB53E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                local_EAX_990 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                local_EAX_990 = (int)(byte)local_EAX_990;
                if (local_EAX_990 == 1) {

                  iVar5 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (local_EAX_990 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (local_EAX_990 != 3) goto LAB_004db58d;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = st::fn_0040186B((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
LAB_004db58d:
              iVar11 = *param_3 + (int)param_5_after_write;
              if ((((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) &&
                  ((this_00 = STPointerBoundaryCast<STWorldObject *>(st::fn_00401442((short)iVar11,(short)iVar12,(short)local_8,0)),
                   this_00 != nullptr &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)))) &&
                 /* ST_CALLSITE[004DB5D3]: CALL dword ptr [EAX + 0x2c] */
                 ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                  /* ST_CALLSITE[004DB5DF]: CALL dword ptr [EDX + 0x2c] */
                  (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))) {
                /* ST_CALLSITE[004DB5F1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                local_EAX_1169 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                local_EAX_1169 = (int)(byte)local_EAX_1169;
                if (local_EAX_1169 == 1) {

                  iVar5 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (local_EAX_1169 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (local_EAX_1169 != 3) goto LAB_004db638;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = st::fn_0040186B((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db638:
            iVar12 = iVar12 + 1;
          } while (iVar12 <= *param_4 + -1 + (int)param_5_after_write);
        }
        local_8 = local_8 + 1;
        sVar2 = g_worldGrid.sizeZ;
      } while (local_8 < g_worldGrid.sizeZ + -1);
    }
    param_5_after_write = ((int)param_5_after_write + 1);
    if (7 < (int)param_5_after_write) {
      return;
    }
  } while( true );
}

// 004E4270 STAllPlayersC::sub_004E4270
#line 4 "decomp/ST.exe/functions/004E4270/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=5;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=3;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall st::fn_004E4270(STAllPlayersC *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;


  iVar1 = st::fn_00405D80(param_1);

  iVar2 = st::fn_004036A7(param_1);
  if (iVar1 < iVar2 + param_2) {

    iVar2 = st::fn_004036A7(param_1);
    param_2 = iVar1 - iVar2;
  }
  if (0 < param_2) {

    st::fn_00403332(param_1,param_2);
  }

  st::fn_004036A7(param_1);
  return;
}

// 004E5CC0 STAllPlayersC::sub_004E5CC0
#line 4 "decomp/ST.exe/functions/004E5CC0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=3;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall st::fn_004E5CC0(STAllPlayersC *this,int param_1,uint param_2,int param_3)

{
  bool bVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar2;
  int iVar3;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) &&
     (((int)param_2 < 0x9b && (-1 < param_3)))) {
    bVar1 = st::fn_00403396((byte *)param_1,param_2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar3 = CONCAT31(extraout_var,bVar1);
    if (iVar3 != 0) {
      iVar2 = st::fn_0040186B(param_1,param_2);
      if (param_3 != iVar2 + 1) {
        iVar3 = 0;
      }
    }
    return iVar3;
  }
  return 0;
}

// 004E6310 STAllPlayersC::sub_004E6310
#line 4 "decomp/ST.exe/functions/004E6310/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E2C30 -> 004E6310 @ 004E2CDD; /TLOBaseTy+0x24 | 004E7390 -> 004E6310 @ 004E755C;
   FUN_004e7390 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall
st::fn_004E6310(STAllPlayersC *this,byte *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar11;
  uint *puVar6;
  DArrayOf_STGameObjCPtr *pDVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  int local_10;
  RecoveredRecordView_004DDCC0_A8DE46ED *local_c;
  RecoveredRecordView_00494AE0_424326F5 *local_8;

  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar12 = (int)param_1 * 0xa62;
    *(uint *)(iVar12 + 0x7f5147 + param_2 * 4) = param_3;
    pbVar2 = (byte *)(iVar12 + 0x7f511f + (st::storage_bit_cast<int>(static_cast<uint32_t>(param_2 ^ 7)) >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << ((param_2 ^ 7) & 7));
    if (*(int *)(iVar12 + 0x7f5147 + param_2 * 4) != 0) {
      iVar3 = (byte)g_packedRecords_A62x8[(int)param_1].field0_0x0 - 1;
      piVar4 = reinterpret_cast<int *>((&PTR_DAT_007c0dc8)[iVar3]);
      if (*piVar4 != 0) {
        iVar9 = 0;
        local_10 = 5;
LAB_004e63ab:
        if ((*(int *)(iVar12 + 0x7f5147 + *(uint *)(iVar9 + (int)piVar4) * 4) ==
             *(byte *)(iVar9 + 4 + (int)piVar4) - 1) &&
           (iVar8 = 0, *(int *)(local_10 + (int)piVar4) != 0)) {
          puVar5 = (uint *)(iVar9 + 5 + (int)piVar4);
          puVar6 = puVar5;
          do {
            if (3 < iVar8) break;
            if ((*puVar6 == param_2) && ((byte)puVar6[1] == param_3)) {
              iVar8 = 0;
              goto LAB_004e63fe;
            }
            piVar1 = (int *)((int)puVar6 + 5);
            puVar6 = (uint *)((int)puVar6 + 5);
            iVar8 = iVar8 + 1;
          } while (*piVar1 != 0);
        }
        goto cf_continue_loop_004E643C;
      }
LAB_004e645f:
      if (g_packedRecords_A62x8[(int)param_1].field1966_0x9ce != nullptr) {
        (g_packedRecords_A62x8[(int)param_1].field1966_0x9ce)->iteratorIndex = 0;

        iVar11 = st::fn_006B1190(g_packedRecords_A62x8[(int)param_1].field1966_0x9ce,reinterpret_cast<byte *>(&local_c));
        while (-1 < iVar11) {

          st::fn_004031AC(local_c);

          iVar11 = st::fn_006B1190(g_packedRecords_A62x8[(int)param_1].field1966_0x9ce,
                                 reinterpret_cast<byte *>(&local_c));
        }
      }
      if (((((param_2 == 0x1d) || (param_2 == 0x89)) || (param_2 == 0x46)) ||
          ((param_2 == 0x4a || (param_2 == 0x12)))) &&
         ((pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9,
          pDVar7 != nullptr && (uVar10 = 0, pDVar7->count != 0)))) {
        do {

          st::fn_006ACC70(reinterpret_cast<DArrayTy *>(pDVar7),uVar10,&local_8);
          if ((local_8 != nullptr) &&
             /* ST_CALLSITE[004E64DF]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
             (((iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x36 ||
               /* ST_CALLSITE[004E64EC]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
               (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x5d)) ||
              /* ST_CALLSITE[004E64F9]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
              (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x3d)))) {

            st::fn_00402D6F(reinterpret_cast<RecoveredRecordView_004E4D60_1AFEFB7D *>(local_8));

            st::fn_00401B18(reinterpret_cast<STMineSetC *>(local_8));
          }
          pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
      if ((((((param_2 == 0x3c) || (param_2 == 0x91)) || (param_2 == 0x9a)) ||
           ((param_2 == 0x4b || (param_2 == 0x4c)))) || (param_2 == 0x41)) &&
         ((pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9,
          pDVar7 != nullptr && (uVar10 = 0, pDVar7->count != 0)))) {
        do {

          st::fn_006ACC70(reinterpret_cast<DArrayTy *>(pDVar7),uVar10,&local_8);
          if ((local_8 != nullptr) &&
             /* ST_CALLSITE[004E656B]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
             (((iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 5 ||
               /* ST_CALLSITE[004E6578]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
               (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x21)) ||
              /* ST_CALLSITE[004E6585]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
              (iVar12 = STStructuralVirtualCall<undefined4>(local_8, 0x2C), iVar12 == 0x11)))) {
            st::fn_004025EA(local_8);
          }
          pDVar7 = g_packedRecords_A62x8[(int)param_1].field3_0x9;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
    }
    st::fn_00405B73((int)param_1);
    st::fn_00404C55(CASE_13,0);
  }
  return;
  while( true ) {
    if (*(int *)(iVar12 + 0x7f5147 + *puVar5 * 4) < (int)(uint)(byte)puVar5[1])
    goto cf_continue_loop_004E643C;
    piVar1 = (int *)((int)puVar5 + 5);
    puVar5 = (uint *)((int)puVar5 + 5);
    iVar8 = iVar8 + 1;
    if (*piVar1 == 0) break;
LAB_004e63fe:
    if (3 < iVar8) break;
  }
  uVar10 = *(uint *)(iVar9 + (int)piVar4) ^ 7;
  pbVar2 = (byte *)(iVar12 + 0x7f511f + ((int)uVar10 >> 3));
  *pbVar2 = *pbVar2 | '\x01' << (uVar10 & 7);
cf_continue_loop_004E643C:
  local_10 = local_10 + 0x19;
  iVar9 = iVar9 + 0x19;
  piVar4 = reinterpret_cast<int *>((&PTR_DAT_007c0dc8)[iVar3]);
  if (*(int *)(iVar9 + (int)piVar4) == 0) goto LAB_004e645f;
  goto LAB_004e63ab;
}

// 004E6C20 STAllPlayersC::sub_004E6C20
#line 4 "decomp/ST.exe/functions/004E6C20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=7; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; incoming_this_forward_calls=3;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=3;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004E6C20 -> 004E6010 @ 004E6C90 | 004E6D00 -> 004E6C20 @ 004E6D31; FUN_004e6d00
   parameter param_2 */

int __thiscall st::fn_004E6C20(STAllPlayersC *this,byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;

  if (((((int)param_1 < 0) || (7 < (int)param_1)) || (param_2 < 0x32)) || (0x73 < param_2)) {
    return 0;
  }
  iVar4 = 1;
  /* ST_CALLSITE[004E6C51]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = st::fn_004049B7((char)param_1);
  iVar5 = 0;
  iVar1 = param_2 + -0x32 + (bVar3 - 1) * 0x42;
  iVar2 = iVar1 * 3;
  if ((&DAT_007c0e4c)[iVar1 * 3] != '\0') {
    while (iVar5 < 3) {
      if (iVar5 == 0) {

        iVar4 = st::fn_0040571D(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar2]);
      }
      else {

        iVar4 = st::fn_0040186B((int)param_1,(uint)(byte)(&DAT_007c0e4c + iVar2)[iVar5]);
      }
      if (iVar4 == 0) {
        return 0;
      }
      iVar1 = iVar5 + iVar2;
      iVar5 = iVar5 + 1;
      if ((&DAT_007c0e4d)[iVar1] == '\0') {
        return iVar4;
      }
    }
  }
  return iVar4;
}

// 004E6FE0 STAllPlayersC::sub_004E6FE0
#line 4 "decomp/ST.exe/functions/004E6FE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; incoming_this_forward_calls=3;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall st::fn_004E6FE0(STAllPlayersC *this,int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;

  uVar4 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    /* ST_CALLSITE[004E700C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = st::fn_004049B7((char)param_1);
    uVar3 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[bVar1 - 1] + uVar3 != 0) {

        iVar2 = st::fn_0040186B(param_1,uVar4);
        if ((int)(uint)*(byte *)(uVar4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B)) <= iVar2) {
          local_c = local_c + 1;
        }

        iVar2 = st::fn_0040524F(param_1,uVar4);
        if (iVar2 != 0) {
          local_8 = local_8 + 1;
        }
      }
      uVar3 = uVar3 + 0x9b;
      uVar4 = uVar4 + 1;
    } while (uVar3 < 0x5dd9);
    if (local_8 != 0) {
      local_8 = (local_c * 100) / local_8;
      if (local_8 < 0x65) {
        return local_8;
      }
      local_10 = 100;
    }
    return local_10;
  }
  return 0;
}

// 004E75F0 STAllPlayersC::sub_004E75F0
#line 4 "decomp/ST.exe/functions/004E75F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; incoming_this_forward_calls=5;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall st::fn_004E75F0(STAllPlayersC *this,int param_1)

{
  int param_1_after_write;

  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;

  iVar2 = param_1;
  if ((-1 < param_1) && (param_1 < 8)) {
    /* ST_CALLSITE[004E760D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar3 = st::fn_004049B7((char)param_1);
    param_1_after_write = 0; /* compiler stack-slot lifetime split */
    if (0 < *(int *)(&DAT_007995bc + (bVar3 - 1) * 0x4bf)) {
      puVar5 = reinterpret_cast<uint *>((&DAT_007995bc + (bVar3 - 1) * 0x4bf));
      do {
        if (0x50 < param_1_after_write) {
          return;
        }
        iVar4 = st::fn_0040186B(iVar2,*puVar5);
        if (((iVar4 < (int)(uint)(byte)puVar5[1]) &&
            (iVar4 = st::fn_0040524F(iVar2,*puVar5), iVar4 != 0)) &&
           (iVar4 = st::fn_00401E1F(iVar2,*puVar5), iVar4 == 0)) {
          /* ST_CALLSITE[004E7687]: CALL 0x00402130; direct=00402130 STAllPlayersC::sub_004E6310 */
          st::fn_00402130(this,(byte *)iVar2,*puVar5,(uint)(byte)puVar5[1]);
        }
        piVar1 = (int *)((int)puVar5 + 5);
        puVar5 = (uint *)((int)puVar5 + 5);
        param_1_after_write = param_1_after_write + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

// 004E7F20 STAllPlayersC::sub_004E7F20
#line 4 "decomp/ST.exe/functions/004E7F20/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=8, ignored=0,
   unknown=0

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=8; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=6;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall st::fn_004E7F20(STAllPlayersC *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if ((&DAT_007e53bc)[param_2] == '\0') {
    return 0;
  }
  iVar2 = 0;
  while (((iVar2 == param_1 ||
          (*(uint *)(iVar2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xA22)) < g_playSystem_00802A38->field_00E4))

         || (iVar1 = st::fn_0040186B(iVar2,param_2), iVar1 < param_3))) {
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 004E80F0 STAllPlayersC::sub_004E80F0
#line 4 "decomp/ST.exe/functions/004E80F0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004E80F0_param_2Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=6; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_sub_004E80F0_param_2Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (6), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00660F70 @ 006610BC -> read as EAX on
   every CFG path | 00662240 @ 00662384 -> read as EAX on every CFG path | 00662240 @ 00662723 ->
   read as EAX on every CFG path | 00662240 @ 00662A53 -> read as EAX on every CFG path | 00662240 @
   00662CE2 -> read as EAX on every CFG path | 00662240 @ 0066300F -> read as EAX on every CFG path
    */

int __thiscall
st::fn_004E80F0
          (STAllPlayersC *this,int param_1,STAllPlayersC_sub_004E80F0_param_2Enum param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  switch(param_2) {
  case CASE_A3:
  case CASE_A8:
  case CASE_B2:
  case CASE_BE:
    iVar1 = param_2 * 3 + -0x1c2;
    iVar2 = (&DAT_007bf67c)[iVar1];
    if (((iVar2 < 0) || (iVar2 == 0)) ||

       (iVar2 = st::fn_0040186B(param_1,iVar2), st::storage_bit_cast<int>(static_cast<uint32_t>((&DAT_007bf680)[iVar1])) <= iVar2)) {
      iVar3 = 1;
    }
  }
  return iVar3;
}

// 004EB010 STAllPlayersC::sub_004EB010
#line 4 "decomp/ST.exe/functions/004EB010/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004EB010(STAllPlayersC *this,int param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_8;

  iVar6 = 0;
  local_8 = 0;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar7 = param_1 * 0xa62;
  g_packedRecords_A62x8[param_1].field1964_0x9c6 = 0;
  local_10 = 0;
  while( true ) {
    do {
      /* ST_CALLSITE[004EB052]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = st::fn_004049B7((char)param_1);
      if (bVar2 == 3) {
        iVar5 = local_10 + iVar6 * 2;
        uVar1 = (&DAT_007c1620)[iVar5];
        *(undefined4 *)(iVar7 + 0x7f57c6 + iVar5 * 8) = uVar1;
        *(undefined4 *)(iVar7 + 0x7f57c2 + iVar5 * 8) = uVar1;
      }
      else {
        iVar6 = local_10 + iVar6 * 2;
        iVar4 = iVar6 * 8;
        iVar6 = (&DAT_007c15c4)[iVar6 * 2];
        iVar5 = *(int *)(&DAT_007c15c0 +
                        (local_10 +
                        (local_8 + g_packedRecords_A62x8[param_1].field1964_0x9c6 * 2) * 2) * 8);
        uVar3 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar3;
        iVar5 = iVar5 + (uVar3 >> 0x10) % ((iVar6 - iVar5) + 1U);
        *(int *)(iVar4 + 0x7f57c6 + iVar7) = iVar5;
        *(int *)(iVar4 + 0x7f57c2 + iVar7) = iVar5;
        iVar6 = local_8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < 2);
    iVar6 = iVar6 + 1;
    if (1 < iVar6) break;
    local_10 = 0;
    local_8 = iVar6;
  }
  g_packedRecords_A62x8[param_1].field1963_0x9c2 = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 005EC370 STAllPlayersC::FUN_005ec370
#line 4 "decomp/ST.exe/functions/005EC370/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005EC370 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005EB4DA */

byte * __thiscall st::fn_005EC370(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  int iVar1;
  uint uVar2;
  AnonShape_005EC370_C8356E04 *pAVar3;
  byte *puVar4;
  uint *puVar5;
  byte *puVar6;
  AnonShape_005EC370_C8356E04 *pAVar7;
  uint *puVar8;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_005EC370_C8356E04 *local_10;
  uint local_c;
  uint local_8;

  local_10 = static_cast<AnonShape_005EC370_C8356E04 *>(st::fn_006AAC70(0x246));
  puVar4 = reinterpret_cast<byte *>(&this[1].field_0xa);
  pAVar7 = local_10;
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
    pAVar7 = reinterpret_cast<AnonShape_005EC370_C8356E04 *>(&pAVar7->field_0004);
  }
  *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
  puVar4 = reinterpret_cast<byte *>(&this->field_0x231);
  puVar6 = reinterpret_cast<byte *>(&local_10->field_0x151);
  memmove(puVar6, puVar4, 0xf5); /* compiler REP MOVS byte copy */
  local_10->field_000C = 2;
  /* ST_CALLSITE[005EC3BD]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
  local_14 = st::fn_004018D4(reinterpret_cast<STT3DSprC *>(&this->field_0x1d5),&local_8);
  /* ST_CALLSITE[005EC3CB]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
  local_18 = st::fn_0040119A(this,reinterpret_cast<int *>(&local_c));
  newSize = local_c + 0x24e + local_8;
  local_10 = static_cast<AnonShape_005EC370_C8356E04 *>(st::fn_006ACF50(local_10,newSize));
  local_10->field_0246 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = reinterpret_cast<byte *>((local_14));
  pAVar7 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
    pAVar7 = reinterpret_cast<AnonShape_005EC370_C8356E04 *>(&pAVar7->field_0004);
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (byte *)((int)puVar4 + 1);
    pAVar7 = (AnonShape_005EC370_C8356E04 *)((int)&pAVar7->field_0000 + 1);
  }
  st::fn_006AB060(&local_14);
  puVar8 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar8 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar8 = puVar8 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar8 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  st::fn_006AB060(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

// 005EC850 STAllPlayersC::FUN_005ec850
#line 4 "decomp/ST.exe/functions/005EC850/decomp.c"
int __thiscall st::fn_005EC850(STAllPlayersC *this,int *param_1)

{
  int iVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;

  this->field_0318 = 0;
  this->field_02D6 = 0xffffffff;
  this->field_0316 = 0;
  iVar1 = *param_1;
  local_8 = iVar1;

  local_24 = st::fn_006AAC70(0x44);
  iVar3 = 0;
  do {
    *(int **)(iVar3 + (int)local_24) = PTR_00806774;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x44);
  STField<int *>(local_24,0x24) = PTR_00806764;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x10;
  local_c = 0;
  /* ST_CALLSITE[005EC8CE]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
  st::fn_00404CA5
            (reinterpret_cast<STT3DSprC *>(&this->field_0x1d5),reinterpret_cast<int *>(&local_24),
             reinterpret_cast<RecoveredRecordView_004AD790_D4DB5A31 *>((param_1 + 1)));

  iVar2 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&this->field_0x1d5));
  this->field_02D6 = iVar2;
  st::fn_006AB060(&local_24);
  if ((((this->field_023A == 8) && (this->field_02B9 != '\0')) &&
      (uVar4 = (g_playSystem_00802A38->field_00E4 - this->field_028F) + 0x15, 0 < (int)uVar4)) &&
     ((int)uVar4 < 0x15)) {
    iVar3 = *(int *)&this->field_0x2c6;
    iVar8 = *(int *)&this->field_0x2be;
    iVar9 = *(int *)&this->field_0x2c2;
    iVar7 = 1;

    uVar5 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&this->field_0x1d5));
    st::fn_004051A5(uVar5,iVar7,iVar8,iVar9,iVar3,uVar4);
  }
  piVar6 = (int *)(&((RecoveredRecordView_004AD790_D4DB5A31 *)(param_1 + 1))->field_0x0 + iVar1);
  iVar1 = *piVar6;
  /* ST_CALLSITE[005EC957]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
  st::fn_0040551F(this,reinterpret_cast<undefined4 *>(piVar6 + 1));
  return iVar1 + local_8;
}

// 005FCAD0 STAllPlayersC::FUN_005fcad0
#line 4 "decomp/ST.exe/functions/005FCAD0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005FCAD0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005FBC32 */

byte * __thiscall st::fn_005FCAD0(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  int iVar1;
  uint uVar2;
  AnonShape_005FCAD0_CB9D1D1A *pAVar3;
  byte *puVar4;
  uint *puVar5;
  byte *puVar6;
  AnonShape_005FCAD0_CB9D1D1A *pAVar7;
  uint *puVar8;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_005FCAD0_CB9D1D1A *local_10;
  uint local_c;
  uint local_8;

  local_10 = static_cast<AnonShape_005FCAD0_CB9D1D1A *>(st::fn_006AAC70(0x24a));
  puVar4 = reinterpret_cast<byte *>(&this[1].field_0xa);
  pAVar7 = local_10;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
    pAVar7 = reinterpret_cast<AnonShape_005FCAD0_CB9D1D1A *>(&pAVar7->field_0004);
  }
  *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
  puVar4 = reinterpret_cast<byte *>(&this->field_0x231);
  puVar6 = reinterpret_cast<byte *>(&local_10->field_0x155);
  memmove(puVar6, puVar4, 0xf5); /* compiler REP MOVS byte copy */
  local_10->field_000C = 2;
  /* ST_CALLSITE[005FCB1D]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
  local_14 = st::fn_004018D4(reinterpret_cast<STT3DSprC *>(&this->field_0x1d5),&local_8);
  /* ST_CALLSITE[005FCB2B]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
  local_18 = st::fn_0040119A(this,reinterpret_cast<int *>(&local_c));
  newSize = local_c + 0x252 + local_8;
  local_10 = static_cast<AnonShape_005FCAD0_CB9D1D1A *>(st::fn_006ACF50(local_10,newSize));
  local_10->field_0246 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = reinterpret_cast<byte *>((local_14));
  pAVar7 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
    pAVar7 = reinterpret_cast<AnonShape_005FCAD0_CB9D1D1A *>(&pAVar7->field_0004);
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (byte *)((int)puVar4 + 1);
    pAVar7 = (AnonShape_005FCAD0_CB9D1D1A *)((int)&pAVar7->field_0000 + 1);
  }
  st::fn_006AB060(&local_14);
  puVar8 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar8 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar8 = puVar8 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar8 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  st::fn_006AB060(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

// 00622990 STAllPlayersC::FUN_00622990
#line 4 "decomp/ST.exe/functions/00622990/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00622990 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00622246 */

byte * __thiscall st::fn_00622990(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  uint uVar2;
  AnonShape_00622990_E4CFDE96 *pAVar3;
  uint *puVar4;
  uint *puVar5;
  AnonShape_00622990_E4CFDE96 *pAVar6;
  uint *puVar7;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_00622990_E4CFDE96 *local_10;
  uint local_c;
  uint local_8;

  local_10 = static_cast<AnonShape_00622990_E4CFDE96 *>(st::fn_006AAC70(0x109));
  puVar4 = reinterpret_cast<uint *>(&this->field_0x25e);
  pAVar6 = local_10;
  memmove(pAVar6, puVar4, 0x108); /* compiler REP MOVS byte copy */
  pAVar6 = reinterpret_cast<AnonShape_00622990_E4CFDE96 *>(((byte *)pAVar6 + 0x108));
  puVar4 = puVar4 + 0x42;
  *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar4;
  local_10->field_000C = 2;
  /* ST_CALLSITE[006229C9]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
  local_14 = st::fn_004018D4(reinterpret_cast<STT3DSprC *>(&this->field_0x1d5),&local_8);
  /* ST_CALLSITE[006229D7]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
  local_18 = st::fn_0040119A(this,reinterpret_cast<int *>(&local_c));
  newSize = local_c + 0x111 + local_8;
  local_10 = static_cast<AnonShape_00622990_E4CFDE96 *>(st::fn_006ACF50(local_10,newSize));
  local_10->field_0109 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = local_14;
  pAVar6 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar6->field_0000 = *puVar4;
    puVar4 = puVar4 + 1;
    pAVar6 = reinterpret_cast<AnonShape_00622990_E4CFDE96 *>(&pAVar6->field_0004);
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    pAVar6 = (AnonShape_00622990_E4CFDE96 *)((int)&pAVar6->field_0000 + 1);
  }
  st::fn_006AB060(&local_14);
  puVar7 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar7 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar7 = puVar7 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar7 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  st::fn_006AB060(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

// 00622AB0 STAllPlayersC::FUN_00622ab0
#line 4 "decomp/ST.exe/functions/00622AB0/decomp.c"
int __thiscall
st::fn_00622AB0(STAllPlayersC *this,RecoveredRecord_00622AB0_330E12AF *param_1)

{
  int iVar1;
  int iVar2;
  RecoveredRecord_00622AB0_330E12AF *pRVar3;
  int *piVar4;
  byte *puVar5;
  void *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  pRVar3 = param_1;
  puVar5 = reinterpret_cast<byte *>(&this->field_0x25e);
  memmove(puVar5, pRVar3, 0x109); /* compiler REP MOVS byte copy */
  this->field_02BA = 0xffffffff;
  iVar2 = param_1->field_0109;

  local_20 = st::fn_006AAC70(0x44);
  iVar1 = 0;
  do {
    *(int **)(iVar1 + (int)local_20) = PTR_00806774;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x44);
  STField<int *>(local_20,0x24) = PTR_00806764;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  /* ST_CALLSITE[00622B3B]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
  st::fn_00404CA5
            (reinterpret_cast<STT3DSprC *>(&this->field_0x1d5),reinterpret_cast<int *>(&local_20),
             reinterpret_cast<RecoveredRecordView_004AD790_D4DB5A31 *>((param_1 + 1)));
  st::fn_006AB060(&local_20);
  piVar4 = reinterpret_cast<int *>((&param_1[1].field_0x0 + iVar2));
  iVar1 = *piVar4;
  /* ST_CALLSITE[00622B53]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
  st::fn_0040551F(this,reinterpret_cast<undefined4 *>(piVar4 + 1));
  return iVar1 + iVar2 + 0x109;
}
