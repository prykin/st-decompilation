
void __thiscall FUN_00419d30(void *this,int param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;

  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  STAllPlayersC::_ChangeMD
            (g_sTAllPlayers_007FA174,0,*(int **)((int)this + 0x24),
             CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)((int)this + 0x32)));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STAllPlayersC::_ChangeDock
            (0,*(int **)((int)this + 0x24),
             CONCAT22(extraout_var_00,*(undefined2 *)((int)this + 0x32)));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STAllPlayersC::UnRegisterObject
            (g_sTAllPlayers_007FA174,*(char *)((int)this + 0x24),
             CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x30)),
             CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x32)),this,param_1);
  return;
}

