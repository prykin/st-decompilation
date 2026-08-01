
int FUN_004357b0(char playerId,AiPlrClassTy *aiPlayer)

{
  *(AiPlrClassTy **)&g_playerRuntime[playerId].field_0x1 = aiPlayer;
  return 0;
}

