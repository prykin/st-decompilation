
undefined4 FUN_004e6010(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 0x6a)) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    return *(undefined4 *)(param_2 * 4 + 0x7f53b3 + param_1 * 0xa62);
  }
  return 0;
}

