#include "../../pseudocode_runtime.h"


int FUN_00753c80(AnonShape_00753C80_4C8E695D *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = -1;
  iVar2 = param_1->field_0010;
  iVar3 = param_1->field_0008->field_0034;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar5 = iVar4;
      sVar1 = param_1->field_000C->field_0034;
      if (sVar1 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (**(code **)&param_1->field_000C->field_0x8)(iVar5 + 0x18 + iVar3 + iVar2);
      }
      else {
        iVar4 = (int)sVar1;
      }
      iVar4 = iVar5 + 8 + iVar4;
    } while (iVar4 < param_2);
  }
  *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8) = iVar5;
  return iVar5;
}

