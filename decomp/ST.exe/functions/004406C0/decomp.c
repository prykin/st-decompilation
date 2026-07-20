
int FUN_004406c0(char param_1)

{
  if (param_1 == 0xff) {
    return (uint)(uint3)(param_1 >> 7) << 8;
  }
  return CONCAT31(param_1 >> 7,g_playerRuntime[param_1].raceId);
}

