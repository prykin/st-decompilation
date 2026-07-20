
undefined4 __thiscall FUN_00427090(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  iVar5 = param_2;
  if (DAT_007f4d84 <= DAT_007f4d78) {
    iVar2 = Library::DKW::LIB::FUN_006acf50(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
    if (iVar2 == 0) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    DAT_007f4d6c = iVar2;
  }
  iVar2 = Library::DKW::LIB::FUN_006aac70((param_1 * 0xfffffff + 2 + param_2) * 0x10);
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(DAT_007f4d6c + 8 + DAT_007f4d78 * 0xc) = iVar2;
  *(undefined4 *)(DAT_007f4d6c + DAT_007f4d78 * 0xc) = 0;
  if (param_3 == 0) {
    iVar3 = param_1 * 0x10;
    *(uint *)(DAT_007f4d6c + DAT_007f4d78 * 0xc) =
         (uint)(*(byte *)((*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c) + DAT_007f4d80 +
                         param_1) >> 7);
    iVar4 = thunk_FUN_004248d0(this,iVar2,0,*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar6 = *(int *)(iVar3 + DAT_007f4d74);
    iVar8 = iVar3;
    for (iVar7 = param_1; iVar7 <= param_2; iVar7 = iVar7 + 1) {
      if (*(int *)(iVar8 + DAT_007f4d74) < iVar6) {
        iVar4 = thunk_FUN_004248d0(this,iVar2,iVar4,*(int *)(iVar8 + DAT_007f4d74) + DAT_007f4d7c,
                                   DAT_007f4d80 + iVar7,CASE_0,~CASE_0);
      }
      if ((iVar7 < param_2) &&
         (iVar6 = *(int *)(iVar8 + DAT_007f4d74) + DAT_007f4d7c,
         iVar6 < *(int *)(iVar8 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar4 = thunk_FUN_004248d0(this,iVar2,iVar4,iVar6,DAT_007f4d80 + iVar7,CASE_1,~CASE_0);
      }
      iVar6 = *(int *)(iVar8 + DAT_007f4d74);
      iVar8 = iVar8 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar6 = thunk_FUN_004248d0(this,iVar2,iVar4,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    param_3 = thunk_FUN_004248d0(this,iVar2,iVar6,
                                 *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar6 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        iVar8 = *(int *)(iVar6 + 0xc + local_c);
        if ((iVar8 < *(int *)(iVar6 + -4 + local_c)) && (param_2 != iVar5)) {
          param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar8 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar6 = DAT_007f4d74;
        }
        iVar8 = *(int *)(iVar6 + 0xc + local_c);
        if (*(int *)(iVar6 + -4 + local_c) < iVar8) {
          param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar8 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          iVar6 = DAT_007f4d74;
        }
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar5 = *(int *)(iVar3 + 0xc + iVar6);
      if (*(int *)(iVar3 + 0x1c + iVar6) < iVar5) {
LAB_004278f1:
        param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar5 + DAT_007f4d7c,DAT_007f4d80 + param_1,
                                     CASE_3,~CASE_0);
        iVar6 = DAT_007f4d74;
      }
    }
  }
  else {
    if (param_3 == -1) {
      iVar3 = param_1 * 0x10;
      *(uint *)(DAT_007f4d6c + DAT_007f4d78 * 0xc) =
           (uint)(*(byte *)((*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c) *
                            *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c) + DAT_007f4d80
                           + param_1) >> 7);
      iVar4 = thunk_FUN_004248d0(this,iVar2,0,*(int *)(iVar3 + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_1,CASE_0,~CASE_0);
      iVar6 = *(int *)(iVar3 + DAT_007f4d74);
      iVar8 = iVar3;
      for (iVar7 = param_1; iVar7 <= param_2; iVar7 = iVar7 + 1) {
        if (*(int *)(iVar8 + DAT_007f4d74) < iVar6) {
          iVar4 = thunk_FUN_004248d0(this,iVar2,iVar4,*(int *)(iVar8 + DAT_007f4d74) + DAT_007f4d7c,
                                     DAT_007f4d80 + iVar7,CASE_0,~CASE_0);
        }
        if ((iVar7 < param_2) &&
           (iVar6 = *(int *)(iVar8 + DAT_007f4d74) + DAT_007f4d7c,
           iVar6 < *(int *)(iVar8 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
          iVar4 = thunk_FUN_004248d0(this,iVar2,iVar4,iVar6,DAT_007f4d80 + iVar7,CASE_1,~CASE_0);
        }
        iVar6 = *(int *)(iVar8 + DAT_007f4d74);
        iVar8 = iVar8 + 0x10;
      }
      local_c = param_2 * 0x10;
      iVar6 = thunk_FUN_004248d0(this,iVar2,iVar4,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_1,~CASE_0);
      param_3 = thunk_FUN_004248d0(this,iVar2,iVar6,
                                   *(int *)(local_c + 4 + DAT_007f4d74) + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_3,~CASE_0);
      iVar6 = DAT_007f4d74;
      if (param_1 < param_2) {
        do {
          iVar8 = *(int *)(local_c + 4 + iVar6);
          if ((iVar8 < *(int *)(local_c + -0xc + iVar6)) && (param_2 != iVar5)) {
            param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar8 + DAT_007f4d7c,
                                         DAT_007f4d80 + param_2,CASE_3,~CASE_0);
            iVar6 = DAT_007f4d74;
          }
          iVar8 = *(int *)(local_c + 4 + iVar6);
          if (*(int *)(local_c + -0xc + iVar6) < iVar8) {
            param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar8 + DAT_007f4d7c,
                                         DAT_007f4d80 + param_2,CASE_2,~CASE_0);
            iVar6 = DAT_007f4d74;
          }
          param_2 = param_2 + -1;
          local_c = local_c + -0x10;
        } while (param_1 < param_2);
        iVar5 = *(int *)(iVar3 + 4 + iVar6);
        if (*(int *)(iVar3 + 0x14 + iVar6) < iVar5) {
          param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar5 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_1,CASE_3,~CASE_0);
          iVar6 = DAT_007f4d74;
        }
      }
      iVar5 = *(int *)(iVar3 + 4 + iVar6);
      goto LAB_00427930;
    }
    iVar3 = param_1 * 0x10;
    *(uint *)(DAT_007f4d6c + DAT_007f4d78 * 0xc) =
         (uint)(*(byte *)((*(int *)(iVar3 + 8 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c) + DAT_007f4d80 +
                         param_1) >> 7);
    iVar4 = thunk_FUN_004248d0(this,iVar2,0,*(int *)(iVar3 + 8 + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar6 = *(int *)(iVar3 + 8 + DAT_007f4d74);
    iVar8 = iVar3;
    for (iVar7 = param_1; iVar7 <= param_2; iVar7 = iVar7 + 1) {
      iVar1 = *(int *)(iVar8 + 8 + DAT_007f4d74);
      if (iVar1 < iVar6) {
        iVar4 = thunk_FUN_004248d0(this,iVar2,iVar4,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar7,CASE_0
                                   ,~CASE_0);
      }
      if ((iVar7 < param_2) &&
         (iVar6 = *(int *)(iVar8 + 8 + DAT_007f4d74) + DAT_007f4d7c,
         iVar6 < *(int *)(iVar8 + 0x18 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar4 = thunk_FUN_004248d0(this,iVar2,iVar4,iVar6,DAT_007f4d80 + iVar7,CASE_1,~CASE_0);
      }
      iVar6 = *(int *)(iVar8 + 8 + DAT_007f4d74);
      iVar8 = iVar8 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar6 = thunk_FUN_004248d0(this,iVar2,iVar4,*(int *)(local_c + 8 + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    param_3 = thunk_FUN_004248d0(this,iVar2,iVar6,
                                 *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar6 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        iVar8 = *(int *)(local_c + 0xc + iVar6);
        if ((iVar8 < *(int *)(local_c + -4 + iVar6)) && (param_2 != iVar5)) {
          param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar8 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar6 = DAT_007f4d74;
        }
        iVar8 = *(int *)(local_c + 0xc + iVar6);
        if (*(int *)(local_c + -4 + iVar6) < iVar8) {
          param_3 = thunk_FUN_004248d0(this,iVar2,param_3,iVar8 + DAT_007f4d7c,
                                       DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          iVar6 = DAT_007f4d74;
        }
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar5 = *(int *)(iVar3 + 0xc + iVar6);
      if (*(int *)(iVar3 + 0x1c + iVar6) < iVar5) goto LAB_004278f1;
    }
  }
  local_8 = param_1 * 0x10;
  iVar5 = *(int *)(local_8 + 0xc + iVar6);
LAB_00427930:
  iVar5 = thunk_FUN_004248d0(this,iVar2,param_3,iVar5 + DAT_007f4d7c,DAT_007f4d80 + param_1,CASE_2,
                             ~CASE_0);
  *(int *)(DAT_007f4d6c + 4 + DAT_007f4d78 * 0xc) = iVar5;
  DAT_007f4d78 = DAT_007f4d78 + 1;
  return 0;
}

