
undefined4 __fastcall FUN_00419c70(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;

  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar1 = STAllPlayersC::RegisterObject
                    (g_sTAllPlayers_007FA174,(char)param_1[9],
                     CONCAT22((short)((uint)param_1 >> 0x10),(short)param_1[0xc]),0xffff,param_1,
                     param_3,0);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  STAllPlayersC::_ChangeMD
            (g_sTAllPlayers_007FA174,1,(int *)param_1[9],
             CONCAT22((short)((uint)uVar1 >> 0x10),*(undefined2 *)((int)param_1 + 0x32)));
  /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
  STAllPlayersC::_ChangeDock
            (1,(int *)param_1[9],CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x32)));
  return uVar1;
}

