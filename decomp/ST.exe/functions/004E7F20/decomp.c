#include "../../pseudocode_runtime.h"


undefined4 FUN_004e7f20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if ((&DAT_007e53bc)[param_2] == '\0') {
    return 0;
  }
  iVar2 = 0;
  while (((iVar2 == param_1 ||
          (*(uint *)(iVar2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xA22)) < g_playSystem_00802A38->field_00E4))
         || (iVar1 = thunk_FUN_004e60d0(iVar2,param_2), iVar1 < param_3))) {
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}

