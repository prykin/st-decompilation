
int __thiscall FUN_006139a0(void *this,int *param_1,int *param_2,int *param_3)

{
  short *psVar1;
  short sVar2;
  Global_sub_006141B0_param_2Enum GVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_18 = 0;
  local_10 = 0;
  if (*(int *)((int)this + 0x256) != 1) {
    if (*(int *)((int)this + 0x256) != 2) {
      return 0;
    }
    iVar6 = *(int *)((int)this + 0x298);
    iVar8 = PTR_00802a38->field_00E4;
    *(int *)((int)this + 0x298) = iVar8;
    iVar6 = (iVar8 - iVar6) * *(int *)((int)this + 0x288);
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    iVar8 = *(int *)((int)this + 0x280);
    sVar2 = *(short *)((int)this + 0x25c);
    iVar7 = (*(int *)((int)this + 0x284) * iVar6) / 10000 + (int)*(short *)((int)this + 0x25e);
    if ((*(int *)((int)this + 0x20c) == 4) && (*(short *)((int)this + 0x270) != 0)) {
      iVar7 = iVar7 + *(short *)((int)this + 0x270);
    }
    *param_1 = (*(int *)((int)this + 0x27c) * iVar6) / 10000 + (int)*(short *)((int)this + 0x25a);
    *param_2 = (iVar8 * iVar6) / 10000 + (int)sVar2;
    *param_3 = iVar7;
    return 1;
  }
  iVar6 = *(int *)((int)this + 0x298);
  iVar8 = PTR_00802a38->field_00E4;
  *(int *)((int)this + 0x298) = iVar8;
  local_14 = (iVar8 - iVar6) * *(int *)((int)this + 0x288);
  iVar8 = *(int *)((int)this + 0x28c) + local_14;
  *(int *)((int)this + 0x28c) = iVar8;
  iVar7 = iVar8 - *(int *)((int)this + 0x290);
  iVar6 = *(int *)((int)this + 0x2dd) + *(int *)((int)this + 0x2d9) * 0x1c;
  if (*(int *)(iVar6 + 8) < iVar7) {
    iVar7 = iVar7 - *(int *)(iVar6 + 8);
    local_c = (undefined4 *)(*(int *)((int)this + 0x2d9) + 1);
    *(int *)((int)this + 0x290) = iVar8 - iVar7;
    *(undefined4 **)((int)this + 0x2d9) = local_c;
    if ((2 < *(int *)((int)this + 0x2d5)) && (*(int *)((int)this + 0x2d5) + -3 <= (int)local_c)) {
      if (*(char *)((int)this + 0x2ea) != '\0') {
        iVar6 = thunk_FUN_00616280(this,&local_24,&local_20,&local_1c);
        if ((-1 < iVar6) &&
           (iVar6 = thunk_FUN_00616a80(this,local_24,local_20,local_1c,param_1,param_2,param_3),
           iVar6 != 0)) {
          return 1;
        }
        *(undefined4 *)((int)this + 0x256) = 2;
        *(undefined4 *)((int)this + 0x20c) = 4;
        *(undefined2 *)((int)this + 0x270) = 0xffff;
        uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar5;
        *(uint *)((int)this + 0x294) = (uVar5 >> 0x10) % 0xb + 10 + PTR_00802a38->field_00E4;
        *(undefined4 *)((int)this + 0x298) = PTR_00802a38->field_00E4;
        goto LAB_00613c8b;
      }
      if (*(int *)((int)this + 0x2d1) != 0) {
        sVar2 = *(short *)((int)this + 0x25e);
        if (sVar2 < 0) {
          iVar6 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                         (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
        }
        sVar2 = *(short *)((int)this + 0x25c);
        if (sVar2 < 0) {
          iVar8 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                         (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        sVar2 = *(short *)((int)this + 0x25a);
        if (sVar2 < 0) {
          iVar4 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                         (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        iVar6 = thunk_FUN_006151e0(this,local_c,iVar4,iVar8,iVar6);
        if ((iVar6 != 0) && (*(char *)((int)this + 0x2ea) == '\0')) {
          return local_8;
        }
      }
    }
    iVar8 = *(int *)((int)this + 0x2d9);
    if (*(int *)((int)this + 0x2d5) + -1 <= iVar8) {
      *(undefined4 *)((int)this + 0x20c) = 4;
      *(undefined2 *)((int)this + 0x270) = 0xffff;
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *(uint *)((int)this + 0x294) = (uVar5 >> 0x10) % 0xb + 10 + PTR_00802a38->field_00E4;
      *(undefined4 *)((int)this + 0x298) = PTR_00802a38->field_00E4;
      *(undefined4 *)((int)this + 0x256) = 2;
LAB_00613c8b:
      iVar6 = thunk_FUN_006173a0(this,local_14,param_1,param_2,param_3);
      if (0 < iVar6) {
        return iVar6;
      }
      thunk_FUN_0060ec00(this);
      *(undefined4 *)((int)this + 0x20c) = 9;
      return iVar6;
    }
    iVar6 = *(int *)((int)this + 0x2dd) + iVar8 * 0x1c;
    if (*(int *)(*(int *)((int)this + 0x2dd) + 0x18 + iVar8 * 0x1c) != 8) {
      *(int *)((int)this + 0x27c) =
           ((&SHORT_007ed570)[*(short *)(iVar6 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar6 + 6) * 4);
      *(int *)((int)this + 0x280) =
           ((&SHORT_007ed572)[*(short *)(iVar6 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar6 + 6) * 4);
      *(int *)((int)this + 0x284) =
           ((&SHORT_007ed574)[*(short *)(iVar6 + 6) * 4] * 10000000) /
           *(int *)(&DAT_007cfe74 + *(short *)(iVar6 + 6) * 4);
    }
  }
  GVar3 = *(Global_sub_006141B0_param_2Enum *)(iVar6 + 0x18);
  if (GVar3 == 0) {
    local_14 = (iVar7 * 51000) / (*(int *)(&DAT_007cfe74 + *(short *)(iVar6 + 6) * 4) * 0xc9);
  }
  else {
    if (GVar3 == CASE_8) {
      local_14 = (*(int *)((int)this + 0x2e1) * iVar7) / *(int *)(iVar6 + 8);
    }
    else {
      local_14 = (iVar7 * 51000) / (*(int *)(&DAT_007cfe74 + *(short *)(iVar6 + 6) * 4) * 0xc9);
    }
    local_18 = thunk_FUN_006141b0(this,local_14,GVar3,&local_28,&local_10);
  }
  psVar1 = (short *)(*(int *)((int)this + 0x2dd) + *(int *)((int)this + 0x2d9) * 0x1c);
  local_8 = (*(int *)((int)this + 0x27c) * iVar7) / 10000 + (int)*psVar1;
  local_c = (undefined4 *)((*(int *)((int)this + 0x280) * iVar7) / 10000 + (int)psVar1[1]);
  iVar6 = (*(int *)((int)this + 0x284) * iVar7) / 10000 + (int)psVar1[2];
  if (local_18 != 0) {
    local_8 = local_8 + (*(int *)(psVar1 + 6) * local_10) / 10000;
    local_c = (undefined4 *)((int)local_c + (*(int *)(psVar1 + 8) * local_10) / 10000);
    iVar6 = iVar6 + (*(int *)(psVar1 + 10) * local_10) / 10000;
  }
  if (((*(int *)((int)this + 0x2d9) == 0) && (*(int *)((int)this + 0x278) != 0)) && (local_14 != 0))
  {
    local_8 = local_8 + (*(short *)((int)this + 0x26c) * local_14) / 0x33;
    local_c = (undefined4 *)((int)local_c + (*(short *)((int)this + 0x26e) * local_14) / 0x33);
    iVar6 = iVar6 + (*(short *)((int)this + 0x270) * local_14) / 0x33;
  }
  *param_1 = local_8;
  *param_2 = (int)local_c;
  *param_3 = iVar6;
  return 1;
}

