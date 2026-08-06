#include "../../pseudocode_runtime.h"


undefined4 FUN_004db0f0(int param_1)

{
  STPlaySystemC *pSVar1;

  pSVar1 = g_playSystem_00802A38;
  if (g_packedRecords_A62x8[param_1].field1982_0xa0e == 2) {
    g_packedRecords_A62x8[param_1].field1982_0xa0e = 3;
    g_packedRecords_A62x8[param_1].field1985_0xa1a = pSVar1->field_00E4;
  }
  return 0;
}

