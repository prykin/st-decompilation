#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_004e5d50(int param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x2FF) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
  }
  return;
}

