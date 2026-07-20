
undefined4 __fastcall FUN_005ee6e0(int *param_1)

{
  uint uVar1;
  STT3DSprC *this;
  void *pvVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 uVar7;
  undefined4 local_38 [2];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  switch(*(undefined4 *)((int)param_1 + 0x23a)) {
  case 0:
    if (*(void **)((int)param_1 + 0x28f) <= DAT_00802a38[7].messages) {
      *(void **)((int)param_1 + 0x28f) = DAT_00802a38[7].messages;
      uVar1 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar1;
      thunk_FUN_005ecd70(param_1,*(int *)((int)param_1 + 0x277),*(int *)((int)param_1 + 0x27b),
                         *(int *)((int)param_1 + 0x27f) + -0x1e,*(int *)((int)param_1 + 0x2ba),'\0',
                         0x1e - (uVar1 >> 0x10) % 0xb);
      *(undefined4 *)((int)param_1 + 0x23a) = 1;
      param_1[199] = param_1[199] | 1;
      return 1;
    }
    break;
  case 1:
    iVar4 = thunk_FUN_005ede30(param_1,&local_c,&local_10,&local_14);
    if (iVar4 != 0) {
      *(int *)((int)param_1 + 0x27f) = local_14;
      *(int *)((int)param_1 + 0x277) = local_c;
      *(int *)((int)param_1 + 0x27b) = local_10;
      if ((((*(char *)((int)param_1 + 0x317) != '\0') && (((uint)DAT_00802a38[7].messages & 3) == 0)
           ) && ((char)param_1[0x94] == '\0')) && (*(char *)((int)param_1 + 0x24f) == '\0')) {
        iVar4 = thunk_FUN_005eda50(param_1);
        if (iVar4 == 0) {
          iVar4 = thunk_FUN_005f07a0(param_1);
          if (iVar4 != 0) {
            *(undefined1 *)(param_1 + 0x94) = 1;
            *(undefined1 *)((int)param_1 + 0x24f) = 1;
            *(undefined4 *)((int)param_1 + 0x23a) = 3;
            *(int *)((int)param_1 + 0x28f) = (int)DAT_00802a38[7].messages + 10;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x94) = 1;
          *(undefined1 *)((int)param_1 + 0x24f) = 1;
          *(undefined4 *)((int)param_1 + 0x23a) = 3;
          *(int *)((int)param_1 + 0x28f) = (int)DAT_00802a38[7].messages + 10;
        }
      }
      local_8 = 1;
    }
    if ((*(int *)((int)param_1 + 0x23a) != 1) && (*(int *)((int)param_1 + 0x23a) != 3)) {
      *(undefined1 *)(param_1 + 0x94) = 0;
      return local_8;
    }
    break;
  case 2:
    if (DAT_00802a38[7].messages < *(void **)((int)param_1 + 0x28f)) {
      if (((DAT_00802a38[7].messages == (void *)((int)*(void **)((int)param_1 + 0x28f) + 1U)) &&
          (*(void **)((int)param_1 + 0x211) != (void *)0x0)) &&
         (-1 < (int)*(uint *)((int)param_1 + 0x1ed))) {
        FUN_006ea2f0(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed));
        return local_8;
      }
    }
    else {
      iVar4 = thunk_FUN_005ed1c0(param_1,&local_c,&local_10,&local_14,&local_18);
      if (iVar4 != 0) {
        *(int *)((int)param_1 + 0x277) = local_c;
        *(int *)((int)param_1 + 0x27b) = local_10;
        *(int *)((int)param_1 + 0x2ba) = local_18;
        *(int *)((int)param_1 + 0x27f) = local_14;
        if (*(int *)((int)param_1 + 0x283) == 0) {
          if (*(char *)((int)param_1 + 0x24f) != '\0') {
            thunk_FUN_005ef6c0(param_1,1);
            *(undefined4 *)((int)param_1 + 0x23a) = 7;
            return 1;
          }
          pvVar2 = DAT_00802a38[7].messages;
          *(undefined4 *)((int)param_1 + 0x23a) = 0;
          *(int *)((int)param_1 + 0x28f) = (int)pvVar2 + 10;
        }
        return 1;
      }
    }
    break;
  case 3:
    if (*(void **)((int)param_1 + 0x28f) <= DAT_00802a38[7].messages) {
      if ((char)param_1[0x94] == '\x02') {
        iVar4 = thunk_FUN_005edc20(param_1);
        if (iVar4 < 0) {
LAB_005ee9db:
          *(undefined1 *)(param_1 + 0x94) = 0;
          *(undefined1 *)((int)param_1 + 0x24f) = 0;
        }
        else if (0 < iVar4) {
          if (iVar4 < 2) {
            *(undefined4 *)((int)param_1 + 0x23a) = 6;
            *(undefined1 *)(param_1 + 0x94) = 3;
          }
          else {
            *(undefined4 *)((int)param_1 + 0x23a) = 8;
            *(int *)((int)param_1 + 0x28f) = (int)DAT_00802a38[7].messages + 0x15;
          }
        }
      }
      else {
        iVar4 = thunk_FUN_005ed1c0(param_1,&local_c,&local_10,&local_14,&local_18);
        if (iVar4 == 0) {
          bVar3 = thunk_FUN_005ef4b0(param_1,*(int *)((int)param_1 + 0x273));
          if (CONCAT31(extraout_var,bVar3) == 0) {
            thunk_FUN_005ee670(param_1);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x23a) = 2;
          }
          goto LAB_005ee9db;
        }
        *(int *)((int)param_1 + 0x27b) = local_10;
        *(int *)((int)param_1 + 0x277) = local_c;
        *(int *)((int)param_1 + 0x27f) = local_14;
        *(int *)((int)param_1 + 0x2ba) = local_18;
        if (((*(int *)((int)param_1 + 0x283) == 0) && (*(char *)((int)param_1 + 0x24f) != '\0')) &&
           ((char)param_1[0x94] != '\0')) {
          *(undefined1 *)(param_1 + 0x94) = 2;
        }
        local_8 = 1;
      }
    }
    if (((char)param_1[0x94] == '\0') && (*(int *)((int)param_1 + 0x23a) != 6)) {
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(undefined1 *)((int)param_1 + 0x24f) = 0;
      return local_8;
    }
    break;
  case 4:
    local_30 = param_1[2];
    local_28 = 0x129;
    local_2c = 2;
    SystemClassTy::PostMessage(DAT_00802a38,local_38);
    return local_8;
  case 5:
    if (*(char *)((int)param_1 + 0x315) == '\x03') {
      if (DAT_00802a38[7].messages == (void *)param_1[0xb8]) {
cf_common_exit_005EEDDF:
        *(undefined4 *)((int)param_1 + 0x23a) = 6;
      }
    }
    else if (*(char *)((int)param_1 + 0x315) == '\x05') {
      if (*(int *)((int)param_1 + 0x2d2) < 0) goto cf_common_exit_005EEDDF;
    }
    else {
      this = (STT3DSprC *)((int)param_1 + 0x1d5);
      iVar4 = thunk_FUN_004ac910(this,'\b');
      if (iVar4 == 1) {
        STT3DSprC::StopShow(this,0xf);
        STT3DSprC::StopShow(this,0);
        STT3DSprC::StopShow(this,1);
      }
      if (iVar4 == *(int *)(&DAT_007cdf52 + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32)) {
        iVar5 = thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x242),(short)param_1[0x91],
                                   *(short *)((int)param_1 + 0x246),0,(int)param_1);
        if (iVar5 == 0) {
          *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + -1;
        }
        STT3DSprC::StopShow(this,0xe);
        if ((*(char *)((int)param_1 + 0x315) == '\x04') ||
           (*(char *)((int)param_1 + 0x315) == '\x02')) {
          uVar7 = 0xffffffff;
          uVar6 = thunk_FUN_004ad650((int)this);
          thunk_FUN_0062b770((int)*(short *)((int)param_1 + 0x41),
                             (int)*(short *)((int)param_1 + 0x43),
                             (int)*(short *)((int)param_1 + 0x45),
                             *(undefined4 *)((int)param_1 + 0x231),(int)param_1,
                             (int)(short)param_1[0x1b],uVar6,uVar7);
        }
        if (*(int *)((int)param_1 + 0x231) == 0xfd) {
          if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
            thunk_FUN_005f0d00((int)param_1);
            iVar5 = STAllPlayersC::UnRegisterArtefact
                              (g_sTAllPlayers_007FA174,
                               CONCAT22(extraout_var_01,*(undefined2 *)((int)param_1 + 0x32)),
                               (uint)param_1);
            goto joined_r0x005eed0b;
          }
        }
        else if ((*(int *)((int)param_1 + 0x231) == 0xfe) &&
                (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          thunk_FUN_005f0d90((int)param_1);
          iVar5 = STAllPlayersC::UnRegisterContainer
                            (g_sTAllPlayers_007FA174,
                             CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0x32)),
                             (uint)param_1);
