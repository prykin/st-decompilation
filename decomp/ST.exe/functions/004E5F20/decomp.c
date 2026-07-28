
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E2C30 -> 004E5F20 @ 004E2CED; /TLOBaseTy+0x24 | 004E3120 -> 004E5F20 @ 004E3147;
   /TLOBaseTy+0x24

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_004e5f20(byte *param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    pbVar1 = (byte *)((int)param_1 * 0xa62 + 0x7f5133 + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << ((param_2 ^ 7) & 7));
  }
  return;
}

