#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E2AD0 -> 004E5EB0 @ 004E2B05; /TLOBaseTy+0x24 */

void FUN_004e5eb0(byte *param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)param_1, 0x313) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
  }
  return;
}

