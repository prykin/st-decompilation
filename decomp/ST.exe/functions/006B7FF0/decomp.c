
undefined4 FUN_006b7ff0(int param_1,uint param_2,undefined4 *param_3)

{
  HMIXEROBJ hmxobj;
  int iVar1;
  MMRESULT MVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  tMIXERCONTROLDETAILS *ptVar3;
  undefined4 local_64;
  undefined4 local_60 [16];
  tMIXERCONTROLDETAILS local_20;
  undefined4 local_8;
  
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar1 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    *param_3 = 0;
    hmxobj = *(HMIXEROBJ *)(param_1 + 0x30);
    if (((hmxobj != (HMIXEROBJ)0x0) &&
        ((*(byte *)(param_1 + 0x38 + (param_2 & 0xff) * 0x18) & 2) != 0)) &&
       (param_3 != (undefined4 *)0x0)) {
      ptVar3 = &local_20;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        ptVar3->cbStruct = 0;
        ptVar3 = (tMIXERCONTROLDETAILS *)&ptVar3->dwControlID;
      }
      local_20.dwControlID = *(DWORD *)(param_1 + (param_2 & 0xff) * 0x18 + 0x40);
      local_20.paDetails = &local_8;
      local_20.cbStruct = 0x18;
      local_20.cChannels = 1;
      local_20.cbDetails = 4;
      MVar2 = mixerGetControlDetailsA(hmxobj,&local_20,0);
      if (MVar2 != 0) {
        FUN_006a5e40(MVar2,DAT_007ed77c,0x7edbe8,0xe2);
      }
      *param_3 = local_8;
    }
    DAT_00858df8 = (undefined4 *)local_64;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_64;
  FUN_006a5e40(iVar1,0,0x7edbe8,0xe8);
  return 0xffffffff;
}

