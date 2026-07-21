
undefined4 __fastcall FUN_004dd500(AnonShape_004DD500_8D93FB74 *param_1,undefined4 param_2)

{
  if ((param_1->field_0231 == 0) && (DAT_008117a4 != 0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_0062e440(param_1->field_0024,(short)param_1->field_05B0,(short)param_1->field_05B4,
                       (short)param_1->field_05B8,param_1->field_0018,
                       CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_0032));
  }
  return 0;
}

