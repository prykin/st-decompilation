#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00650a20(RecoveredRecordView_00650A20_3149A900 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(short *)param_1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0x32;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if ((-1 < *(int *)&param_1->field_0x10) && (*(int *)&param_1->field_0x10 < 3)) {
    return 1;
  }
  return 0;
}

