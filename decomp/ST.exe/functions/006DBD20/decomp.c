
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004A9540 -> 006DBD20 @ 004A9724 */

void __thiscall
FUN_006dbd20(AnonShape_GLOBAL_00807598_0C6808FB *param_1,undefined4 param_2,uint param_3,
            undefined4 param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,double param_11,double param_12)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  float10 fVar5;
  longlong lVar6;
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
  *(int *)&param_1->field_0x28 = param_5;
  iVar4 = param_5 * param_6;
  *(int *)&param_1->field_0x2c = param_6;
  iVar3 = Library::DKW::LIB::FUN_006acf50(*(int *)&param_1->field_0x8,iVar4 + 0x18);
  *(int *)&param_1->field_0x8 = iVar3;
  *(uint *)&param_1->field_0xc = (iVar3 - 1U ^ param_3) & 7 ^ iVar3 + 7U;
  if (*(int *)&param_1->field_0x124 == 1) {
    iVar3 = Library::DKW::LIB::FUN_006acf50(*(int *)&param_1->field_0x10,iVar4 + 0x10);
    *(int *)&param_1->field_0x10 = iVar3;
  }
  else {
    iVar3 = Library::DKW::LIB::FUN_006acf50(*(int *)&param_1->field_0x10,iVar4 * 2 + 0x10);
    *(int *)&param_1->field_0x10 = iVar3;
    if (((*(int *)&param_1->field_0x144 != 0) && (iVar3 = *(int *)&param_1->field_0x174, 0 < iVar3))
       && (iVar3 < *(int *)&param_1->field_0x2c)) {
      iVar3 = Library::DKW::LIB::FUN_006acf50
                        (*(int *)&param_1->field_0x1c,*(int *)&param_1->field_0x28 * iVar3);
      *(int *)&param_1->field_0x1c = iVar3;
    }
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_14 = (double)CONCAT44(param_10,param_9) - (double)CONCAT44(param_8,param_7);
  *(undefined4 *)&param_1->field_0x2f0 = 100;
  *(int *)&param_1->field_0x14 = *(int *)&param_1->field_0x10 + 8;
  *(undefined4 *)&param_1->field_0x2f4 = 100;
  *(double *)&param_1->field_0xf8 = local_14 / (double)param_5;
  local_c = param_12 - param_11;
  *(double *)&param_1->field_0x100 = local_c / (double)param_6;
  *(double *)&param_1->field_0xe8 = local_14 / (double)param_5;
  *(double *)&param_1->field_0xf0 = local_c / (double)param_6;
  *(double *)&param_1->field_0x10c =
       _DAT_0079df78 / (*(double *)&param_1->field_0x11c - *(double *)&param_1->field_0x114);
  lVar6 = Library::MSVCRT::__ftol();
  *(int *)&param_1->field_0x2e4 = (int)lVar6;
  Library::Ourlib::STREND::FUN_006dd660(param_1,0,0,param_5,param_6);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  Library::Ourlib::STREND::FUN_006dd6e0
            (param_1,param_7,param_8,param_9,param_10,param_11._0_4_,param_11._4_4_,param_12._0_4_,
             param_12._4_4_);
  FUN_006dd610(param_1,(-(uint)(*(int *)&param_1->field_0x124 != 1) & 0xfffffffc) + 4,
               *(undefined4 *)&param_1->field_0098,*(undefined4 *)((int)&param_1->field_0098 + 4),
               *(undefined4 *)&param_1->field_00A0,*(undefined4 *)((int)&param_1->field_00A0 + 4));
  if ((*(int *)&param_1->field_0x124 == 0) || (*(int *)&param_1->field_0x124 == 10)) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    FUN_006e25d0(param_1,&local_40);
    FUN_006e25d0(param_1,&local_30);
    param_1->field_0108 = local_2c - local_3c;
  }
  *(undefined4 *)&param_1->field_0x2d8 = 1;
  *(undefined4 *)&param_1->field_0x2dc = 0;
  *(undefined4 *)&param_1->field_0x140 = 0;
  *(undefined4 *)&param_1->field_0x13c = 0;
  if (*(int *)&param_1->field_0x358 != 0) {
    *(undefined4 *)(*(int *)&param_1->field_0x358 + 0x280) = *(undefined4 *)&param_1->field_0x280;
    *(double *)&param_1->field_0x368 = *(double *)&param_1->field_0xc8 / (double)param_1->field_0380
    ;
    lVar6 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar6;
    *(int *)&param_1->field_0x370 = iVar3;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    fVar5 = (float10)iVar3 * extraout_ST0;
    *(double *)&param_1->field_0x360 = (double)fVar5;
    dVar1 = (double)(fVar5 * (float10)_DAT_007901c0);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_12._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_12._0_4_ = SUB84(dVar1,0);
    dVar2 = (double)(fVar5 * (float10)_DAT_0079df58);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_11._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_11._0_4_ = SUB84(dVar2,0);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006dbd20(*(AnonShape_GLOBAL_00807598_0C6808FB **)&param_1->field_0x358,0,0,0,iVar3,iVar3,
                 param_11._0_4_,param_11._4_4_,param_12._0_4_,param_12._4_4_,dVar2,dVar1);
    iVar3 = *(int *)&param_1->field_0x358;
    *(undefined4 *)&param_1->field_0x38c = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)&param_1->field_0x390 = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)&param_1->field_0x37c = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)&param_1->field_0x374 = 0xffff8ad0;
    *(undefined4 *)&param_1->field_0x378 = 0xffff8ad0;
    *(undefined4 *)(iVar3 + 0x370) = *(undefined4 *)&param_1->field_0x370;
    *(undefined4 *)(*(int *)&param_1->field_0x358 + 0x134) = 1;
  }
  return;
}

