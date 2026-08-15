#include "../../pseudocode_runtime.h"


void FUN_00750fb0(AnonShape_00750FB0_15A3AC3E *param_1,undefined4 param_2,undefined4 param_3)

{
  AnonNested_AnonShape_00750FB0_15A3AC3E_000C_71DE54C3 *pAVar1;
  int iVar2;
  int local_EAX_64;
  int iVar1;
  int local_EAX_125;
  int iVar3;

  pAVar1 = (AnonNested_AnonShape_00750FB0_15A3AC3E_000C_71DE54C3 *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar1;
  pAVar1->field_000C = param_2;
  param_1->field_000C->field_0010 = param_3;
  param_1->field_000C->field_0040 = 0;
  param_1->field_000C->field_001C = nullptr;
  iVar3 = param_1->field_0008->field_0034 + param_1->field_000C->field_0024;
  local_EAX_64 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
  if (-1 < local_EAX_64) {
    iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
    iVar2 = *(int *)(iVar1 + 0x10 + iVar3);
    while (iVar2 != -1) {
      param_1->field_000C->field_001C = (uint *)((int)param_1->field_000C->field_001C + 1);
      iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,iVar2,
                           (int)param_1->field_000C->field_001C);
      local_EAX_125 =
           FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(local_EAX_125 + 0x10 + iVar3);
    }
  }
  *(int *)(&param_1->field_000C[1].field_0x0 + (int)param_1->field_000C->field_001C * 8) =
       (int)*(short *)(iVar3 + 8);
  return;
}

