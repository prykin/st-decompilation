#include "../../pseudocode_runtime.h"


undefined4 FUN_004d89f0(char param_1,undefined4 param_2)

{
  if (param_1 == 0xff) {
    return 0;
  }
  g_packedRecords_A62x8[param_1].field16_0x23 = param_2;
  return param_2;
}

