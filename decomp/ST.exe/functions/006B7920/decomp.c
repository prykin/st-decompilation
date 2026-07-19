
undefined4 FUN_006b7920(undefined4 *param_1,DWORD_PTR param_2)

{
  LPMIXERCAPSA ptVar1;
  int iVar2;
  UINT UVar3;
  MMRESULT MVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  tagMIXERLINEA *ptVar7;
  tagMIXERLINECONTROLSA *ptVar8;
  tagMIXERCONTROLA *ptVar9;
  tagMIXERLINEA local_254;
  tagMIXERLINEA local_1ac;
  InternalExceptionFrame local_104;
  tagMIXERCONTROLA local_c0;
  int local_2c;
  uint local_28;
  uint local_24;
  tagMIXERLINECONTROLSA local_20;
  LPMIXERCAPSA local_8;
  
  local_104.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_104;
  iVar2 = __setjmp3(local_104.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_104.previous;
    if (*(HMIXER *)(local_8 + 1) != (HMIXER)0x0) {
      mixerClose(*(HMIXER *)(local_8 + 1));
    }
    if (local_8 != (LPMIXERCAPSA)0x0) {
      FUN_006ab060(&local_8);
    }
    RaiseInternalException(iVar2,0,s_E__DKW_SND_C_mixer_cpp_007edbe8,0x94);
    return 0xffffffff;
  }
  local_8 = (LPMIXERCAPSA)FUN_006aac10(0x98);
  UVar3 = mixerGetNumDevs();
  if (UVar3 == 0) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__DKW_SND_C_mixer_cpp_007edbe8,0x1e);
  }
  MVar4 = mixerGetDevCapsA(local_8[1].vDriverVersion,local_8,0x30);
  if (MVar4 != 0) {
    RaiseInternalException(MVar4,DAT_007ed77c,s_E__DKW_SND_C_mixer_cpp_007edbe8,0x21);
  }
  MVar4 = mixerOpen((LPHMIXER)(local_8 + 1),local_8[1].vDriverVersion,param_2,0,0x10000);
  if (MVar4 != 0) {
    RaiseInternalException(MVar4,DAT_007ed77c,s_E__DKW_SND_C_mixer_cpp_007edbe8,0x25);
  }
  uVar6 = 0;
  local_28 = 0;
  if (local_8->cDestinations != 0) {
    do {
      ptVar1 = local_8;
      uVar6 = local_28;
      ptVar7 = &local_254;
      for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
        ptVar7->cbStruct = 0;
        ptVar7 = (tagMIXERLINEA *)&ptVar7->dwDestination;
      }
      local_254.cbStruct = 0xa8;
      local_254.dwDestination = uVar6;
      mixerGetLineInfoA(*(HMIXEROBJ *)(ptVar1 + 1),&local_254,0);
    } while ((local_254.dwComponentType != 4) &&
            (uVar6 = uVar6 + 1, local_28 = uVar6, uVar6 < local_8->cDestinations));
  }
  if (uVar6 == local_8->cDestinations) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__DKW_SND_C_mixer_cpp_007edbe8,0x30);
  }
  ptVar1 = local_8;
  ptVar8 = &local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar8->cbStruct = 0;
    ptVar8 = (tagMIXERLINECONTROLSA *)&ptVar8->dwLineID;
  }
  local_20.pamxctrl = &local_c0;
  local_20.dwLineID = local_254.dwLineID;
  ptVar9 = &local_c0;
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar9->cbStruct = 0;
    ptVar9 = (tagMIXERCONTROLA *)&ptVar9->dwControlID;
  }
  local_20.cbStruct = 0x18;
  local_20.u.dwControlID = 0x50030001;
  local_20.cControls = 1;
  local_20.cbmxctrl = 0x94;
  MVar4 = mixerGetLineControlsA(*(HMIXEROBJ *)(ptVar1 + 1),&local_20,2);
  if (MVar4 == 0) {
    *(uint *)local_8[1].szPname = *(uint *)local_8[1].szPname | 1;
    *(DWORD *)(local_8[1].szPname + 4) = local_c0.dwControlID;
    *(DWORD *)(local_8[1].szPname + 0xc) = local_254.cChannels;
    *(LONG *)(local_8[1].szPname + 0x10) = local_c0.Bounds.s.lMinimum;
    *(LONG *)(local_8[1].szPname + 0x14) = local_c0.Bounds.s.lMaximum;
  }
  ptVar8 = &local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar8->cbStruct = 0;
    ptVar8 = (tagMIXERLINECONTROLSA *)&ptVar8->dwLineID;
  }
  local_20.dwLineID = local_254.dwLineID;
  ptVar9 = &local_c0;
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar9->cbStruct = 0;
    ptVar9 = (tagMIXERCONTROLA *)&ptVar9->dwControlID;
  }
  local_20.cbStruct = 0x18;
  local_20.u.dwControlID = 0x20010002;
  local_20.cControls = 1;
  local_20.cbmxctrl = 0x94;
  local_20.pamxctrl = &local_c0;
  MVar4 = mixerGetLineControlsA(*(HMIXEROBJ *)(local_8 + 1),&local_20,2);
  if (MVar4 == 0) {
    *(uint *)local_8[1].szPname = *(uint *)local_8[1].szPname | 2;
    *(DWORD *)(local_8[1].szPname + 8) = local_c0.dwControlID;
  }
  local_2c = -1;
  local_24 = 0;
  if (local_254.cConnections != 0) {
    do {
      uVar6 = local_24;
      ptVar7 = &local_1ac;
      for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
        ptVar7->cbStruct = 0;
        ptVar7 = (tagMIXERLINEA *)&ptVar7->dwDestination;
      }
      local_1ac.cbStruct = 0xa8;
      local_1ac.dwDestination = local_28;
      local_1ac.dwSource = uVar6;
      MVar4 = mixerGetLineInfoA(*(HMIXEROBJ *)(local_8 + 1),&local_1ac,1);
      if (MVar4 != 0) {
        RaiseInternalException(MVar4,DAT_007ed77c,s_E__DKW_SND_C_mixer_cpp_007edbe8,0x5a);
      }
      if ((local_1ac.fdwLine & 0x8000) == 0) {
        iVar2 = -1;
        switch(local_1ac.dwComponentType) {
        case 0x1004:
          if (local_1ac.Target.dwType == 3) {
            iVar2 = 2;
          }
          break;
        case 0x1005:
          iVar2 = 3;
          local_2c = 3;
          break;
        case 0x1008:
          iVar2 = 1;
          break;
        case 0x1009:
          if ((local_2c == -1) &&
             (iVar5 = _strncmp(local_1ac.szName,s_CD_Audio_007edbdc,8), iVar5 == 0)) {
            iVar2 = 3;
          }
        }
        if (0 < iVar2) {
          ptVar8 = &local_20;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            ptVar8->cbStruct = 0;
            ptVar8 = (tagMIXERLINECONTROLSA *)&ptVar8->dwLineID;
          }
          local_20.dwLineID = local_1ac.dwLineID;
          ptVar9 = &local_c0;
          for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
            ptVar9->cbStruct = 0;
            ptVar9 = (tagMIXERCONTROLA *)&ptVar9->dwControlID;
          }
          local_20.cbStruct = 0x18;
          local_20.u.dwControlID = 0x50030001;
          local_20.cControls = 1;
          local_20.cbmxctrl = 0x94;
          local_20.pamxctrl = &local_c0;
          MVar4 = mixerGetLineControlsA(*(HMIXEROBJ *)(local_8 + 1),&local_20,2);
          if (MVar4 == 0) {
            iVar5 = iVar2 * 0x18;
            *(uint *)(local_8[1].szPname + iVar5) = *(uint *)(local_8[1].szPname + iVar5) | 1;
            *(DWORD *)(local_8[1].szPname + iVar5 + 4) = local_c0.dwControlID;
            *(DWORD *)(local_8[1].szPname + iVar5 + 0xc) = local_1ac.cChannels;
            *(LONG *)(local_8[1].szPname + iVar2 * 0x18 + 0x10) = local_c0.Bounds.s.lMinimum;
            *(LONG *)(local_8[1].szPname + iVar5 + 0x14) = local_c0.Bounds.s.lMaximum;
          }
          ptVar8 = &local_20;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            ptVar8->cbStruct = 0;
            ptVar8 = (tagMIXERLINECONTROLSA *)&ptVar8->dwLineID;
          }
          local_20.pamxctrl = &local_c0;
          local_20.dwLineID = local_1ac.dwLineID;
          local_20.cbStruct = 0x18;
          ptVar9 = &local_c0;
          for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
            ptVar9->cbStruct = 0;
            ptVar9 = (tagMIXERCONTROLA *)&ptVar9->dwControlID;
          }
          local_20.u.dwControlID = 0x20010002;
          local_20.cControls = 1;
          local_20.cbmxctrl = 0x94;
          MVar4 = mixerGetLineControlsA(*(HMIXEROBJ *)(local_8 + 1),&local_20,2);
          if (MVar4 == 0) {
            iVar2 = iVar2 * 0x18;
            *(uint *)(local_8[1].szPname + iVar2) = *(uint *)(local_8[1].szPname + iVar2) | 2;
            *(DWORD *)(local_8[1].szPname + iVar2 + 8) = local_c0.dwControlID;
          }
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_254.cConnections);
  }
  g_currentExceptionFrame = local_104.previous;
  *param_1 = local_8;
  return 0;
}

