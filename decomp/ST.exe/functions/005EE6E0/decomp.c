
undefined4 __fastcall FUN_005ee6e0(AnonShape_005EE6E0_AB6798ED *param_1)

{
  uint uVar1;
  undefined1 *this;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 uVar6;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  switch(param_1->field_023A) {
  case 0:
    if ((uint)param_1->field_028F <= (uint)PTR_00802a38->field_00E4) {
      param_1->field_028F = PTR_00802a38->field_00E4;
      uVar1 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&param_1->field_0x1c = uVar1;
      thunk_FUN_005ecd70(param_1,param_1->field_0277,param_1->field_027B,param_1->field_027F + -0x1e
                         ,param_1->field_02BA,'\0',0x1e - (uVar1 >> 0x10) % 0xb);
      uVar1 = *(uint *)&param_1[1].field_0x4;
      param_1->field_023A = 1;
      *(uint *)&param_1[1].field_0x4 = uVar1 | 1;
      return 1;
    }
    break;
  case 1:
    iVar3 = thunk_FUN_005ede30(param_1,&local_c,&local_10,&local_14);
    if (iVar3 != 0) {
      param_1->field_027F = local_14;
      param_1->field_0277 = local_c;
      param_1->field_027B = local_10;
      if ((((param_1->field_0317 != '\0') && ((*(byte *)&PTR_00802a38->field_00E4 & 3) == 0)) &&
          (param_1->field_0x250 == '\0')) && (param_1->field_024F == '\0')) {
        iVar3 = thunk_FUN_005eda50((AnonShape_005EDA50_4BDBD797 *)param_1);
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_005f07a0((STBoatC *)param_1);
          if (iVar3 != 0) {
            param_1->field_0x250 = 1;
            param_1->field_024F = 1;
            param_1->field_023A = 3;
            param_1->field_028F = PTR_00802a38->field_00E4 + 10;
          }
        }
        else {
          param_1->field_0x250 = 1;
          param_1->field_024F = 1;
          param_1->field_023A = 3;
          param_1->field_028F = PTR_00802a38->field_00E4 + 10;
        }
      }
      local_8 = 1;
    }
    if ((param_1->field_023A != 1) && (param_1->field_023A != 3)) {
      param_1->field_0x250 = 0;
      return local_8;
    }
    break;
  case 2:
    if ((uint)PTR_00802a38->field_00E4 < (uint)param_1->field_028F) {
      if (((PTR_00802a38->field_00E4 == param_1->field_028F + 1) &&
          (param_1->field_0211 != (void *)0x0)) && (-1 < (int)param_1->field_01ED)) {
        FUN_006ea2f0(param_1->field_0211,param_1->field_01ED);
        return local_8;
      }
    }
    else {
      iVar3 = thunk_FUN_005ed1c0(param_1,&local_c,&local_10,&local_14,&local_18);
      if (iVar3 != 0) {
        param_1->field_0277 = local_c;
        param_1->field_027B = local_10;
        param_1->field_02BA = local_18;
        param_1->field_027F = local_14;
        if (param_1->field_0283 == 0) {
          if (param_1->field_024F != '\0') {
            thunk_FUN_005ef6c0(param_1,1);
            param_1->field_023A = 7;
            return 1;
          }
          iVar3 = PTR_00802a38->field_00E4;
          param_1->field_023A = 0;
          param_1->field_028F = iVar3 + 10;
        }
        return 1;
      }
    }
    break;
  case 3:
    if ((uint)param_1->field_028F <= (uint)PTR_00802a38->field_00E4) {
      if (param_1->field_0x250 == '\x02') {
        iVar3 = thunk_FUN_005edc20((AnonShape_005EDC20_3D37DB9E *)param_1);
        if (iVar3 < 0) {
LAB_005ee9db:
          param_1->field_0x250 = 0;
          param_1->field_024F = 0;
        }
        else if (0 < iVar3) {
          if (iVar3 < 2) {
            param_1->field_023A = 6;
            param_1->field_0x250 = 3;
          }
          else {
            param_1->field_023A = 8;
            param_1->field_028F = PTR_00802a38->field_00E4 + 0x15;
          }
        }
      }
      else {
        iVar3 = thunk_FUN_005ed1c0(param_1,&local_c,&local_10,&local_14,&local_18);
        if (iVar3 == 0) {
          bVar2 = thunk_FUN_005ef4b0(param_1,param_1->field_0273);
          if (CONCAT31(extraout_var,bVar2) == 0) {
            thunk_FUN_005ee670((AnonShape_005EE670_EFEE702F *)param_1);
          }
          else {
            param_1->field_023A = 2;
          }
          goto LAB_005ee9db;
        }
        param_1->field_027B = local_10;
        param_1->field_0277 = local_c;
        param_1->field_027F = local_14;
        param_1->field_02BA = local_18;
        if (((param_1->field_0283 == 0) && (param_1->field_024F != '\0')) &&
           (param_1->field_0x250 != '\0')) {
          param_1->field_0x250 = 2;
        }
        local_8 = 1;
      }
    }
    if ((param_1->field_0x250 == '\0') && (param_1->field_023A != 6)) {
      param_1->field_0x250 = 0;
      param_1->field_024F = 0;
      return local_8;
    }
    break;
  case 4:
    local_30 = *(undefined4 *)&param_1->field_0x8;
    local_28 = 0x129;
    local_2c = 2;
    SystemClassTy::PostMessage((SystemClassTy *)PTR_00802a38,local_38);
    return local_8;
  case 5:
    if (param_1->field_0315 == '\x03') {
      if (PTR_00802a38->field_00E4 == *(int *)&param_1->field_0x2e0) {
cf_common_exit_005EEDDF:
        param_1->field_023A = 6;
      }
    }
    else if (param_1->field_0315 == '\x05') {
      if (param_1->field_02D2 < 0) goto cf_common_exit_005EEDDF;
    }
    else {
      this = &param_1->field_0x1d5;
      iVar3 = thunk_FUN_004ac910(this,'\b');
      if (iVar3 == 1) {
        STT3DSprC::StopShow((STT3DSprC *)this,0xf);
        STT3DSprC::StopShow((STT3DSprC *)this,0);
        STT3DSprC::StopShow((STT3DSprC *)this,1);
      }
      if (iVar3 == *(int *)(&DAT_007cdf52 + (uint)param_1->field_02DF * 0x32)) {
        iVar4 = thunk_FUN_00495ff0(param_1->field_0242,*(short *)&param_1->field_0x244,
                                   param_1->field_0246,0,(AnonShape_00495FF0_59081BDD *)param_1);
        if (iVar4 == 0) {
          param_1->field_0252 = param_1->field_0252 + -1;
        }
        STT3DSprC::StopShow((STT3DSprC *)this,0xe);
        if ((param_1->field_0315 == '\x04') || (param_1->field_0315 == '\x02')) {
          uVar6 = 0xffffffff;
          uVar5 = thunk_FUN_004ad650((int)this);
          thunk_FUN_0062b770((int)param_1->field_0041,(int)param_1->field_0043,
                             (int)param_1->field_0045,param_1->field_0231,(int)param_1,
                             (int)*(short *)&param_1->field_0x6c,uVar5,uVar6);
        }
        if (param_1->field_0231 == 0xfd) {
          if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
            thunk_FUN_005f0d00((AnonShape_005F0D00_68DA5B8B *)param_1);
            iVar4 = STAllPlayersC::UnRegisterArtefact
                              (g_sTAllPlayers_007FA174,CONCAT22(extraout_var_01,param_1->field_0032)
                               ,(AnonShape_00449E60_F2069C78 *)param_1);
            goto joined_r0x005eed0b;
          }
        }
        else if ((param_1->field_0231 == 0xfe) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
        {
          thunk_FUN_005f0d90((AnonShape_005F0D90_C3146DC2 *)param_1);
          iVar4 = STAllPlayersC::UnRegisterContainer
                            (g_sTAllPlayers_007FA174,CONCAT22(extraout_var_00,param_1->field_0032),
                             (AnonShape_0044A730_DBE673B2 *)param_1);
joined_r0x005eed0b:
          if (iVar4 != 0) {
            param_1->field_023A = 6;
          }
        }
        if (param_1->field_023A != 6) {
          param_1->field_0x2e4 = 0;
        }
      }
      if (iVar3 == *(int *)(&DAT_007cdf56 + (uint)param_1->field_02DF * 0x32)) {
        thunk_FUN_004ad5e0((int)this);
      }
      if (iVar3 == *(int *)(&DAT_007cdf5a + (uint)param_1->field_02DF * 0x32)) {
        STT3DSprC::StartShow((STT3DSprC *)this,9,PTR_00802a38->field_00E4);
      }
      iVar4 = (uint)param_1->field_02DF * 0x32;
      if ((*(int *)(&DAT_007cdf5a + iVar4) < iVar3) &&
         (iVar3 == *(int *)(&DAT_007cdf4e + iVar4) + -1)) {
        STT3DSprC::StopShow((STT3DSprC *)this,8);
      }
      iVar3 = thunk_FUN_004ac910(this,'\t');
      if (iVar3 == *(int *)(&DAT_007cdf5e + (uint)param_1->field_02DF * 0x32))
      goto cf_common_exit_005EEDDF;
    }
    thunk_FUN_005eeff0(param_1,1);
    break;
  case 6:
    iVar3 = thunk_FUN_00495ff0(param_1->field_0242,*(short *)&param_1->field_0x244,
                               param_1->field_0246,0,(AnonShape_00495FF0_59081BDD *)param_1);
    if (iVar3 == 0) {
      param_1->field_0252 = param_1->field_0252 + -1;
      return local_8;
    }
    break;
  case 7:
    local_8 = 1;
    if (param_1->field_024F == '\0') {
      iVar3 = PTR_00802a38->field_00E4;
      param_1->field_023A = 0;
      param_1->field_028F = iVar3 + 10;
      return 1;
    }
    break;
  case 8:
    if ((uint)param_1->field_028F <= (uint)PTR_00802a38->field_00E4) {
      thunk_FUN_005f0a30((STBoatC *)param_1);
      param_1->field_023A = 6;
      return local_8;
    }
  }
  return local_8;
}

