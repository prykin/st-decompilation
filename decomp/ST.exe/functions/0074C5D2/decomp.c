#include "../../pseudocode_runtime.h"


int FUN_0074c5d2(AnonShape_0074C5D2_07BD206F *param_1,int *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1->field_0040 + 0x74);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = FUN_00748721((AnonShape_00748721_F11EED2A *)param_1,param_2);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)param_1->field_0040 + 0x54))(param_2);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

