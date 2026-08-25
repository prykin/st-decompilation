#include "../../pseudocode_runtime.h"


void FUN_006c3340(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  tagRECT local_18;

  iVar2 = param_1;
  /* ST_CALLSITE[006C3357]: CALL dword ptr [0x0085be58] */
  GetClientRect(*(HWND *)(*(int *)(param_1 + 4) + 4),&local_18);
  piVar1 = (int *)(param_1 + 4);
  iVar6 = *(int *)(*piVar1 + 0x18);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = local_18.bottom;
  if (iVar6 < local_18.right) {
    local_18.right = iVar6;
  }
  iVar6 = *(int *)(*piVar1 + 0x1c);
  if (iVar6 < local_18.bottom) {
    param_1 = iVar6;
  }
  iVar3 = STField<int>(iVar2,0x40);
  STField<undefined4>(iVar2,0x1C) = 0;
  STField<undefined4>(iVar2,0x20) = 0;
  iVar6 = STField<int>(iVar2,0x3C);
  uVar5 = STField<uint>(iVar2,0x8) & 0x4000000;
  STField<int>(iVar2,0x24) = iVar6;
  STField<int>(iVar2,0x28) = iVar3;
  if (uVar5 == 0) {
    iVar4 = param_1;
    iVar7 = local_18.right;
    if ((STField<uint>(iVar2,0x8) & 4) != 0) goto LAB_006c33bb;
  }
  else {
    iVar6 = STField<int>(iVar2,0x14);
    iVar3 = STField<int>(iVar2,0x18);
  }
  iVar4 = iVar3;
  iVar7 = iVar6;
LAB_006c33bb:
  if (uVar5 == 0) {
    STField<undefined4>(iVar2,0xC) = 0;
    STField<undefined4>(iVar2,0x10) = 0;
    STField<LONG>(iVar2,0x14) = local_18.right;
    STField<int>(iVar2,0x18) = param_1;
  }
  else {
    iVar6 = STField<int>(iVar2,0x14);
    if (local_18.right < iVar6) {
      STField<LONG>(iVar2,0x14) = local_18.right;
      STField<int>(iVar2,0xC) = STField<int>(iVar2,0xC) + (iVar6 - local_18.right) / 2;
    }
    else if (param_1 < STField<int>(iVar2,0x18)) {
      STField<int>(iVar2,0x10) = STField<int>(iVar2,0x10) + (STField<int>(iVar2,0x18) - param_1) / 2;
      STField<int>(iVar2,0x18) = param_1;
    }
  }
  iVar6 = STField<int>(iVar2,0x14);
  if (iVar6 < iVar7) {
    STField<int>(iVar2,0x24) = iVar6;
    STField<int>(iVar2,0x1C) = (iVar7 - iVar6) / 2;
  }
  iVar6 = STField<int>(iVar2,0x18);
  if (iVar6 < iVar4) {
    STField<int>(iVar2,0x28) = iVar6;
    STField<int>(iVar2,0x20) = (iVar4 - iVar6) / 2;
  }
  if ((((byte *)iVar2)[8] & 4) == 0) {
    iVar6 = STField<int>(iVar2,0x24);
    if (iVar7 < iVar6) {
      STField<int>(iVar2,0x24) = iVar7;
      STField<int>(iVar2,0x1C) = STField<int>(iVar2,0x1C) + (iVar6 - iVar7) / 2;
    }
    iVar6 = STField<int>(iVar2,0x28);
    if (iVar4 < iVar6) {
      STField<int>(iVar2,0x28) = iVar4;
      STField<int>(iVar2,0x20) = STField<int>(iVar2,0x20) + (iVar6 - iVar4) / 2;
    }
  }
  return;
}

