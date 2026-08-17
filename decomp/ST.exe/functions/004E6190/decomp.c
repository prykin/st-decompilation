#include "../../pseudocode_runtime.h"


void FUN_004e6190(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    puVar1 = (uint *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327));
    uVar2 = *puVar1 + 1;
    *puVar1 = uVar2;
    thunk_FUN_004e6310((byte *)param_1,param_2,uVar2);
  }
  return;
}

