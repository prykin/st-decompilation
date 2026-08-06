#include "../../pseudocode_runtime.h"


undefined4 FUN_004db020(int param_1,undefined4 param_2)

{
  STPlaySystemC *pSVar1;

  pSVar1 = g_playSystem_00802A38;
  if (g_packedRecords_A62x8[param_1].field1982_0xa0e == 0) {
    g_packedRecords_A62x8[param_1].field1982_0xa0e = 1;
    g_packedRecords_A62x8[param_1].field1983_0xa12 = param_2;
    g_packedRecords_A62x8[param_1].field1984_0xa16 = 0;
    g_packedRecords_A62x8[param_1].field1985_0xa1a = pSVar1->field_00E4;
  }
  return 0;
}

