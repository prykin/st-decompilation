
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C7860 -> 004E5C40 @ 004C7A3B; /TLOBaseTy+0x24 | 004E68A0 -> 004E5C40 @ 004E69AF;
   FUN_004e68a0 parameter param_1 | 004E6B40 -> 004E5C40 @ 004E6BC4; FUN_004e6b40 parameter param_1
   | 004E6D00 -> 004E5C40 @ 004E6DAA; FUN_004e6d00 parameter param_1 */

bool FUN_004e5c40(byte *param_1,uint param_2)

{
  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    return (*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)param_1, 0x2FF) + ((int)(param_2 ^ 7) >> 3)) >>
            ((param_2 ^ 7) & 7) & 1) != 0;
  }
  return false;
}

