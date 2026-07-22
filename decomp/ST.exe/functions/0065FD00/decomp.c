
undefined4 __fastcall FUN_0065fd00(AnonShape_0065FD00_EB74ED0C *param_1,undefined4 param_2)

{
  STGroupBoatC *this;

  if ((param_1->field_007D != -2) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this = thunk_FUN_0042b760(param_1->field_0024,
                              CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (this != (STGroupBoatC *)0x0) {
      (*this->vtable->vfunc_08)(this,CASE_3,(void *)0x0);
      return 0;
    }
  }
  return 0xffffffff;
}

