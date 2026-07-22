
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00621B50 -> 00627390 @ 00622291 */

void __fastcall FUN_00627390(STMineSetC *param_1)

{
  if ((param_1->field_02AE == CASE_0) || (param_1->field_02AE == CASE_1)) {
    param_1->field_02AE = CASE_2;
    param_1->field_030F =
         ((int)(*(int *)(&DAT_007d02a4 + (uint)param_1->field_02AD * 4) +
               (*(int *)(&DAT_007d02a4 + (uint)param_1->field_02AD * 4) >> 0x1f & 3U)) >> 2) +
         g_playSystem_00802A38->field_00E4;
  }
  return;
}

