#include "../../pseudocode_runtime.h"


short FUN_0043e460(char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;

  iVar7 = 0;
  sVar5 = 0;
  iVar1 = g_packedRecords_A62x8[param_1].field3_0x9;
  iVar2 = STField<int>(iVar1,0xC);
  sVar4 = 0;
  if (0 < iVar2) {
    do {
      sVar5 = sVar4;
      piVar3 = *(int **)(STField<int>(iVar1,0x1C) + iVar7 * 4);
      /* ST_CALLSITE[0043E499]: CALL dword ptr [EAX + 0xf8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((piVar3 != nullptr) && (iVar6 = (**(code **)(*piVar3 + 0xf8))(), iVar6 == 1)) {
        sVar5 = sVar5 + 1;
      }
      iVar7 = iVar7 + 1;
      sVar4 = sVar5;
    } while (iVar7 < iVar2);
  }
  return sVar5;
}

