#include "../../pseudocode_runtime.h"


int FUN_006d5820(AnonShape_006D5820_330472AB *param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar2;
  int *piVar3;

  lpCriticalSection = param_1->field_004C;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1->field_0048;
  if (*(int *)(iVar1 + 0x30c) == 0) {
    iVar2 = FUN_0074862e((int)param_1,param_2);
    LeaveCriticalSection(lpCriticalSection);
    return iVar2;
  }
  if (iVar1 == -0x294) {
    piVar3 = nullptr;
  }
  else {
    piVar3 = (int *)(iVar1 + 0x2a0);
  }
  piVar2 = (int *)param_1->field_0004;
  if (piVar2 != piVar3) {
    if (piVar2 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (param_1->field_0048 == -0x294) {
      piVar3 = nullptr;
    }
    else {
      piVar3 = (int *)(param_1->field_0048 + 0x2a0);
    }
    param_1->field_0004 = piVar3;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1->field_0004 + 4))((int *)param_1->field_0004);
  *param_2 = param_1->field_0004;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

