
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (15), none consume AL/AX, and every RET path defines full EAX; sites=004BEA70 @ 004C0484
   -> TEST TEST EAX,EAX | 004BEA70 @ 004C0557 -> TEST TEST EAX,EAX | 004C7860 @ 004C7A0C -> TEST
   TEST EAX,EAX | 004E3200 @ 004E3313 -> TEST TEST EAX,EAX | 004E3200 @ 004E34C3 -> TEST TEST
   EAX,EAX | 004E5AF0 @ 004E5B16 -> TEST TEST EAX,EAX | 004E5B80 @ 004E5BA6 -> TEST TEST EAX,EAX |
   004E70F0 @ 004E71A0 -> TEST TEST EAX,EAX | 004E7230 @ 004E72F5 -> TEST TEST EAX,EAX | 004E75F0 @
   004E7672 -> TEST TEST EAX,EAX | 00516A40 @ 00516CB0 -> TEST TEST EAX,EAX | 00516A40 @ 00516E79 ->
   TEST TEST EAX,EAX | 0066ACC0 @ 0066F35F -> MOV MOV ESI,EAX | 0067B520 @ 0067B623 -> TEST TEST
   EAX,EAX | 0067B520 @ 0067B6CB -> TEST TEST EAX,EAX */

int FUN_004e5f90(int param_1,uint param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    return (uint)((*(byte *)(param_1 * 0xa62 + 0x7f5133 + ((int)(param_2 ^ 7) >> 3)) >>
                   ((param_2 ^ 7) & 7) & 1) != 0);
  }
  return 0;
}

