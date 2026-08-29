#include "../../pseudocode_runtime.h"


void FUN_0075df10(RecoveredRecordView_0075DF10_5D45A386 *param_1)

{
  AnonNested_0075DF10_01B2_1F0F9C79 *pAVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  pAVar1 = param_1->field_01B2;
  /* ST_CALLSITE[0075DF2A]: CALL dword ptr [EAX] */
  uVar2 = (*STField<code *>(param_1->field_0000,0x0000))(param_1,1,0x400);
  pAVar1->field_0010 = uVar2;
  /* ST_CALLSITE[0075DF39]: CALL dword ptr [ECX] */
  uVar2 = (*STField<code *>(param_1->field_0000,0x0000))(param_1,1,0x400);
  pAVar1->field_0014 = uVar2;
  /* ST_CALLSITE[0075DF48]: CALL dword ptr [EDX] */
  uVar2 = (*STField<code *>(param_1->field_0000,0x0000))(param_1,1,0x400);
  pAVar1->field_0018 = uVar2;
  /* ST_CALLSITE[0075DF57]: CALL dword ptr [EAX] */
  uVar2 = (*STField<code *>(param_1->field_0000,0x0000))(param_1,1,0x400);
  pAVar1->field_001C = uVar2;
  iVar3 = 0;
  local_8 = 0x5b6900;
  uint param_1_after_write = 0xff1daf00; /* compiler stack-slot lifetime split */
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(pAVar1->field_0010 + iVar3) = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x166e9;
    *(int *)(pAVar1->field_0014 + iVar3) = (int)param_1_after_write >> 0x10;
    *(int *)(pAVar1->field_0018 + iVar3) = local_8;
    local_8 = local_8 + -0xb6d2;
    *(int *)(pAVar1->field_001C + iVar3) = iVar4;
    iVar4 = iVar4 + -0x581a;
    param_1_after_write = param_1_after_write + 0x1C5A2;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}

