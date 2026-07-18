
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0062f3b0(void *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 ***local_5c;
  undefined4 local_58 [16];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c;
  undefined **local_8;
  
  local_18 = 0;
  switch(param_4) {
  case 1:
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
  default:
    local_8 = &PTR_s_rubb_w0_007d1480;
    break;
  case 2:
    local_8 = &PTR_s_rubb_g0_007d14a8;
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
    break;
  case 3:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = 0xf;
    local_c = 0xf;
    break;
  case 4:
    local_8 = &PTR_s_rubb_gw0_007d1514;
    goto LAB_0062f450;
  case 5:
    local_8 = &PTR_s_rubb_gb0_007d14f8;
LAB_0062f450:
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
    break;
  case 6:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
  }
  local_14 = param_1;
  if (param_1 == (void *)0x0) {
    return 0xffffffff;
  }
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  this = local_14;
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d1798,0x17b);
      return 0xffff;
    }
    iVar2 = thunk_FUN_004ab880(0xe,DAT_00806774,local_8[*param_2],0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004abe40(this,'\x0e',param_2[6]);
      thunk_FUN_004ad380(this,local_10 / 2,local_c / 2 - 0xe);
      thunk_FUN_004ad3c0(this,(float)param_2[3] * _DAT_007904f8 * _DAT_007904f0,
                         (float)param_2[4] * _DAT_007904f8 * _DAT_007904f0,
                         (float)param_2[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      DAT_00858df8 = (undefined4 ****)local_5c;
      return local_18;
    }
  }
  else {
    DAT_00858df8 = (undefined4 ****)local_5c;
    iVar3 = FUN_006ad4d0(s_E____titans_nick_to_Rubb_cpp_007d1798,0x189,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar2,0,0x7d1798,0x18b);
  }
  return 0xffff;
}

