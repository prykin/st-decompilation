
void __fastcall FUN_0065d6a0(AnonShape_0065D6A0_A68E55B5 *param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  STGroupBoatC *this;

  if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    this = thunk_FUN_0042b760(param_1->field_0024,
                              CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_007D));
    if (this != (STGroupBoatC *)0x0) {
      thunk_FUN_004232e0(this,param_1);
    }
  }
  return;
}

