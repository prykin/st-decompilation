#include "../../pseudocode_runtime.h"


void FUN_004e5af0(int param_1,uint param_2,int param_3)

{
  int iVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {

    iVar1 = thunk_FUN_004e5f90(param_1,param_2);
    if (iVar1 == 0) {
      thunk_FUN_004e5a10(param_1,param_2);

      iVar1 = thunk_FUN_004e6140(param_1,param_2);
      if (iVar1 < param_3) {
        *(char *)(param_2 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B)) = (char)param_3;
      }
    }
  }
  return;
}

