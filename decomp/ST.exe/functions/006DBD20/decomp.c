
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=59;
   incoming_edx_uses=0; incoming_stack_parameter_uses=29; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004A9540 -> 006DBD20 @ 004A9724; data at 00807598 | 006DC050 -> 006DBD20 @ 006DC10A;
   ST3DSMAPContext::sub_006DC050 this */

void __thiscall
ST3DSMAPContext::sub_006DBD20
          (ST3DSMAPContext *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
          int param_6,double param_7,double param_8,double param_9,double param_10)

{
  void *pvVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  float10 fVar3;
  longlong lVar4;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_14;
  double local_c;

  *(undefined4 *)&param_1->field_0x4 = param_2;
  *(uint *)&param_1->field_0x20 = param_3;
  *(undefined4 *)&param_1->field_0x24 = param_4;
  param_1->field_0028 = param_5;
  iVar2 = param_5 * param_6;
  *(int *)&param_1->field_0x2c = param_6;
  pvVar1 = Library::DKW::LIB::MemRealloc
                     (*(AnonPointee_TLOBaseTy_0607 **)&param_1->field_0x8,iVar2 + 0x18);
  *(void **)&param_1->field_0x8 = pvVar1;
  *(uint *)&param_1->field_0xc = ((int)pvVar1 - 1U ^ param_3) & 7 ^ (int)pvVar1 + 7U;
  if (*(int *)&param_1->field_0x124 == 1) {
    pvVar1 = Library::DKW::LIB::MemRealloc
                       (*(AnonPointee_TLOBaseTy_0607 **)&param_1->field_0x10,iVar2 + 0x10);
    *(void **)&param_1->field_0x10 = pvVar1;
  }
  else {
    pvVar1 = Library::DKW::LIB::MemRealloc
                       (*(AnonPointee_TLOBaseTy_0607 **)&param_1->field_0x10,iVar2 * 2 + 0x10);
    *(void **)&param_1->field_0x10 = pvVar1;
    if (((param_1->field_0144 != 0) && (iVar2 = param_1->field_0174, 0 < iVar2)) &&
       (iVar2 < *(int *)&param_1->field_0x2c)) {
      pvVar1 = Library::DKW::LIB::MemRealloc
                         ((AnonPointee_TLOBaseTy_0607 *)param_1->field_001C,
                          param_1->field_0028 * iVar2);
      param_1->field_001C = (int)pvVar1;
    }
  }
  local_14 = param_8 - param_7;
  *(undefined4 *)&param_1->field_0x2f0 = 100;
  *(int *)&param_1->field_0x14 = *(int *)&param_1->field_0x10 + 8;
  *(undefined4 *)&param_1->field_0x2f4 = 100;
  *(double *)&param_1->field_0xf8 = local_14 / (double)param_5;
  local_c = param_10 - param_9;
  *(double *)&param_1->field_0x100 = local_c / (double)param_6;
  *(double *)&param_1->field_0xe8 = local_14 / (double)param_5;
  *(double *)&param_1->field_0xf0 = local_c / (double)param_6;
  *(double *)&param_1->field_0x10c =
       _DAT_0079df78 / (*(double *)&param_1->field_0x11c - *(double *)&param_1->field_0x114);
  lVar4 = Library::MSVCRT::__ftol();
  *(int *)&param_1->field_0x2e4 = (int)lVar4;
  Library::Ourlib::STREND::FUN_006dd660(param_1,0,0,param_5,param_6);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  Library::Ourlib::STREND::FUN_006dd6e0
            (param_1,param_7._0_4_,param_7._4_4_,param_8._0_4_,param_8._4_4_,param_9._0_4_,
             param_9._4_4_,param_10._0_4_,param_10._4_4_);
  sub_006DD610(param_1,(-(uint)(*(int *)&param_1->field_0x124 != 1) & 0xfffffffc) + 4,
               *(uint *)&param_1->field_0098,*(undefined4 *)((int)&param_1->field_0098 + 4),
               *(uint *)&param_1->field_00A0,*(undefined4 *)((int)&param_1->field_00A0 + 4));
  if ((*(int *)&param_1->field_0x124 == 0) || (*(int *)&param_1->field_0x124 == 10)) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    sub_006E25D0(param_1,&local_40);
    sub_006E25D0(param_1,&local_30);
    param_1->field_0108 = local_2c - local_3c;
  }
  param_1->field_02D8 = 1;
  *(undefined4 *)&param_1->field_0x2dc = 0;
  *(undefined4 *)&param_1->field_0x140 = 0;
  *(undefined4 *)&param_1->field_0x13c = 0;
  if (*(int *)&param_1->field_0x358 != 0) {
    *(undefined4 *)(*(int *)&param_1->field_0x358 + 0x280) = *(undefined4 *)&param_1->field_0x280;
    *(double *)&param_1->field_0x368 = *(double *)&param_1->field_0xc8 / (double)param_1->field_0380
    ;
    lVar4 = Library::MSVCRT::__ftol();
    iVar2 = (int)lVar4;
    *(int *)&param_1->field_0x370 = iVar2;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    fVar3 = (float10)iVar2 * extraout_ST0;
    *(double *)&param_1->field_0x360 = (double)fVar3;
    sub_006DBD20(*(ST3DSMAPContext **)&param_1->field_0x358,0,0,0,iVar2,iVar2,
                 (double)(fVar3 * (float10)_DAT_0079df58),(double)(fVar3 * (float10)_DAT_007901c0),
                 (double)(fVar3 * (float10)_DAT_0079df58),(double)(fVar3 * (float10)_DAT_007901c0));
    iVar2 = *(int *)&param_1->field_0x358;
    *(undefined4 *)&param_1->field_0x38c = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)&param_1->field_0x390 = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)&param_1->field_0x37c = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)&param_1->field_0x374 = 0xffff8ad0;
    *(undefined4 *)&param_1->field_0x378 = 0xffff8ad0;
    *(undefined4 *)(iVar2 + 0x370) = *(undefined4 *)&param_1->field_0x370;
    *(undefined4 *)(*(int *)&param_1->field_0x358 + 0x134) = 1;
  }
  return;
}

