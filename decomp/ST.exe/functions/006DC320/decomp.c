
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006dc320(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  undefined8 local_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  int iStack_c;
  int local_8;
  
  local_24 = 0;
  local_20 = (double)(ulonglong)(uint)local_20;
  if (*(double *)((int)param_1 + 0x68) <= *(double *)((int)param_1 + 0x60)) {
    return;
  }
  if (*(double *)((int)param_1 + 0x78) <= *(double *)((int)param_1 + 0x70)) {
    return;
  }
  if (*(int *)((int)param_1 + 0x38) <= *(int *)((int)param_1 + 0x30)) {
    return;
  }
  if (*(int *)((int)param_1 + 0x3c) <= *(int *)((int)param_1 + 0x34)) {
    return;
  }
  *(double *)((int)param_1 + 0xd8) =
       (double)(*(int *)((int)param_1 + 0x38) - *(int *)((int)param_1 + 0x30)) /
       (*(double *)((int)param_1 + 0x68) - *(double *)((int)param_1 + 0x60));
  local_18 = (float)(*(int *)((int)param_1 + 0x3c) - *(int *)((int)param_1 + 0x34));
  *(double *)((int)param_1 + 0xe0) =
       (double)(int)local_18 / (*(double *)((int)param_1 + 0x78) - *(double *)((int)param_1 + 0x70))
  ;
  lVar6 = __ftol();
  iVar5 = (int)lVar6;
  *(int *)((int)param_1 + 0x2f0) = iVar5;
  if (iVar5 < 0x36) {
    *(undefined4 *)((int)param_1 + 0x2f0) = 0x28;
  }
  else {
    *(uint *)((int)param_1 + 0x2f0) = ((0x53 < iVar5) - 1 & 0xffffffdf) + 100;
  }
  lVar6 = __ftol();
  iVar5 = (int)lVar6;
  *(int *)((int)param_1 + 0x2f4) = iVar5;
  if (iVar5 < 0x36) {
    *(undefined4 *)((int)param_1 + 0x2f4) = 0x28;
  }
  else {
    *(uint *)((int)param_1 + 0x2f4) = ((0x53 < iVar5) - 1 & 0xffffffdf) + 100;
  }
  FUN_00717380((int)param_1);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  FUN_006e25d0(param_1,&local_50);
  switch(*(undefined4 *)((int)param_1 + 0xa8)) {
  case 0:
    iStack_c = 0xffffffff;
    local_8 = -1;
    break;
  case 1:
    iStack_c = 1;
    local_8 = -1;
    break;
  case 2:
    iStack_c = 1;
    local_8 = 1;
    break;
  case 3:
    iStack_c = 0xffffffff;
    local_8 = 1;
    break;
  default:
    iStack_c = 0;
    local_8 = 0;
  }
  FUN_006e25d0(param_1,&local_40);
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  *(double *)((int)param_1 + 0x2f8) = (double)(local_38 - local_48) * _DAT_0079b148;
  FUN_006e25d0(param_1,&local_40);
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  *(double *)((int)param_1 + 0x300) = (double)(local_38 - local_48) * _DAT_0079b148;
  FUN_006e25d0(param_1,&local_40);
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  *(double *)((int)param_1 + 0x308) = (double)(local_38 - local_48) * _DAT_0079b148;
  FUN_006e25d0(param_1,&local_50);
  local_30 = (float)*(double *)((int)param_1 + 0x368);
  local_2c = 0.0;
  local_28 = 0.0;
  FUN_006e25d0(param_1,&local_40);
  *(int *)((int)param_1 + 0x3ac) = local_40 - local_50;
  *(int *)((int)param_1 + 0x3b8) = local_3c - local_4c;
  *(int *)((int)param_1 + 0x3c4) = local_38 - local_48;
  local_2c = (float)*(double *)((int)param_1 + 0x368);
  local_30 = 0.0;
  local_28 = 0.0;
  FUN_006e25d0(param_1,&local_40);
  *(int *)((int)param_1 + 0x3b0) = local_40 - local_50;
  *(int *)((int)param_1 + 0x3bc) = local_3c - local_4c;
  *(int *)((int)param_1 + 0x3c8) = local_38 - local_48;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = (float)((float10)*(double *)((int)param_1 + 0x3a4) * (float10)_DAT_0079dfa8);
  FUN_006e25d0(param_1,&local_40);
  *(int *)((int)param_1 + 0x3b4) = local_40 - local_50;
  *(int *)((int)param_1 + 0x3c0) = local_3c - local_4c;
  *(int *)((int)param_1 + 0x3cc) = local_38 - local_48;
  lVar6 = __ftol();
  *(int *)((int)param_1 + 0x3d4) = (int)lVar6;
  iStack_c = (int)lVar6;
  lVar6 = __ftol();
  *(int *)((int)param_1 + 0x3d0) = (int)lVar6;
  lVar6 = __ftol();
  *(int *)((int)param_1 + 0x3d8) = (int)lVar6;
  *(undefined4 *)((int)param_1 + 0x3e0) = 1;
  if (*(short **)((int)param_1 + 0x280) == (short *)0x0) goto LAB_006dcafd;
  local_8 = *(int *)((int)param_1 + 0x3dc);
  iVar5 = local_8 / 2;
  local_10 = SUB84((double)(int)**(short **)((int)param_1 + 0x280) * *(double *)((int)param_1 + 200)
                   ,0);
  _local_10 = CONCAT44(iVar5,local_10);
  switch(*(undefined4 *)((int)param_1 + 0xa8)) {
  case 0:
    lVar6 = __ftol();
    local_24 = (int)lVar6;
    lVar6 = __ftol();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 1:
    lVar6 = __ftol();
    local_24 = (int)lVar6;
    lVar6 = __ftol();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 2:
    lVar6 = __ftol();
    local_24 = (int)lVar6;
    lVar6 = __ftol();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 3:
    lVar6 = __ftol();
    local_24 = (int)lVar6;
    lVar6 = __ftol();
    local_20 = (double)(lVar6 << 0x20);
  }
  local_20 = (double)local_20._4_4_;
  lVar6 = __ftol();
  *(int *)((int)param_1 + 1000) = (int)lVar6;
  iStack_c = (int)lVar6;
  lVar6 = __ftol();
  local_20 = (double)CONCAT44((int)lVar6,(uint)local_20);
  *(int *)((int)param_1 + 0x3f4) = (int)lVar6;
  lVar6 = __ftol();
  iVar2 = (int)lVar6;
  *(int *)((int)param_1 + 0x400) = iVar2;
  lVar6 = __ftol();
  iVar1 = (int)lVar6;
  *(int *)((int)param_1 + 0x40c) = iVar1;
  if (0 < iStack_c) {
    *(int *)((int)param_1 + 0x3ec) = iVar2;
    *(int *)((int)param_1 + 0x3f0) = iVar1;
    if (iVar5 < iStack_c) {
      iVar3 = (iStack_c - local_8) + iVar5;
      if (iVar2 <= iVar3 + 1) {
        *(int *)((int)param_1 + 0x3ec) = iVar3 + 2;
      }
      iVar3 = (local_8 - iStack_c) + iVar5;
      if (iVar3 + -2 <= iVar1) {
        iVar3 = iVar3 + -3;
        goto LAB_006dc9b3;
      }
    }
    else {
      if (iVar2 < iVar5 - iStack_c) {
        *(int *)((int)param_1 + 0x3ec) = iVar5 - iStack_c;
      }
      if (iStack_c + iVar5 <= iVar1) {
        iVar3 = iStack_c + iVar5 + -1;
LAB_006dc9b3:
        *(int *)((int)param_1 + 0x3f0) = iVar3;
      }
    }
  }
  iVar3 = local_20._4_4_;
  if (local_20._4_4_ < local_8 + -1) {
    *(int *)((int)param_1 + 0x3f8) = iVar2;
    *(int *)((int)param_1 + 0x3fc) = iVar1;
    if (iVar5 < local_20._4_4_) {
      iVar4 = (local_20._4_4_ - local_8) + iVar5;
      if (iVar2 <= iVar4 + 1) {
        *(int *)((int)param_1 + 0x3f8) = iVar4 + 2;
      }
      iVar4 = (local_8 - local_20._4_4_) + iVar5;
      local_20 = (double)CONCAT44(iVar4,(uint)local_20);
      if (iVar4 + -2 <= iVar1) {
        iVar4 = iVar4 + -3;
        goto LAB_006dca21;
      }
    }
    else {
      if (iVar2 < iVar5 - local_20._4_4_) {
        *(int *)((int)param_1 + 0x3f8) = iVar5 - local_20._4_4_;
      }
      if (local_20._4_4_ + iVar5 <= iVar1) {
        iVar4 = local_20._4_4_ + iVar5 + -1;
LAB_006dca21:
        *(int *)((int)param_1 + 0x3fc) = iVar4;
      }
    }
  }
  if (0 < iVar2) {
    *(int *)((int)param_1 + 0x404) = iStack_c;
    *(int *)((int)param_1 + 0x408) = iVar3;
    if (iVar5 < iVar2) {
      iVar4 = (iVar2 - local_8) + iVar5;
      local_20 = (double)CONCAT44(iVar4,(uint)local_20);
      if (iStack_c <= iVar4 + 1) {
        *(int *)((int)param_1 + 0x404) = iVar4 + 2;
      }
      iVar2 = (local_8 - iVar2) + iVar5;
      if (iVar2 + -2 <= iVar3) {
        *(int *)((int)param_1 + 0x408) = iVar2 + -3;
      }
    }
    else {
      if (iStack_c < iVar5 - iVar2) {
        *(int *)((int)param_1 + 0x404) = iVar5 - iVar2;
      }
      if (iVar2 + iVar5 <= iVar3) {
        *(int *)((int)param_1 + 0x408) = iVar2 + iVar5 + -1;
      }
    }
  }
  local_24 = iVar1;
  if (0 < iVar1) {
    *(int *)((int)param_1 + 0x410) = iStack_c;
    *(int *)((int)param_1 + 0x414) = iVar3;
    if (iVar5 < iVar1) {
      local_24 = (iVar1 - local_8) + iVar5;
      if (iStack_c <= local_24 + 1) {
        *(int *)((int)param_1 + 0x410) = local_24 + 2;
      }
      iVar5 = iVar5 + (local_8 - iVar1);
      if (iVar3 < iVar5 + -2) goto LAB_006dcafd;
      iVar5 = iVar5 + -3;
    }
    else {
      if (iStack_c < iVar5 - iVar1) {
        *(int *)((int)param_1 + 0x410) = iVar5 - iVar1;
      }
      if (iVar3 < iVar5 + iVar1) goto LAB_006dcafd;
      iVar5 = iVar5 + iVar1 + -1;
    }
    *(int *)((int)param_1 + 0x414) = iVar5;
  }
LAB_006dcafd:
  FUN_006e1c20(param_1,*(float *)((int)param_1 + 0x30),*(int *)((int)param_1 + 0x34),0.0,&local_14,
               &local_18);
  lVar6 = __ftol();
  iVar5 = (int)lVar6;
  lVar6 = __ftol();
  iVar2 = (int)lVar6;
  switch(*(undefined4 *)((int)param_1 + 0xa8)) {
  case 0:
    *(int *)((int)param_1 + 0x4c) = iVar2;
    *(int *)((int)param_1 + 0x48) = iVar5 + -2;
    break;
  case 1:
    *(int *)((int)param_1 + 0x40) = iVar5;
    *(int *)((int)param_1 + 0x44) = iVar2 + -2;
    break;
  case 2:
    *(int *)((int)param_1 + 0x5c) = iVar2;
    *(int *)((int)param_1 + 0x58) = iVar5 + 2;
    break;
  case 3:
    *(int *)((int)param_1 + 0x50) = iVar5;
    *(int *)((int)param_1 + 0x54) = iVar2 + 2;
  }
  FUN_006e1c20(param_1,(float)(*(int *)((int)param_1 + 0x38) + -1),*(int *)((int)param_1 + 0x34),0.0
               ,&local_14,&local_18);
  lVar6 = __ftol();
  iVar5 = (int)lVar6;
  lVar6 = __ftol();
  iVar2 = (int)lVar6;
  switch(*(undefined4 *)((int)param_1 + 0xa8)) {
  case 0:
    *(int *)((int)param_1 + 0x40) = iVar5;
    *(int *)((int)param_1 + 0x44) = iVar2 + -2;
    break;
  case 1:
    *(int *)((int)param_1 + 0x5c) = iVar2;
    *(int *)((int)param_1 + 0x58) = iVar5 + 2;
    break;
  case 2:
    *(int *)((int)param_1 + 0x50) = iVar5;
    *(int *)((int)param_1 + 0x54) = iVar2 + 2;
    break;
  case 3:
    *(int *)((int)param_1 + 0x4c) = iVar2;
    *(int *)((int)param_1 + 0x48) = iVar5 + -2;
  }
  FUN_006e1c20(param_1,*(float *)((int)param_1 + 0x30),*(int *)((int)param_1 + 0x3c) + -1,
               (float)((float10)*(double *)((int)param_1 + 0xd0) * (float10)_DAT_0079df90),&local_14
               ,&local_18);
  lVar6 = __ftol();
  iVar5 = (int)lVar6;
  lVar6 = __ftol();
  iVar2 = (int)lVar6;
  switch(*(undefined4 *)((int)param_1 + 0xa8)) {
  case 0:
    *(int *)((int)param_1 + 0x50) = iVar5;
    *(int *)((int)param_1 + 0x54) = iVar2 + 2;
    break;
  case 1:
    *(int *)((int)param_1 + 0x4c) = iVar2;
    *(int *)((int)param_1 + 0x48) = iVar5 + -2;
    break;
  case 2:
    *(int *)((int)param_1 + 0x40) = iVar5;
    *(int *)((int)param_1 + 0x44) = iVar2 + -2;
    break;
  case 3:
    *(int *)((int)param_1 + 0x5c) = iVar2;
    *(int *)((int)param_1 + 0x58) = iVar5 + 2;
  }
  FUN_006e1c20(param_1,(float)(*(int *)((int)param_1 + 0x38) + -1),
               *(int *)((int)param_1 + 0x3c) + -1,
               (float)((float10)*(double *)((int)param_1 + 0xd0) * (float10)_DAT_0079df90),&local_14
               ,&local_18);
  lVar6 = __ftol();
  iVar5 = (int)lVar6;
  lVar6 = __ftol();
  iVar2 = (int)lVar6;
  switch(*(undefined4 *)((int)param_1 + 0xa8)) {
  case 0:
    *(int *)((int)param_1 + 0x5c) = iVar2;
    *(int *)((int)param_1 + 0x58) = iVar5 + 2;
    return;
  case 1:
    *(int *)((int)param_1 + 0x50) = iVar5;
    *(int *)((int)param_1 + 0x54) = iVar2 + 2;
    return;
  case 2:
    *(int *)((int)param_1 + 0x4c) = iVar2;
    *(int *)((int)param_1 + 0x48) = iVar5 + -2;
    return;
  case 3:
    *(int *)((int)param_1 + 0x40) = iVar5;
    *(int *)((int)param_1 + 0x44) = iVar2 + -2;
  }
  return;
}

