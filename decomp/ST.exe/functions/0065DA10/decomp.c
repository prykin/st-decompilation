
uint * __fastcall FUN_0065da10(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  STGroupBoatC *this;
  uint *puVar1;
  int in_stack_00000004;
  
  if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    this = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),param_1->field_0024),
                              CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (this != (STGroupBoatC *)0x0) {
      puVar1 = STGroupC::GetGroupContent((STGroupC *)this,in_stack_00000004);
      return puVar1;
    }
  }
  return (uint *)0x0;
}

