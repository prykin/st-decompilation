
int * __thiscall FUN_0074cb34(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1,local_20,local_18);
  bVar5 = iVar2 == 0;
  local_c = *(int **)(*(int *)((int)this + 0x90) + 0x98);
  iVar2 = (**(code **)(*local_c + 0x1c))
                    (local_c,&param_1,-(uint)bVar5 & (uint)local_20,-(uint)bVar5 & (uint)local_18,
                     *(int *)((int)this + 0x54) != 0);
  if (iVar2 < 0) {
LAB_0074cbe0:
    param_1 = (int *)0x0;
  }
  else {
    iVar2 = (**(code **)*param_1)(param_1,&DAT_007a1b70,&local_8);
    if (iVar2 < 0) {
      if (bVar5) {
        (**(code **)(*param_1 + 0x18))(param_1,local_20,local_18);
      }
      iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x20))(param_1,1);
      }
      iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
      if ((iVar2 == 0) || (*(int *)((int)this + 0x54) != 0)) {
        (**(code **)(*param_1 + 0x40))(param_1,1);
      }
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x28))(param_1,1);
      }
      iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,&local_c);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x38))(param_1,local_c);
        FUN_0074bc50(local_c);
      }
    }
    else {
      iVar2 = (**(code **)(*local_8 + 0x50))(local_8,0x28,*(int *)((int)this + 0x8c) + 0xa8);
      (**(code **)(*local_8 + 8))(local_8);
      if (iVar2 < 0) {
        (**(code **)(*param_1 + 8))(param_1);
        goto LAB_0074cbe0;
      }
    }
    *(undefined4 *)((int)this + 0x54) = 0;
    iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,local_30,local_28);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x48))(param_1,local_30,local_28);
    }
    uVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    (**(code **)(*param_1 + 0x30))(param_1,uVar3);
    (**(code **)(*piVar1 + 0x10))(piVar1);
    (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
    (**(code **)(*param_1 + 0xc))(param_1,&local_10);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_10 = *local_c;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)local_10 = (char)*local_c;
      local_c = (int *)((int)local_c + 1);
      local_10 = (int *)((int)local_10 + 1);
    }
  }
  return param_1;
}

