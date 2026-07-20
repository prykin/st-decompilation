
uint * __fastcall FUN_0065e360(AnonShape_0065E360_B94C37CB *param_1,undefined4 param_2,int param_3)

{
  STGroupBoatC *this;
  uint *puVar1;
  
  if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    this = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),param_1->field_0024),
                              CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (this != (STGroupBoatC *)0x0) {
      puVar1 = STGroupC::GetTOBJList((STGroupC *)this,param_3);
      return puVar1;
    }
  }
  return (uint *)0x0;
}

