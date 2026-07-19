
undefined4 FUN_006b7f00(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  HMIXEROBJ hmxobj;
  int iVar1;
  MMRESULT exceptionCode;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  tMIXERCONTROLDETAILS *ptVar3;
  InternalExceptionFrame local_68;
  tMIXERCONTROLDETAILS local_24;
  undefined4 local_c;
  undefined4 local_8;
  
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar1 = __setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    hmxobj = *(HMIXEROBJ *)(param_1 + 0x30);
    if ((hmxobj != (HMIXEROBJ)0x0) &&
       (iVar1 = param_1 + (param_2 & 0xff) * 0x18,
       (*(byte *)(param_1 + 0x38 + (param_2 & 0xff) * 0x18) & 1) != 0)) {
      ptVar3 = &local_24;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        ptVar3->cbStruct = 0;
        ptVar3 = (tMIXERCONTROLDETAILS *)&ptVar3->dwControlID;
      }
      local_24.dwControlID = *(DWORD *)(iVar1 + 0x3c);
      local_24.cChannels = *(DWORD *)(iVar1 + 0x44);
      local_24.paDetails = &local_c;
      local_24.cbStruct = 0x18;
      local_24.cbDetails = 4;
      local_c = param_3;
      local_8 = param_4;
      exceptionCode = mixerSetControlDetails(hmxobj,&local_24,0);
      if (exceptionCode != 0) {
        RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_SND_C_mixer_cpp_007edbe8,200);
      }
    }
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  g_currentExceptionFrame = local_68.previous;
  RaiseInternalException(iVar1,0,s_E__DKW_SND_C_mixer_cpp_007edbe8,0xcd);
  return 0xffffffff;
}

