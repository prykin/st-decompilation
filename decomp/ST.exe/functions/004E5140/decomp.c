#include "../../pseudocode_runtime.h"


void __cdecl FUN_004e5140(int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    g_packedRecords_A62x8[param_1].field393_0x313 = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x317 = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x31b = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x31f = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x323 = 0;
    g_packedRecords_A62x8[param_1].field1600_0x7d6 = 0;
  }
  return;
}

