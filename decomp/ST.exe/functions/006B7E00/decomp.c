
undefined4 FUN_006b7e00(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  HMIXEROBJ hmxobj;
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  tMIXERCONTROLDETAILS *ptVar4;
  undefined4 local_68;
  undefined4 local_64 [16];
  tMIXERCONTROLDETAILS local_24;
  undefined4 local_c;
  undefined4 local_8;
  
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar1 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    hmxobj = *(HMIXEROBJ *)(param_1 + 0x30);
    if ((((hmxobj != (HMIXEROBJ)0x0) &&
         (iVar1 = param_1 + (param_2 & 0xff) * 0x18,
         (*(byte *)(param_1 + 0x38 + (param_2 & 0xff) * 0x18) & 1) != 0)) &&
        (param_3 != (undefined4 *)0x0)) && (param_4 != (undefined4 *)0x0)) {
      ptVar4 = &local_24;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        ptVar4->cbStruct = 0;
        ptVar4 = (tMIXERCONTROLDETAILS *)&ptVar4->dwControlID;
      }
      local_24.dwControlID = *(DWORD *)(iVar1 + 0x3c);
      local_24.cChannels = *(DWORD *)(iVar1 + 0x44);
      local_24.paDetails = &local_c;
      local_24.cbStruct = 0x18;
      local_24.cbDetails = 4;
      MVar2 = mixerGetControlDetailsA(hmxobj,&local_24,0);
      if (MVar2 != 0) {
        FUN_006a5e40(MVar2,DAT_007ed77c,0x7edbe8,0xab);
      }
      *param_3 = local_c;
      *param_4 = local_8;
    }
    DAT_00858df8 = (undefined4 *)local_68;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_68;
  FUN_006a5e40(iVar1,0,0x7edbe8,0xb2);
  return 0xffffffff;
}

