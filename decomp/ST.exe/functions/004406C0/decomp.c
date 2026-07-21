
/* [STUtilityFunctionApplier] player_race_id: maps a player id to its race id and preserves the -1
   sentinel
   Evidence: body pattern verified */

int GetPlayerRaceId(char playerId)

{
  if (playerId == 0xff) {
    return (uint)(uint3)(playerId >> 7) << 8;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT31(playerId >> 7,g_playerRuntime[playerId].raceId);
}

