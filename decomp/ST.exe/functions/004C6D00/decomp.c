
undefined4 __fastcall FUN_004c6d00(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  short local_18 [2];
  short local_14 [2];
  short local_10 [3];
  short local_a;
  short local_8;
  short local_6;
  
  if (param_1[0xff] == 0) {
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x4f,0,-5,&DAT_007a4ccc,
                                 s_move_error_007ad390);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      iVar3 = 0x4f;
    }
    else {
      if (iVar3 == 1) goto LAB_004c6e4d;
      if (iVar3 != 2) goto cf_common_exit_004C6F47;
      iVar3 = param_1[0x101];
      param_1[0x101] = iVar3 + 1;
      if ((9 < iVar3 + 1) && (iVar3 = thunk_FUN_004ea620((int)param_1), iVar3 != 0)) {
        param_1[0xff] = 1;
        param_1[0x100] = 0;
      }
      iVar3 = thunk_FUN_00418030(param_1,(short)param_1[0xf8],(short)param_1[0xf9],
                                 (short)param_1[0xfa]);
      if (iVar3 != -1) {
        if (iVar3 == 2) {
          param_1[0xf7] = 0;
        }
        goto cf_common_exit_004C6F47;
      }
      iVar3 = 0x59;
    }
  }
  else {
    if (param_1[0x100] == 0) {
      iVar3 = (**(code **)(*param_1 + 0x20))();
      if (iVar3 == -1) {
        iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x35,0,-5,
                                   &DAT_007a4ccc,s_stop_move_error_007ad3a0);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x35);
      }
      else if (iVar3 == 1) {
        param_1[0x100] = 1;
        thunk_FUN_00416270(param_1,local_10,local_14,local_18);
        sVar2 = (short)param_1[0x16c] * 0xc9 + 100;
        if (((local_10[0] == sVar2) && (local_14[0] == (short)((short)param_1[0x16d] * 0xc9 + 100)))
           && (local_18[0] == (short)((short)param_1[0x16e] * 200 + 100))) {
          param_1[0xf7] = 0;
          thunk_FUN_004167a0((int)param_1);
        }
        else {
          thunk_FUN_00415b30(param_1,local_10[0],local_14[0],local_18[0],sVar2,
                             (short)param_1[0x16d] * 0xc9 + 100,(short)param_1[0x16e] * 200 + 100,
                             *(byte *)((int)param_1 + 0x62));
        }
      }
    }
    if ((param_1[0x100] == 0) || (param_1[0xf7] == 0)) goto cf_common_exit_004C6F47;
    iVar3 = thunk_FUN_00415ed0(param_1,&local_20,&local_1c);
    if (iVar3 != -1) {
      if (iVar3 != 0) goto cf_common_exit_004C6F47;
LAB_004c6e4d:
      param_1[0xf7] = 0;
      thunk_FUN_004167a0((int)param_1);
      goto cf_common_exit_004C6F47;
    }
    iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x47,0,-5,&DAT_007a4ccc,
                               s_move_error_007ad390);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    iVar3 = 0x47;
  }
  RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_bmove_cpp_007ad368,iVar3);
cf_common_exit_004C6F47:
  thunk_FUN_004162f0(param_1,&local_6,&local_8,&local_a);
  param_1[0x16c] = (int)local_6;
  param_1[0x16d] = (int)local_8;
  param_1[0x16e] = (int)local_a;
  if ((param_1[0xf7] == 0) && (param_1[0xfb] != 0)) {
    param_1[0xfb] = 0;
    thunk_FUN_004c6bb0(param_1,param_1[0xfc],param_1[0xfd],param_1[0xfe]);
  }
  return 0;
}

