
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (12), none consume AL/AX, and every RET path defines full EAX; sites=004C7860 @ 004C78CF
   -> TEST TEST EAX,EAX | 004E3200 @ 004E32B2 -> TEST TEST EAX,EAX | 004E5990 @ 004E59BF -> MOV MOV
   ESI,EAX | 004E6280 @ 004E62AE -> TEST TEST EAX,EAX | 004E6FE0 @ 004E7057 -> TEST TEST EAX,EAX |
   004E70F0 @ 004E7190 -> TEST TEST EAX,EAX | 004E7230 @ 004E72E5 -> TEST TEST EAX,EAX | 004E75F0 @
   004E7663 -> TEST TEST EAX,EAX | 00516480 @ 00516726 -> TEST TEST EAX,EAX | 00516480 @ 005167BC ->
   TEST TEST EAX,EAX | 00516A40 @ 00516C3A -> TEST TEST EAX,EAX | 0067B520 @ 0067B64C -> TEST TEST
   EAX,EAX */

int FUN_004e5910(int param_1,uint param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    return (uint)((*(byte *)(param_1 * 0xa62 + 0x7f510b + ((int)(param_2 ^ 7) >> 3)) >>
                   ((param_2 ^ 7) & 7) & 1) != 0);
  }
  return 0;
}

