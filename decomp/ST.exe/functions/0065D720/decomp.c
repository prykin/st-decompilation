
void __fastcall FUN_0065d720(AnonShape_0065D720_52DE2AAB *param_1,undefined4 param_2)

{
  STGroupBoatC *pSVar1;
  
  if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    pSVar1 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),param_1->field_0024),
                                CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (pSVar1 != (STGroupBoatC *)0x0) {
      thunk_FUN_00423380((int)pSVar1);
      return;
    }
  }
  return;
}

