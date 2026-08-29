#include "../../pseudocode_runtime.h"


void __fastcall FUN_005fb100(RecoveredRecordView_005FB100_73CA5C15 *param_1)

{
  int iVar1;
  int uVar2;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar5 = 0;
  iVar1 = (int)param_1->field_0045;
  iVar2 = (int)param_1->field_0043;
  iVar3 = (int)param_1->field_0041;
  iVar4 = 0;

  uVar2 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);
  thunk_FUN_006377b0(uVar2,iVar4,iVar3,iVar2,iVar1,uVar5);
  uVar5 = g_playSystem_00802A38->field_00E4;
  param_1->field_02DD = 7;
  param_1->field_02E1 = uVar5 + 0x15;
  return;
}

