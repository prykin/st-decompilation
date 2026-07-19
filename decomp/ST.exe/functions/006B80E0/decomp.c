
undefined4 FUN_006b80e0(int param_1,uint param_2,undefined4 param_3)

{
  HMIXEROBJ hmxobj;
  int iVar1;
  MMRESULT exceptionCode;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  tMIXERCONTROLDETAILS *ptVar2;
  InternalExceptionFrame local_64;
  tMIXERCONTROLDETAILS local_20;
  undefined4 local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar1 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    hmxobj = *(HMIXEROBJ *)(param_1 + 0x30);
    if ((hmxobj != (HMIXEROBJ)0x0) &&
       ((*(byte *)(param_1 + 0x38 + (param_2 & 0xff) * 0x18) & 2) != 0)) {
      ptVar2 = &local_20;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        ptVar2->cbStruct = 0;
        ptVar2 = (tMIXERCONTROLDETAILS *)&ptVar2->dwControlID;
      }
      local_20.dwControlID = *(DWORD *)(param_1 + (param_2 & 0xff) * 0x18 + 0x40);
      local_20.paDetails = &local_8;
      local_20.cbStruct = 0x18;
      local_20.cChannels = 1;
      local_20.cbDetails = 4;
      local_8 = param_3;
      exceptionCode = mixerSetControlDetails(hmxobj,&local_20,0);
      if (exceptionCode != 0) {
        RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_SND_C_mixer_cpp_007edbe8,0xfd);
      }
    }
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  RaiseInternalException(iVar1,0,s_E__DKW_SND_C_mixer_cpp_007edbe8,0x102);
  return 0xffffffff;
}

