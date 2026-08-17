#include "../../pseudocode_runtime.h"


undefined4 FUN_004e7d70(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;

  if ((-1 < param_1) && (param_1 < 8)) {
    /* ST_CALLSITE[004E7D86]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte((char)param_1);
    piVar2 = (int *)(&PTR_DAT_007c0dc8)[bVar1 - 1];
    if (*piVar2 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + 5 + (int)piVar2) == 0) {
          thunk_FUN_004e76e0(param_1,*(uint **)(iVar3 + (int)piVar2),
                             *(byte *)(iVar3 + 4 + (int)piVar2));
        }
        piVar2 = (int *)(&PTR_DAT_007c0dc8)[bVar1 - 1];
        iVar3 = iVar3 + 0x19;
      } while (*(int *)(iVar3 + (int)piVar2) != 0);
    }
    return 0;
  }
  return 0;
}

