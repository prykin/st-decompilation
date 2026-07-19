
undefined4 __thiscall
FUN_0074af26(void *this,uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint auStack_40 [2];
  uint local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_3;
  local_8 = param_4;
  iVar3 = *(int *)((int)this + 0xf4);
  if (iVar3 < 0) {
    local_1c[0] = 0;
  }
  else {
    local_1c[0] = (uint)(iVar3 <= *(int *)((int)this + 0xdc) * 2);
  }
  local_1c[1] = 1000;
  if (-1 < iVar3) {
    if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
      iVar5 = *(int *)((int)this + 0xf0);
      if ((20000 < iVar5) &&
         ((0x7fffffff < param_2 && (((int)param_2 < -1 || (param_1 < 0xffffb1e0)))))) {
        if ((iVar5 < iVar3) && (iVar5 < iVar3 + 20000)) {
          local_1c[1] = (iVar3 / ((iVar3 - iVar5) + 20000)) * 1000;
        }
        else {
          local_1c[1] = 2000;
        }
        if (2000 < (int)local_1c[1]) {
          local_1c[1] = 2000;
        }
      }
    }
    else {
      auStack_40[1] = 0x74af8d;
      uVar8 = Library::MSVCRT::__alldiv(param_1,param_2,10000,0);
      local_1c[1] = 1000 - (int)uVar8;
      if ((int)local_1c[1] < 500) {
        local_1c[1] = 500;
      }
    }
  }
  uVar2 = *(int *)((int)this + 0xdc) / 2;
  local_1c[2] = uVar2 + param_1;
  local_1c[3] = ((int)uVar2 >> 0x1f) + param_2 + (uint)CARRY4(uVar2,param_1);
  if (*(int *)((int)this + 0xac) == 0) {
    iVar3 = (**(code **)**(undefined4 **)(*(int *)((int)this + 0x78) + 0x18))();
    if (-1 < iVar3) {
      *(undefined4 *)((int)this + 0xac) = 0;
    }
  }
  piVar1 = *(int **)((int)this + 0xac);
  if (piVar1 == (int *)0x0) {
    uVar4 = 1;
  }
  else {
    iVar3 = *piVar1;
    puVar6 = local_1c;
    puVar7 = auStack_40;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar4 = (**(code **)(iVar3 + 0xc))(piVar1,-(uint)(this != (void *)0x0) & (int)this + 0xcU);
  }
  return uVar4;
}

