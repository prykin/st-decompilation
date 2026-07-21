
void __fastcall FUN_0065d6e0(AnonShape_0065D6E0_0F9074F6 *param_1,undefined4 param_2)

{
  STGroupBoatC *this;

  if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this = thunk_FUN_0042b760(param_1->field_0024,
                              CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (this != (STGroupBoatC *)0x0) {
      thunk_FUN_004232e0(this,0);
    }
  }
  return;
}

