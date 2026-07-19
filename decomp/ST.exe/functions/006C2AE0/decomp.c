
int FUN_006c2ae0(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int extraout_EAX;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1[1] + 0x20) < 9) {
    RaiseInternalException(-0x30,DAT_007ed77c,s_E__DKW_DV_C_dkbvideo_cpp_007ede64,0x9c);
    return extraout_EAX;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
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
      RaiseInternalException(iVar2,DAT_007ed77c,s_E__DKW_DV_C_dkbvideo_cpp_007ede64,0xa8);
    }
    iVar2 = (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,*(undefined4 *)(param_1[1] + 4),2);
    if (iVar2 != 0) {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E__DKW_DV_C_dkbvideo_cpp_007ede64,0xa9);
    }
    _BinkSetSoundSystem_8(_BinkOpenDirectSound_4_exref,*piVar1);
    if ((param_3 & 8) != 0) {
      local_8 = local_8 | 0x40000000;
    }
    iVar2 = _BinkOpen_8(param_2,local_8);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      RaiseInternalException(-10,DAT_007ed77c,s_E__DKW_DV_C_dkbvideo_cpp_007ede64,0xb3);
    }
    _BinkGetSummary_8(*param_1,param_1 + 0xf);
    param_1[2] = param_1[2] & 0xfbffffffU | 0x40000000;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  _BinkClose_4(*param_1);
  (**(code **)(*(int *)param_1[0xd] + 8))((int *)param_1[0xd]);
  param_1[0xd] = 0;
  RaiseInternalException(iVar2,0,s_E__DKW_DV_C_dkbvideo_cpp_007ede64,0xc6);
  return iVar2;
}

