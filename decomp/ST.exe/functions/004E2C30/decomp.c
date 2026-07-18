
undefined4 __thiscall FUN_004e2c30(void *this,uint param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var_00;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  short local_46;
  byte local_40 [20];
  undefined4 local_2c [5];
  byte *local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  uVar1 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),param_1);
  iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_1);
  if (CONCAT31(extraout_var,uVar1) <= iVar2) goto LAB_004e2fe4;
  iVar2 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\f');
  if (iVar2 != *(int *)(*(int *)((int)this + 0x1f5) + 0x1c4)) {
    return 0;
  }
  local_10 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_1);
  iVar2 = *(int *)((int)this + 0x24);
  iVar3 = iVar2 * 0xa62;
  puVar7 = (undefined4 *)((int)&DAT_007f510b + iVar3);
  puVar8 = local_2c;
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = (undefined4 *)((int)&DAT_007f511f + iVar3);
  pbVar9 = local_40;
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    pbVar9 = pbVar9 + 4;
  }
  thunk_FUN_004e6310(iVar2,param_1,local_10 + 1);
  thunk_FUN_004e5f20(*(int *)((int)this + 0x24),param_1);
  if (DAT_008117bc != (undefined4 *)0x0) {
    iVar2 = *(int *)((int)this + 0x24);
    puVar7 = local_60;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_4a = *(undefined2 *)((int)this + 0x32);
    local_4c = *(undefined2 *)((int)this + 0x24);
    local_50 = 0x5de7;
    local_48 = (undefined2)param_1;
    uVar4 = thunk_FUN_004e60d0(iVar2,param_1);
    local_46 = (short)uVar4;
    (**(code **)*DAT_008117bc)(local_60);
    puVar7 = local_60;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_4c = *(undefined2 *)((int)this + 0x24);
    local_14 = local_2c;
    local_50 = 0x5dea;
    local_10 = 0;
    do {
      uVar5 = local_10;
      if (((((*(byte *)((int)local_14 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) !=
             0) && (local_18 = local_40,
                   (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) == 0)) &&
          (local_18 = (byte *)((int)&DAT_007f510b + *(int *)((int)this + 0x24) * 0xa62),
          (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) != 0)) &&
         (local_18 = (byte *)((int)&DAT_007f511f + *(int *)((int)this + 0x24) * 0xa62),
         (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) != 0)) {
        uVar1 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),local_10);
        iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),uVar5);
        if (iVar2 < CONCAT31(extraout_var_00,uVar1)) {
          local_48 = (undefined2)uVar5;
          uVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),uVar5);
          local_46 = (short)uVar4 + 1;
          (**(code **)*DAT_008117bc)(local_60);
        }
      }
      local_10 = uVar5 + 1;
    } while ((int)local_10 < 0x9b);
  }
  if (*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d))
  goto LAB_004e2fe4;
  thunk_FUN_0052af50(0,*(float *)((int)this + 0x1f9),*(float *)((int)this + 0x1fd));
  piVar11 = &local_c;
  piVar10 = &local_8;
  local_8 = 0;
  local_c = 0;
  uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  thunk_FUN_004e6e10(uVar5 & 0xff,param_1,piVar10,piVar11);
  if (local_8 != 0) {
    uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 1) {
      iVar2 = *(int *)this;
      uVar4 = 0x5f;
LAB_004e2efc:
      (**(code **)(iVar2 + 0x90))(6,uVar4);
    }
    else if (uVar5 == 2) {
      (**(code **)(*(int *)this + 0x90))(6,0x60);
    }
    else if (uVar5 == 3) {
      iVar2 = *(int *)this;
      uVar4 = 0x61;
      goto LAB_004e2efc;
    }
  }
  if (local_c != 0) {
    uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 1) {
      iVar2 = *(int *)this;
      uVar4 = 0x5c;
LAB_004e2f42:
      (**(code **)(iVar2 + 0x90))(6,uVar4);
    }
    else if (uVar5 == 2) {
      (**(code **)(*(int *)this + 0x90))(6,0x5d);
    }
    else if (uVar5 == 3) {
      iVar2 = *(int *)this;
      uVar4 = 0x5e;
      goto LAB_004e2f42;
    }
  }
  if ((local_8 == 0) && (local_c == 0)) {
    uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 1) {
      iVar2 = *(int *)this;
      uVar4 = 0x59;
LAB_004e2f8d:
      (**(code **)(iVar2 + 0x90))(6,uVar4);
    }
    else if (uVar5 == 2) {
      (**(code **)(*(int *)this + 0x90))(6,0x5a);
    }
    else if (uVar5 == 3) {
      iVar2 = *(int *)this;
      uVar4 = 0x5b;
      goto LAB_004e2f8d;
    }
  }
  uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    iVar2 = *(int *)this;
    uVar4 = 0x20d;
  }
  else {
    if (uVar5 == 2) {
      (**(code **)(*(int *)this + 0x90))(4,0x2d5);
      goto LAB_004e2fe4;
    }
    if (uVar5 != 3) goto LAB_004e2fe4;
    iVar2 = *(int *)this;
    uVar4 = 0x390;
  }
  (**(code **)(iVar2 + 0x90))(4,uVar4);
LAB_004e2fe4:
  *(undefined4 *)((int)this + 0x4d0) = 0;
  thunk_FUN_004cabb0(1);
  return 1;
}

