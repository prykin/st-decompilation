
undefined4 __thiscall FUN_00427090(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  iVar6 = param_2;
  if (DAT_007f4d84 <= DAT_007f4d78) {
    puVar2 = (undefined4 *)FUN_006acf50(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    DAT_007f4d6c = puVar2;
  }
  iVar3 = FUN_006aac70((param_1 * 0xfffffff + 2 + param_2) * 0x10);
  if (iVar3 == 0) {
    return 0;
  }
  DAT_007f4d6c[DAT_007f4d78 * 3 + 2] = iVar3;
  DAT_007f4d6c[DAT_007f4d78 * 3] = 0;
  if (param_3 == 0) {
    iVar4 = param_1 * 0x10;
    DAT_007f4d6c[DAT_007f4d78 * 3] =
         (uint)(*(byte *)((*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c) + DAT_007f4d80 +
                         param_1) >> 7);
    iVar5 = thunk_FUN_004248d0(this,iVar3,0,*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_1,0,0xffffffff);
    iVar7 = *(int *)(iVar4 + DAT_007f4d74);
    iVar9 = iVar4;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      if (*(int *)(iVar9 + DAT_007f4d74) < iVar7) {
        iVar5 = thunk_FUN_004248d0(this,iVar3,iVar5,*(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
                                   DAT_007f4d80 + iVar8,0,0xffffffff);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar9 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar5 = thunk_FUN_004248d0(this,iVar3,iVar5,iVar7,DAT_007f4d80 + iVar8,1,0xffffffff);
      }
      iVar7 = *(int *)(iVar9 + DAT_007f4d74);
      iVar9 = iVar9 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar7 = thunk_FUN_004248d0(this,iVar3,iVar5,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_2,1,0xffffffff);
    param_3 = thunk_FUN_004248d0(this,iVar3,iVar7,
                                 *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,3,0xffffffff);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        iVar9 = *(int *)(iVar7 + 0xc + local_c);
        if ((iVar9 < *(int *)(iVar7 + -4 + local_c)) && (param_2 != iVar6)) {
          param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar9 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,3,0xffffffff);
          iVar7 = DAT_007f4d74;
        }
        iVar9 = *(int *)(iVar7 + 0xc + local_c);
        if (*(int *)(iVar7 + -4 + local_c) < iVar9) {
          param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar9 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,2,0xffffffff);
          iVar7 = DAT_007f4d74;
        }
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar6 = *(int *)(iVar4 + 0xc + iVar7);
      if (*(int *)(iVar4 + 0x1c + iVar7) < iVar6) {
LAB_004278f1:
        param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar6 + DAT_007f4d7c,DAT_007f4d80 + param_1,
                                     3,0xffffffff);
        iVar7 = DAT_007f4d74;
      }
    }
  }
  else {
    if (param_3 == -1) {
      iVar4 = param_1 * 0x10;
      DAT_007f4d6c[DAT_007f4d78 * 3] =
           (uint)(*(byte *)((*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c) *
                            *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c) + DAT_007f4d80
                           + param_1) >> 7);
      iVar5 = thunk_FUN_004248d0(this,iVar3,0,*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_1,0,0xffffffff);
      iVar7 = *(int *)(iVar4 + DAT_007f4d74);
      iVar9 = iVar4;
      for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
        if (*(int *)(iVar9 + DAT_007f4d74) < iVar7) {
          iVar5 = thunk_FUN_004248d0(this,iVar3,iVar5,*(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
                                     DAT_007f4d80 + iVar8,0,0xffffffff);
        }
        if ((iVar8 < param_2) &&
           (iVar7 = *(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
           iVar7 < *(int *)(iVar9 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
          iVar5 = thunk_FUN_004248d0(this,iVar3,iVar5,iVar7,DAT_007f4d80 + iVar8,1,0xffffffff);
        }
        iVar7 = *(int *)(iVar9 + DAT_007f4d74);
        iVar9 = iVar9 + 0x10;
      }
      local_c = param_2 * 0x10;
      iVar7 = thunk_FUN_004248d0(this,iVar3,iVar5,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,1,0xffffffff);
      param_3 = thunk_FUN_004248d0(this,iVar3,iVar7,
                                   *(int *)(local_c + 4 + DAT_007f4d74) + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,3,0xffffffff);
      iVar7 = DAT_007f4d74;
      if (param_1 < param_2) {
        do {
          iVar9 = *(int *)(local_c + 4 + iVar7);
          if ((iVar9 < *(int *)(local_c + -0xc + iVar7)) && (param_2 != iVar6)) {
            param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar9 + DAT_007f4d7c,
                                         DAT_007f4d80 + param_2,3,0xffffffff);
            iVar7 = DAT_007f4d74;
          }
          iVar9 = *(int *)(local_c + 4 + iVar7);
          if (*(int *)(local_c + -0xc + iVar7) < iVar9) {
            param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar9 + DAT_007f4d7c,
                                         DAT_007f4d80 + param_2,2,0xffffffff);
            iVar7 = DAT_007f4d74;
          }
          param_2 = param_2 + -1;
          local_c = local_c + -0x10;
        } while (param_1 < param_2);
        iVar6 = *(int *)(iVar4 + 4 + iVar7);
        if (*(int *)(iVar4 + 0x14 + iVar7) < iVar6) {
          param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar6 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_1,3,0xffffffff);
          iVar7 = DAT_007f4d74;
        }
      }
      iVar6 = *(int *)(iVar4 + 4 + iVar7);
      goto LAB_00427930;
    }
    iVar4 = param_1 * 0x10;
    DAT_007f4d6c[DAT_007f4d78 * 3] =
         (uint)(*(byte *)((*(int *)(iVar4 + 8 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c) + DAT_007f4d80 +
                         param_1) >> 7);
    iVar5 = thunk_FUN_004248d0(this,iVar3,0,*(int *)(iVar4 + 8 + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_1,0,0xffffffff);
    iVar7 = *(int *)(iVar4 + 8 + DAT_007f4d74);
    iVar9 = iVar4;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      iVar1 = *(int *)(iVar9 + 8 + DAT_007f4d74);
      if (iVar1 < iVar7) {
        iVar5 = thunk_FUN_004248d0(this,iVar3,iVar5,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar8,0,
                                   0xffffffff);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar9 + 8 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar9 + 0x18 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar5 = thunk_FUN_004248d0(this,iVar3,iVar5,iVar7,DAT_007f4d80 + iVar8,1,0xffffffff);
      }
      iVar7 = *(int *)(iVar9 + 8 + DAT_007f4d74);
      iVar9 = iVar9 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar7 = thunk_FUN_004248d0(this,iVar3,iVar5,*(int *)(local_c + 8 + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_2,1,0xffffffff);
    param_3 = thunk_FUN_004248d0(this,iVar3,iVar7,
                                 *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,3,0xffffffff);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        iVar9 = *(int *)(local_c + 0xc + iVar7);
        if ((iVar9 < *(int *)(local_c + -4 + iVar7)) && (param_2 != iVar6)) {
          param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar9 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,3,0xffffffff);
          iVar7 = DAT_007f4d74;
        }
        iVar9 = *(int *)(local_c + 0xc + iVar7);
        if (*(int *)(local_c + -4 + iVar7) < iVar9) {
          param_3 = thunk_FUN_004248d0(this,iVar3,param_3,iVar9 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,2,0xffffffff);
          iVar7 = DAT_007f4d74;
        }
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar6 = *(int *)(iVar4 + 0xc + iVar7);
      if (*(int *)(iVar4 + 0x1c + iVar7) < iVar6) goto LAB_004278f1;
    }
  }
  local_8 = param_1 * 0x10;
  iVar6 = *(int *)(local_8 + 0xc + iVar7);
LAB_00427930:
  iVar6 = thunk_FUN_004248d0(this,iVar3,param_3,iVar6 + DAT_007f4d7c,DAT_007f4d80 + param_1,2,
                             0xffffffff);
  DAT_007f4d6c[DAT_007f4d78 * 3 + 1] = iVar6;
  DAT_007f4d78 = DAT_007f4d78 + 1;
  return 0;
}

