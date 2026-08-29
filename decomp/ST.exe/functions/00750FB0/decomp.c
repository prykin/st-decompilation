#include "../../pseudocode_runtime.h"


void FUN_00750fb0(AnonShape_00750FB0_15A3AC3E *param_1,undefined4 param_2,undefined4 param_3)

{
  AnonNested_AnonShape_00750FB0_15A3AC3E_000C_71DE54C3 *pAVar1;
  int iVar2;
  int local_EAX_64;
  int iVar1;
  int local_EAX_125;
  RecoveredRecord_00755D40_97E6B3C8 *pRVar3;

  pAVar1 = (AnonNested_AnonShape_00750FB0_15A3AC3E_000C_71DE54C3 *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar1;
  pAVar1->field_000C = param_2;
  param_1->field_000C->field_0010 = param_3;
  param_1->field_000C->field_0040 = 0;
  param_1->field_000C->field_001C = nullptr;
  pRVar3 = (RecoveredRecord_00755D40_97E6B3C8 *)
           (param_1->field_0008->field_0034 + param_1->field_000C->field_0024);

  local_EAX_64 = FUN_00753c80((RecoveredRecordView_00753C80_637B4E8C *)param_1,
                              (int)pRVar3->field_0008);
  if (-1 < local_EAX_64) {

    iVar1 = FUN_00753c80((RecoveredRecordView_00753C80_637B4E8C *)param_1,(int)pRVar3->field_0008);
    iVar2 = *(int *)(&pRVar3[1].field_0x6 + iVar1);
    while (iVar2 != -1) {
      param_1->field_000C->field_001C = (uint *)((int)param_1->field_000C->field_001C + 1);
      pRVar3 = FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,iVar2,
                            (int)param_1->field_000C->field_001C);

      local_EAX_125 =
           FUN_00753c80((RecoveredRecordView_00753C80_637B4E8C *)param_1,(int)pRVar3->field_0008);
      iVar2 = *(int *)(&pRVar3[1].field_0x6 + local_EAX_125);
    }
  }
  *(int *)(&param_1->field_000C[1].field_0x0 + (int)param_1->field_000C->field_001C * 8) =
       (int)pRVar3->field_0008;
  return;
}

