
bool FUN_004e5c40(int param_1,uint param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    return (*(byte *)(param_1 * 0xa62 + 0x7f511f + ((int)(param_2 ^ 7) >> 3)) >> ((param_2 ^ 7) & 7)
           & 1) != 0;
  }
  return false;
}

