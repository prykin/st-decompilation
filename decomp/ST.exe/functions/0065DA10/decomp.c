
uint * __fastcall FUN_0065da10(int param_1,undefined4 param_2)

{
  STGroupBoatC *this;
  uint *puVar1;
  int in_stack_00000004;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    this = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x24)),
                              CONCAT22((short)((uint)param_2 >> 0x10),*(short *)(param_1 + 0x7d)));
    if (this != (STGroupBoatC *)0x0) {
      puVar1 = STGroupC::GetGroupContent((STGroupC *)this,in_stack_00000004);
      return puVar1;
    }
  }
  return (uint *)0x0;
}

