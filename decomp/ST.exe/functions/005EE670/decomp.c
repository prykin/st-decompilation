#include "../../pseudocode_runtime.h"


void __fastcall FUN_005ee670(RecoveredRecordView_005EE670_8C60353D *param_1)

{
  int iVar1;

  /* ST_CALLSITE[005EE67A]: CALL dword ptr [EAX + 0x124] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(param_1->field_0000 + 0x124))(2000);
  if (iVar1 != 0) {

    thunk_FUN_005ec9f0(1);
    param_1->field_030E = 0xff;
    param_1->field_030F = 0;
    param_1->field_030D = 1;
    param_1->field_023A = 5;
  }
  return;
}

