
void __fastcall FUN_00419cf0(int *param_1,undefined4 param_2,uint param_3)

{
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  STAllPlayersC::RegisterObject
            (g_sTAllPlayers_007FA174,(char)param_1[9],
             CONCAT22((short)((uint)param_2 >> 0x10),(short)param_1[0xc]),param_3,param_1,1,0);
  return;
}

