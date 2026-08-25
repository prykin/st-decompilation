#include "../../pseudocode_runtime.h"


uint * __thiscall FUN_0074b06d(void *this,int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint piVar6;
  uint uVar6;
  uint puVar8;
  bool bVar7;
  int *local_20;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;

  puVar2 = param_2;
  uVar3 = param_2[1];
  uVar1 = *param_2;
  if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || (79999 < uVar1)))) {
    *param_2 = uVar1 - 80000;
    param_2[1] = uVar3 - (uVar1 < 80000);
    uVar3 = *param_3;
    *param_3 = *param_3 - 80000;
    param_3[1] = (param_3[1] - 1) + (uint)(79999 < uVar3);
  }
  STField<uint>(this,0x100) = *param_2;
  STField<uint>(this,0x104) = param_2[1];
  /* ST_CALLSITE[0074B0C1]: CALL dword ptr [ECX + 0xc] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*STField<int *>(this,0x18) + 0xc))(STField<int *>(this,0x18),&local_18);
  bVar7 = local_18 < STField<uint>(this,0x20);
  local_18 = local_18 - STField<uint>(this,0x20);
  local_14 = (local_14 - STField<int>(this,0x24)) - (uint)bVar7;
  puVar8 = local_18 - *param_2;
  uVar3 = (local_14 - param_2[1]) - (uint)(local_18 < *param_2);
  if ((uVar3 < 0x80000000) || ((-2 < (int)uVar3 && (0xe2329aff < puVar8)))) {
    auto param_2_after_write = (uint *)puVar8; /* compiler stack-slot lifetime split */
    if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || (500000000 < puVar8)))) {
      param_2_after_write = (uint *)0x1dcd6500;
    }
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (uint *)0xe2329b00;
  }
  /* ST_CALLSITE[0074B120]: CALL dword ptr [EAX + 0xc0] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar4 = (**(code **)(*(int *)this + 0xc0))(param_2,(int)param_2 >> 0x1f,local_18,local_14);
  local_8 = (uint)(iVar4 == 0);
  STField<uint>(this,0xd4) = local_8;
  local_c = STField<int>(this,0xf8);
  iVar4 = *param_3 - *puVar2;
  if ((local_c / 0x20 + local_c < iVar4) || (iVar4 < local_c - local_c / 0x20)) {
    STField<int>(this,0xf4) = iVar4;
    STField<int>(this,0xf8) = iVar4;
  }
  /* ST_CALLSITE[0074B178]: CALL dword ptr [ECX + 0x3c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if (((local_8 != 0) && (iVar5 = (**(code **)(*param_1 + 0x3c))(param_1), iVar5 == 0)) ||
     (local_8 = 0, STField<int>(this,0xd0) == -1)) {
    local_8 = 1;
  }
  if ((int)param_2 < 1) {
    iVar5 = STField<int>(this,0xe8);
    if (((int)param_2 < iVar5) && (local_8 == 0)) {
      STField<int>(this,0xe8) = iVar5 - iVar5 / 8;
    }
    else {
      STField<uint *>(this,0xe8) = param_2;
    }
  }
  else {
    STField<undefined4>(this,0xe8) = 0;
  }
  if ((int)param_2 < 0) {
    iVar5 = -(int)param_2;
  }
  else {
    iVar5 = 0;
  }
  local_10 = STField<int>(this,0xf0) * 3;
  local_c = (local_10 + iVar5) / 4;
  piVar6 = local_18 - STField<uint>(this,0x120);
  iVar5 = (local_14 - STField<int>(this,0x124)) - (uint)(local_18 < STField<uint>(this,0x120));
  local_20 = (int *)piVar6;
  if ((-1 < iVar5) && ((0 < iVar5 || (10000000 < piVar6)))) {
    local_20 = (int *)0x989680;
  }
  auto param_1_after_write = local_20; /* compiler stack-slot lifetime split */
  if (STField<int>(this,0xf4) < STField<int>(this,0xdc) * 3) {
    if (STField<int>(this,0xd4) == 0) {
      bVar7 = (int)param_2 * 2 < iVar4;
    }
    else {
      bVar7 = (int)param_2 <= iVar4 * 4;
    }
    if ((((!bVar7) && (STField<int>(this,0xf0) < 0x13881)) && (iVar5 < 1)) &&
       ((iVar5 < 0 || (piVar6 < 0x989681)))) {
      STField<undefined4>(this,0xd0) = 0xffffffff;
      STField<int>(this,0xf0) = local_c;
      return (uint *)0x80004005;
    }
  }
  bVar7 = false;
  if (local_8 == 0) {
    if ((iVar4 / 0x10 + iVar4 < STField<int>(this,0xf4)) && (iVar4 * -10 < (int)param_2)) {
      bVar7 = true;
    }
  }
  else {
    bVar7 = true;
  }
  if ((int)param_2 < -9000000) {
    bVar7 = false;
  }
  if (bVar7) {
    STField<undefined4>(this,0xd0) = 0;
    STField<int>(this,0xf0) = local_10 / 4;
    STField<int>(this,0xf4) = ((int)local_20 + STField<int>(this,0xf4) * 3) / 4;
    FUN_0074ad49(this,param_2,local_20);
    STField<uint>(this,0x120) = local_18;
    STField<uint>(this,0x124) = local_14;
    if ((int)param_2 < STField<int>(this,0xe8)) {
      STField<uint *>(this,0xe8) = param_2;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = nullptr;
  }
  else {
    STField<int>(this,0xd0) = STField<int>(this,0xd0) + 1;
    STField<int>(this,0xf4) = iVar4;
    uVar3 = STField<uint>(this,0xe8);
    if ((int)STField<uint>(this,0xe8) < -iVar4) {
      uVar3 = -iVar4;
    }
    uVar1 = *puVar2;
    *puVar2 = *puVar2 + uVar3;
    puVar2[1] = puVar2[1] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar1,uVar3);
    param_3 = (uint *)(uint)(0 < -(int)param_2);
    STField<int>(this,0xf0) = local_c;
    if (param_3 == (uint *)0x1) {
      uVar1 = *puVar2;
      uVar3 = puVar2[1];
      param_1_after_write = (int *)(uVar1 - STField<uint>(this,0x120));
      uVar6 = (uVar3 - STField<int>(this,0x124)) - (uint)(uVar1 < STField<uint>(this,0x120));
      if ((uVar6 < 0x80000000) || ((-2 < (int)uVar6 && ((int *)0xe2329aff < param_1_after_write)))) {
        if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || ((int *)0x1dcd6500 < param_1_after_write)))) {
          param_1_after_write = (int *)0x1dcd6500;
        }
      }
      else {
        param_1_after_write = (int *)0xe2329b00;
      }
      STField<uint>(this,0x120) = uVar1;
    }
    else {
      STField<uint>(this,0x120) = local_18;
      uVar3 = local_14;
    }
    STField<uint>(this,0x124) = uVar3;
    if (0 < -(int)param_2) {
      param_2 = (uint *)(*puVar2 - STField<uint>(this,0x100));
      uVar3 = (puVar2[1] - STField<int>(this,0x104)) -
              (uint)(*puVar2 < STField<uint>(this,0x100));
      if ((uVar3 < 0x80000000) || ((-2 < (int)uVar3 && ((uint *)0xe2329aff < param_2)))) {
        if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || ((uint *)0x1dcd6500 < param_2)))) {
          param_2 = (uint *)0x1dcd6500;
        }
      }
      else {
        param_2 = (uint *)0xe2329b00;
      }
    }
    FUN_0074ad49(this,param_2,param_1_after_write);
  }
  return param_3;
}

