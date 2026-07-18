
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005f95b0(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unkbyte10 extraout_ST0;
  longlong lVar10;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  undefined2 *local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;
  
  iVar7 = 0;
  local_1c = 0;
  if (*(int *)((int)param_1 + 0x2e6) == 0) {
    return 0;
  }
  uVar1 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar1;
  local_18 = (uVar1 >> 0x10) % 0x169;
  *(uint *)(*(int *)((int)param_1 + 0x2e6) + 0x4c) = local_18;
  fcos((float10)local_18 * (float10)_DAT_0079c70c);
  lVar10 = __ftol();
  fsin(extraout_ST0);
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x50) = (int)lVar10;
  lVar10 = __ftol();
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x54) = (int)lVar10;
  thunk_FUN_00416270(param_1,&local_8,&local_6,(undefined2 *)&local_c);
  *(int *)((int)param_1 + 0x2c5) = (int)local_6;
  *(int *)((int)param_1 + 0x2c1) = (int)local_8;
  *(int *)((int)param_1 + 0x2c9) = (int)(short)local_c;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x34) = (int)local_8;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x38) = (int)local_6;
  *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x40) =
       *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x14);
  *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x44) =
       *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x18);
  *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x48) =
       *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x1c);
  local_c = local_c + 0x14;
  sVar5 = (short)local_c;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x3c) = (int)sVar5;
  iVar9 = *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x1c);
  iVar8 = *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x3c) - iVar9;
  if (iVar8 < 1) {
    return 0;
  }
  local_18 = (uint)(short)(((short)(iVar8 / 200) + (short)(iVar8 >> 0x1f)) -
                          (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
  if ((int)local_18 < 1) {
    iVar2 = FUN_006aac70(200);
    local_10 = 10;
    iVar9 = 0;
    do {
      iVar4 = iVar9 + 4;
      *(undefined2 *)(iVar9 + 2 + iVar2) = 0;
      iVar3 = (local_10 / 2 + iVar8) / local_10;
      iVar7 = iVar7 + iVar3;
      iVar8 = iVar8 - iVar3;
      *(short *)(iVar9 + iVar2) = (short)iVar7;
      local_10 = local_10 + -1;
      iVar9 = iVar4;
    } while (iVar4 < 0x28);
    *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x50) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x54) = 0;
    *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x58) = iVar2;
    *(undefined4 *)(*(int *)((int)param_1 + 0x2e6) + 0x5c) = 10;
    return 1;
  }
  sVar6 = (short)(iVar9 >> 0x1f);
  if (iVar9 < 0) {
    iVar7 = (short)(((short)(iVar9 / 200) + sVar6) - (short)((longlong)iVar9 * 0x51eb851f >> 0x3f))
            + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(iVar9 / 200) + sVar6) -
                        (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
  }
  if (sVar5 < 0) {
    iVar9 = (short)((sVar5 / 200 + (sVar5 >> 0xf)) -
                   (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar9 = (int)(short)((sVar5 / 200 + (sVar5 >> 0xf)) -
                        (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f));
  }
  if (local_6 < 0) {
    sVar5 = ((local_6 / 0xc9 + (local_6 >> 0xf)) -
            (short)((longlong)(int)local_6 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = (local_6 / 0xc9 + (local_6 >> 0xf)) -
            (short)((longlong)(int)local_6 * 0x28c1979 >> 0x3f);
  }
  if (local_8 < 0) {
    sVar6 = ((local_8 / 0xc9 + (local_8 >> 0xf)) -
            (short)((longlong)(int)local_8 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar6 = (local_8 / 0xc9 + (local_8 >> 0xf)) -
            (short)((longlong)(int)local_8 * 0x28c1979 >> 0x3f);
  }
  iVar7 = thunk_FUN_005f9bd0(sVar6,sVar5,iVar9,iVar7,&local_20,&local_24);
  switch(local_18) {
  case 1:
    local_10 = 0x14;
    break;
  case 2:
    local_10 = 0x1c;
    break;
  case 3:
    local_10 = 0x22;
    break;
  case 4:
    local_10 = 0x2a;
    break;
  default:
    local_10 = 0x28;
  }
  if (iVar7 == 0) {
    iVar7 = *(int *)((int)param_1 + 0x2e6);
    local_18 = 4;
    local_64 = *(undefined4 *)(iVar7 + 0x1c);
    local_60 = *(int *)(iVar7 + 0x1c) + 0x32;
    local_3c = 0xaa;
    local_58 = (int)(short)local_c;
    local_38 = 0;
    local_5c = local_58 + -0x32;
  }
  else {
    local_10 = local_10 + 8;
    sVar5 = (short)local_c >> 0xf;
    if (iVar7 == 1) {
      iVar7 = *(int *)((int)param_1 + 0x2e6);
      local_18 = 5;
      local_64 = *(undefined4 *)(iVar7 + 0x1c);
      local_60 = *(int *)(iVar7 + 0x1c) + 0x32;
      local_54 = (int)(short)local_c;
      if ((short)local_c < 0) {
        iVar9 = (short)(((short)local_c / 200 + sVar5) -
                       (short)((longlong)local_54 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)local_c / 200 + sVar5) -
                            (short)((longlong)local_54 * 0x51eb851f >> 0x3f));
      }
      local_3c = 0x10e;
      local_38 = 0xaa;
      local_5c = *(int *)(iVar7 + 0x1c) + (iVar9 - local_20) * 200;
      local_58 = local_54 + -0x32;
      local_34 = 0;
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x2e6);
      local_18 = 6;
      local_64 = *(undefined4 *)(iVar7 + 0x1c);
      local_60 = *(int *)(iVar7 + 0x1c) + 0x32;
      local_50 = (int)(short)local_c;
      if ((short)local_c < 0) {
        iVar8 = (int)(short)(((short)local_c / 200 + sVar5) -
                            (short)((longlong)local_50 * 0x51eb851f >> 0x3f));
        iVar9 = iVar8 + -1;
      }
      else {
        iVar9 = (int)(short)(((short)local_c / 200 + sVar5) -
                            (short)((longlong)local_50 * 0x51eb851f >> 0x3f));
        iVar8 = iVar9;
      }
      local_3c = 0xb4;
      local_5c = *(int *)(iVar7 + 0x1c) + (iVar9 - local_24) * 200;
      if ((short)local_c < 0) {
        iVar8 = iVar8 + -1;
      }
      local_38 = 0xb4;
      local_34 = 0xaa;
      local_58 = *(int *)(iVar7 + 0x1c) + (iVar8 - local_20) * 200;
      local_54 = local_50 + -0x32;
      if (local_50 + 1 == local_20) {
        local_38 = 0x10e;
      }
      local_30 = 0;
    }
  }
  local_40 = 0;
  local_44 = 0;
  local_14 = *(undefined2 **)(iVar7 + 0x58);
  if (local_14 == (undefined2 *)0x0) {
    local_14 = (undefined2 *)FUN_006aac70(200);
  }
  iVar7 = local_10;
  iVar9 = thunk_FUN_0060e210(&local_64,&local_44,local_18,local_14,local_10);
  if (iVar9 != 0) {
    FUN_006ab060(&local_14);
    return local_1c;
  }
  *(undefined2 **)(*(int *)((int)param_1 + 0x2e6) + 0x58) = local_14;
  *(int *)(*(int *)((int)param_1 + 0x2e6) + 0x5c) = iVar7;
  return 1;
}

