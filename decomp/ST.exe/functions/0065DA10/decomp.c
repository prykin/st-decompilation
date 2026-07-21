
uint * __fastcall FUN_0065da10(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  STGroupBoatC *this;
  uint *puVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000004;

  if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this = thunk_FUN_0042b760(param_1->field_0024,
                              CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
    if (this != (STGroupBoatC *)0x0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      puVar1 = STGroupC::GetGroupContent((STGroupC *)this,in_stack_00000004);
      return puVar1;
    }
  }
  return (uint *)0x0;
}

