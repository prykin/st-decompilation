
uint * __thiscall FUN_0074b06d(void *this,int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
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
  *(uint *)((int)this + 0x100) = *param_2;
  *(uint *)((int)this + 0x104) = param_2[1];
  (**(code **)(**(int **)((int)this + 0x18) + 0xc))(*(int **)((int)this + 0x18),&local_18);
  bVar9 = local_18 < *(uint *)((int)this + 0x20);
  local_18 = local_18 - *(uint *)((int)this + 0x20);
  local_14 = (local_14 - *(int *)((int)this + 0x24)) - (uint)bVar9;
  puVar8 = (uint *)(local_18 - *param_2);
  uVar3 = (local_14 - param_2[1]) - (uint)(local_18 < *param_2);
  if ((uVar3 < 0x80000000) || ((-2 < (int)uVar3 && ((uint *)0xe2329aff < puVar8)))) {
    param_2 = puVar8;
    if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || ((uint *)0x1dcd6500 < puVar8)))) {
      param_2 = (uint *)0x1dcd6500;
    }
  }
  else {
    param_2 = (uint *)0xe2329b00;
  }
  iVar4 = (**(code **)(*(int *)this + 0xc0))(param_2,(int)param_2 >> 0x1f,local_18,local_14);
  local_8 = (uint)(iVar4 == 0);
  *(uint *)((int)this + 0xd4) = local_8;
  local_c = *(int *)((int)this + 0xf8);
  iVar4 = *param_3 - *puVar2;
  if ((local_c / 0x20 + local_c < iVar4) || (iVar4 < local_c - local_c / 0x20)) {
    *(int *)((int)this + 0xf4) = iVar4;
    *(int *)((int)this + 0xf8) = iVar4;
  }
  if (((local_8 != 0) && (iVar5 = (**(code **)(*param_1 + 0x3c))(param_1), iVar5 == 0)) ||
     (local_8 = 0, *(int *)((int)this + 0xd0) == -1)) {
    local_8 = 1;
  }
  if ((int)param_2 < 1) {
    iVar5 = *(int *)((int)this + 0xe8);
    if (((int)param_2 < iVar5) && (local_8 == 0)) {
      *(int *)((int)this + 0xe8) = iVar5 - iVar5 / 8;
    }
    else {
      *(uint **)((int)this + 0xe8) = param_2;
    }
  }
  else {
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  if ((int)param_2 < 0) {
    iVar5 = -(int)param_2;
  }
  else {
    iVar5 = 0;
  }
  local_10 = *(int *)((int)this + 0xf0) * 3;
  local_c = (local_10 + iVar5) / 4;
  piVar6 = (int *)(local_18 - *(uint *)((int)this + 0x120));
  iVar5 = (local_14 - *(int *)((int)this + 0x124)) - (uint)(local_18 < *(uint *)((int)this + 0x120))
  ;
  local_20 = piVar6;
  if ((-1 < iVar5) && ((0 < iVar5 || ((int *)0x989680 < piVar6)))) {
    local_20 = (int *)0x989680;
  }
  param_1 = local_20;
  if (*(int *)((int)this + 0xf4) < *(int *)((int)this + 0xdc) * 3) {
    if (*(int *)((int)this + 0xd4) == 0) {
      bVar9 = (int)param_2 * 2 < iVar4;
    }
    else {
      bVar9 = (int)param_2 <= iVar4 * 4;
    }
    if ((((!bVar9) && (*(int *)((int)this + 0xf0) < 0x13881)) && (iVar5 < 1)) &&
       ((iVar5 < 0 || (piVar6 < (int *)0x989681)))) {
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      *(int *)((int)this + 0xf0) = local_c;
      return (uint *)0x80004005;
    }
  }
  bVar9 = false;
  if (local_8 == 0) {
    if ((iVar4 / 0x10 + iVar4 < *(int *)((int)this + 0xf4)) && (iVar4 * -10 < (int)param_2)) {
      bVar9 = true;
    }
  }
  else {
    bVar9 = true;
  }
  if ((int)param_2 < -9000000) {
    bVar9 = false;
  }
  if (bVar9) {
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(int *)((int)this + 0xf0) = local_10 / 4;
    *(int *)((int)this + 0xf4) = ((int)local_20 + *(int *)((int)this + 0xf4) * 3) / 4;
    FUN_0074ad49(this,param_2,local_20);
    *(uint *)((int)this + 0x120) = local_18;
    *(uint *)((int)this + 0x124) = local_14;
    if ((int)param_2 < *(int *)((int)this + 0xe8)) {
      *(uint **)((int)this + 0xe8) = param_2;
    }
    param_3 = (uint *)0x0;
  }
  else {
    *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + 1;
    *(int *)((int)this + 0xf4) = iVar4;
    uVar3 = *(uint *)((int)this + 0xe8);
    if ((int)*(uint *)((int)this + 0xe8) < -iVar4) {
      uVar3 = -iVar4;
    }
    uVar1 = *puVar2;
    *puVar2 = *puVar2 + uVar3;
    puVar2[1] = puVar2[1] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar1,uVar3);
    param_3 = (uint *)(uint)(0 < -(int)param_2);
    *(int *)((int)this + 0xf0) = local_c;
    if (param_3 == (uint *)0x1) {
      uVar1 = *puVar2;
      uVar3 = puVar2[1];
      param_1 = (int *)(uVar1 - *(uint *)((int)this + 0x120));
      uVar7 = (uVar3 - *(int *)((int)this + 0x124)) - (uint)(uVar1 < *(uint *)((int)this + 0x120));
      if ((uVar7 < 0x80000000) || ((-2 < (int)uVar7 && ((int *)0xe2329aff < param_1)))) {
        if ((-1 < (int)uVar7) && ((0 < (int)uVar7 || ((int *)0x1dcd6500 < param_1)))) {
          param_1 = (int *)0x1dcd6500;
        }
      }
      else {
        param_1 = (int *)0xe2329b00;
      }
      *(uint *)((int)this + 0x120) = uVar1;
    }
    else {
      *(uint *)((int)this + 0x120) = local_18;
      uVar3 = local_14;
    }
    *(uint *)((int)this + 0x124) = uVar3;
    if (0 < -(int)param_2) {
      param_2 = (uint *)(*puVar2 - *(uint *)((int)this + 0x100));
      uVar3 = (puVar2[1] - *(int *)((int)this + 0x104)) -
              (uint)(*puVar2 < *(uint *)((int)this + 0x100));
      if ((uVar3 < 0x80000000) || ((-2 < (int)uVar3 && ((uint *)0xe2329aff < param_2)))) {
        if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || ((uint *)0x1dcd6500 < param_2)))) {
          param_2 = (uint *)0x1dcd6500;
        }
      }
      else {
        param_2 = (uint *)0xe2329b00;
      }
    }
    FUN_0074ad49(this,param_2,param_1);
  }
  return param_3;
}

