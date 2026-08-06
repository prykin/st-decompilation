#include "../../pseudocode_runtime.h"


undefined4 FUN_004d80d0(char param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7DA));
}

