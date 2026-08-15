#include "../../pseudocode_runtime.h"


void FUN_00750f20(AnonShape_00750F20_F8C16F98 *param_1,undefined4 param_2,undefined4 param_3)

{
  AnonNested_AnonShape_00750F20_F8C16F98_000C_F63CABFC *pAVar1;
  int *piVar2;
  int iVar3;

  pAVar1 = (AnonNested_AnonShape_00750F20_F8C16F98_000C_F63CABFC *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar1;
  pAVar1->field_000C = param_2;
  param_1->field_000C->field_0010 = param_3;
  param_1->field_000C->field_0040 = 0;
  param_1->field_000C->field_0044 = 0xffffffff;
  param_1->field_000C->field_001C = nullptr;
  param_1->field_0010 = param_1->field_000C->field_0024;
  piVar2 = (int *)(param_1->field_0008->field_0034 + param_1->field_000C->field_0024 + 4);
  iVar3 = *piVar2;
  while (iVar3 != -1) {
    param_1->field_000C->field_001C = (uint *)((int)param_1->field_000C->field_001C + 1);
    iVar3 = FUN_00753b80(param_1,*piVar2,(int)param_1->field_000C->field_001C);
    piVar2 = (int *)(iVar3 + 4);
    (&param_1->field_000C->field_0044)[(int)param_1->field_000C->field_001C * 2] = 0xffffffff;
    iVar3 = *piVar2;
  }
  return;
}

