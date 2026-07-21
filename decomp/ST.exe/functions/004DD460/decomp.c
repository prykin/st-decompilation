
undefined4 __fastcall FUN_004dd460(AnonShape_004DD460_CCB31E51 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0;
  puVar2 = (undefined4 *)&param_1->field_0x4e0;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((param_1->field_0231 != 0) && (DAT_008117a4 != 0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_0062e440(param_1->field_0024,(short)param_1->field_05B0,(short)param_1->field_05B4,
                       (short)param_1->field_05B8,param_1->field_0018,
                       CONCAT22((short)((uint)param_1->field_0231 >> 0x10),param_1->field_0032));
  }
  return 0;
}

