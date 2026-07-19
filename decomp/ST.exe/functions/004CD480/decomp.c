
undefined4 __fastcall FUN_004cd480(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = 0;
  uVar1 = thunk_FUN_004406c0((char)param_1[0x119]);
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    iVar2 = thunk_FUN_004e60d0(param_1[0x119],0x98);
joined_r0x004cd4ea:
    if (iVar2 != 0) {
      iVar3 = 1;
    }
  }
  else {
    if (uVar1 == 2) {
      iVar2 = param_1[0x119];
      iVar5 = 0x94;
LAB_004cd4c0:
      iVar2 = thunk_FUN_004e60d0(iVar2,iVar5);
      goto joined_r0x004cd4ea;
    }
    if (uVar1 == 3) {
      iVar2 = param_1[0x119];
      iVar5 = 0x90;
      goto LAB_004cd4c0;
    }
  }
  if (*(uint *)(DAT_00802a38 + 0xe4) < (uint)((&DAT_007914d8)[iVar3] + param_1[0x11a])) {
    return 0;
  }
  uVar1 = param_1[7] * 0x41c64e6d + 0x3039;
  param_1[7] = uVar1;
  if ((uVar1 & 0x30000) < 0x20001) {
    uVar4 = 1;
    if (param_1[0x119] != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    thunk_FUN_0052af50(1,*(float *)((int)param_1 + 0x1f9),*(float *)((int)param_1 + 0x1fd));
    uVar1 = thunk_FUN_004406c0((char)param_1[9]);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 1) {
      iVar3 = *param_1;
      uVar6 = 0x7a;
    }
    else {
      if (uVar1 == 2) {
        (**(code **)(*param_1 + 0x90))(6,0x7b);
        thunk_FUN_004cd450((int)param_1);
        return 1;
      }
      if (uVar1 != 3) goto cf_common_exit_004CD624;
      iVar3 = *param_1;
      uVar6 = 0x7c;
    }
  }
  else {
    uVar4 = 2;
    if (param_1[0x119] != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    thunk_FUN_0052af50(1,*(float *)((int)param_1 + 0x1f9),*(float *)((int)param_1 + 0x1fd));
    uVar1 = thunk_FUN_004406c0((char)param_1[9]);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 1) {
      iVar3 = *param_1;
      uVar6 = 0x7d;
    }
    else {
      if (uVar1 == 2) {
        (**(code **)(*param_1 + 0x90))(6,0x7e);
        thunk_FUN_004cd450((int)param_1);
        return 2;
      }
      if (uVar1 != 3) goto cf_common_exit_004CD624;
      iVar3 = *param_1;
      uVar6 = 0x7f;
    }
  }
  (**(code **)(iVar3 + 0x90))(6,uVar6);
cf_common_exit_004CD624:
  thunk_FUN_004cd450((int)param_1);
  return uVar4;
}

