
/* [STPrototypeApplier] Propagated return.
   Evidence: 0065FD00 returns zeroed full register at 0065FD30 @ 0065FD32 */

uint __fastcall FUN_0065fd00(AnonShape_0065FD00_EB74ED0C *param_1,undefined4 param_2)

{
  STGroupBoatC *this;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    this = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
    if (this != (STGroupBoatC *)0x0) {
      this->SetOrderData(CASE_3,(void *)0x0);
      return 0;
    }
  }
  return 0xffffffff;
}

