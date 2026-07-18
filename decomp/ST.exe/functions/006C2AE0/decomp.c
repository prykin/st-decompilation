
int FUN_006c2ae0(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1[1] + 0x20) < 9) {
    iVar2 = FUN_006a5e40(-0x30,DAT_007ed77c,0x7ede64,0x9c);
    return iVar2;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1[2] & 0x40000000U) != 0) {
      FUN_006c2c80(param_1);
    }
    if ((param_3 & 0xc) != 0) {
      param_3 = param_3 & 0xfffffffd;
    }
    piVar1 = param_1 + 0xd;
    param_1[2] = param_1[2] & 0xfffffff0U | param_3;
    iVar2 = Ordinal_1(0,piVar1,0);
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede64,0xa8);
    }
    iVar2 = (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,*(undefined4 *)(param_1[1] + 4),2);
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede64,0xa9);
    }
    _BinkSetSoundSystem_8(_BinkOpenDirectSound_4_exref,*piVar1);
    if ((param_3 & 8) != 0) {
      local_8 = local_8 | 0x40000000;
    }
    iVar2 = _BinkOpen_8(param_2,local_8);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      FUN_006a5e40(-10,DAT_007ed77c,0x7ede64,0xb3);
    }
    _BinkGetSummary_8(*param_1,param_1 + 0xf);
    param_1[2] = param_1[2] & 0xfbffffffU | 0x40000000;
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  _BinkClose_4(*param_1);
  (**(code **)(*(int *)param_1[0xd] + 8))((int *)param_1[0xd]);
  param_1[0xd] = 0;
  FUN_006a5e40(iVar2,0,0x7ede64,0xc6);
  return iVar2;
}

