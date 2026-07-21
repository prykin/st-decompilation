
undefined1 FUN_004e6140(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    return *(undefined1 *)(param_2 + 0x7f555b + param_1 * 0xa62);
  }
  return 0;
}

