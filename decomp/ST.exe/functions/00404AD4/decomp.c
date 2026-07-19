
undefined4 __fastcall thunk_FUN_004c6d00(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  short asStack_18 [2];
  short asStack_14 [2];
  short asStack_10 [3];
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
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
      if (iVar3 != 2) goto LAB_004c6f47;
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
        goto LAB_004c6f47;
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
        thunk_FUN_00416270(param_1,asStack_10,asStack_14,asStack_18);
        sVar2 = (short)param_1[0x16c] * 0xc9 + 100;
        if (((asStack_10[0] == sVar2) &&
            (asStack_14[0] == (short)((short)param_1[0x16d] * 0xc9 + 100))) &&
           (asStack_18[0] == (short)((short)param_1[0x16e] * 200 + 100))) {
          param_1[0xf7] = 0;
          thunk_FUN_004167a0((int)param_1);
        }
        else {
          thunk_FUN_00415b30(param_1,asStack_10[0],asStack_14[0],asStack_18[0],sVar2,
                             (short)param_1[0x16d] * 0xc9 + 100,(short)param_1[0x16e] * 200 + 100,
                             *(byte *)((int)param_1 + 0x62));
        }
      }
    }
    if ((param_1[0x100] == 0) || (param_1[0xf7] == 0)) goto LAB_004c6f47;
    iVar3 = thunk_FUN_00415ed0(param_1,&uStack_20,&uStack_1c);
    if (iVar3 != -1) {
      if (iVar3 != 0) goto LAB_004c6f47;
LAB_004c6e4d:
      param_1[0xf7] = 0;
      thunk_FUN_004167a0((int)param_1);
      goto LAB_004c6f47;
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
LAB_004c6f47:
  thunk_FUN_004162f0(param_1,&sStack_6,&sStack_8,&sStack_a);
  param_1[0x16c] = (int)sStack_6;
  param_1[0x16d] = (int)sStack_8;
  param_1[0x16e] = (int)sStack_a;
  if ((param_1[0xf7] == 0) && (param_1[0xfb] != 0)) {
    param_1[0xfb] = 0;
    thunk_FUN_004c6bb0(param_1,param_1[0xfc],param_1[0xfd],param_1[0xfe]);
  }
  return 0;
}

