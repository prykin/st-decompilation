
void __fastcall
FUN_0065fa10(AnonShape_0065FA10_37C5A4D3 *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4,undefined4 param_5)

{
  STGroupBoatC *pSVar1;

  if ((param_1->field_007D != -2) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    pSVar1 = thunk_FUN_0042b760(param_1->field_0024,
                                CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (pSVar1 != (STGroupBoatC *)0x0) {
      (*pSVar1->vtable->vfunc_18)(pSVar1,param_3,param_4,param_5);
    }
  }
  return;
}

