
void FUN_004e5f20(int param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    pbVar1 = (byte *)(param_1 * 0xa62 + 0x7f5133 + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << ((param_2 ^ 7) & 7));
  }
  return;
}

