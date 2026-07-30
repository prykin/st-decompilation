
/* [STUtilityFunctionApplier] player_race_id: maps a player id to its race id; the explicit
   EAX==0xff machine guard clears AL and returns zero
   Evidence: body pattern verified */

int GetPlayerRaceId(char playerId)

{
  if (playerId == 0xff) {
    return 0; /* cmp eax,0xff; xor al,al */
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT31(playerId >> 7,g_playerRuntime[playerId].raceId);
}

