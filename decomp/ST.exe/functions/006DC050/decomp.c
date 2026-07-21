
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006dc050(AnonShape_006DC050_D52EE3EA *param_1,undefined4 param_2,uint param_3,undefined4 param_4
            ,int param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined8 param_15,undefined8 param_16,int param_17)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  AnonShape_006DBCA0_EF06575F *pAVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  longlong lVar6;

  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(param_1->field_0350,0x658);
  iVar5 = 0;
  param_1->field_0350 = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(param_1->field_0350 + 4) = 0;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(param_1->field_0354,0x658);
  param_1->field_0354 = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(param_1->field_0354 + 4) = 0;
  param_1->field_00C8 = param_15;
  param_1->field_00D0 = param_16;
  param_1->field_0128 = 0;
  param_1->field_041C = 0;
  param_1->field_0124 = 0;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  FUN_006dbd20((AnonShape_006DBD20_CC24D445 *)param_1,param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,param_10,(double)CONCAT44(param_12,param_11),
               (double)CONCAT44(param_14,param_13));
  if (0 < param_17) {
    pAVar4 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar4 != (AnonShape_006DBCA0_EF06575F *)0x0) {
      iVar5 = FUN_006dbca0(pAVar4);
    }
    param_1->field_0358 = iVar5;
    param_1->field_0380 = param_17;
    param_1->field_0368 = (double)param_1->field_00C8 / (double)param_17;
    lVar6 = Library::MSVCRT::__ftol();
    param_1->field_0370 = (int)lVar6;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    param_1->field_0360 = (double)((float10)(int)lVar6 * extraout_ST0);
    *(undefined8 *)(iVar5 + 200) = param_15;
    *(undefined8 *)(param_1->field_0358 + 0xd0) = param_16;
    *(undefined4 *)(param_1->field_0358 + 0x128) = 0;
    *(undefined4 *)(param_1->field_0358 + 0x41c) = 0;
    *(undefined4 *)(param_1->field_0358 + 0x124) = 1;
    dVar1 = param_1->field_0360 * _DAT_007901c0;
    dVar2 = param_1->field_0360 * _DAT_0079df58;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_16._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_16._0_4_ = SUB84(dVar1,0);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_15._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_15._0_4_ = SUB84(dVar2,0);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006dbd20((AnonShape_006DBD20_CC24D445 *)param_1->field_0358,0,0,0,param_1->field_0370,
                 param_1->field_0370,(undefined4)param_15,param_15._4_4_,(undefined4)param_16,
                 param_16._4_4_,dVar2,dVar1);
    FUN_006dd790((void *)param_1->field_0358,
                 (float)((float10)_DAT_0079df88 -
                        (float10)(double)param_1->field_00D0 * (float10)_DAT_0079df90));
    FUN_006dd800((void *)param_1->field_0358,
                 (float)((float10)(double)param_1->field_00D0 + (float10)(double)param_1->field_00D0
                        + (float10)_DAT_0079df88));
    *(undefined4 *)(param_1->field_0358 + 0x128) = 0x70;
    *(int *)(param_1->field_0358 + 0x380) = param_17;
    *(undefined4 *)(param_1->field_0358 + 0x370) = param_1->field_0370;
    dVar1 = (double)param_1->field_00D0 * _DAT_0079df80;
    param_1->field_0384 = 0x20;
    param_1->field_0394 = dVar1;
    dVar2 = (double)param_1->field_00D0 * _DAT_0079df90;
    param_1->field_039C = dVar2;
    param_1->field_03A4 = dVar2 - dVar1;
    *(undefined4 *)(param_1->field_0358 + 900) = 0x20;
  }
  return;
}

