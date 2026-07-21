
/* [STUtilityFunctionApplier] player_race_id: maps a player id to its race id and preserves the -1
   sentinel
   Evidence: body pattern verified */

int GetPlayerRaceId(char playerId)

{
  if (playerId == 0xff) {
    return (uint)(uint3)(playerId >> 7) << 8;
  }
  return CONCAT31(playerId >> 7,g_playerRuntime[playerId].raceId);
}