joined_r0x005eed0b:
          if (iVar5 != 0) {
            *(undefined4 *)((int)param_1 + 0x23a) = 6;
          }
        }
        if (*(int *)((int)param_1 + 0x23a) != 6) {
          *(undefined1 *)(param_1 + 0xb9) = 0;
        }
      }
      if (iVar4 == *(int *)(&DAT_007cdf56 + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32)) {
        thunk_FUN_004ad5e0((int)this);
      }
      if (iVar4 == *(int *)(&DAT_007cdf5a + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32)) {
        STT3DSprC::StartShow(this,9,DAT_00802a38[7].messages);
      }
      iVar5 = (uint)*(byte *)((int)param_1 + 0x2df) * 0x32;
      if ((*(int *)(&DAT_007cdf5a + iVar5) < iVar4) &&
         (iVar4 == *(int *)(&DAT_007cdf4e + iVar5) + -1)) {
        STT3DSprC::StopShow(this,8);
      }
      iVar4 = thunk_FUN_004ac910(this,'\t');
      if (iVar4 == *(int *)(&DAT_007cdf5e + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32))
      goto cf_common_exit_005EEDDF;
    }
    thunk_FUN_005eeff0(param_1,1);
    break;
  case 6:
    iVar4 = thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x242),(short)param_1[0x91],
                               *(short *)((int)param_1 + 0x246),0,(int)param_1);
    if (iVar4 == 0) {
      *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + -1;
      return local_8;
    }
    break;
  case 7:
    local_8 = 1;
    if (*(char *)((int)param_1 + 0x24f) == '\0') {
      pvVar2 = DAT_00802a38[7].messages;
      *(undefined4 *)((int)param_1 + 0x23a) = 0;
      *(int *)((int)param_1 + 0x28f) = (int)pvVar2 + 10;
      return 1;
    }
    break;
  case 8:
    if (*(void **)((int)param_1 + 0x28f) <= DAT_00802a38[7].messages) {
      thunk_FUN_005f0a30(param_1);
      *(undefined4 *)((int)param_1 + 0x23a) = 6;
      return local_8;
    }
  }
  return local_8;
}

