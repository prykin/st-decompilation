#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00572D30 -> EXTERNAL:000000C6 @ 00573032

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00572D30 -> EXTERNAL:000000C6 @ 00573001 */

undefined4 __thiscall FUN_00572d30(void *this,BYTE *param_1,BYTE *param_2)

{
  char *pcVar1;
  char cVar2;
  LSTATUS LVar3;
  uint uVar4;
  UINT UVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  uint local_1c [2];
  ushort local_14;
  char *local_10;
  char *local_c;
  HKEY local_8;

  /* ST_CALLSITE[00572D49]: CALL dword ptr [0x0085b960] */
  LVar3 = RegCreateKeyA((HKEY)&DAT_80000002,"SOFTWARE\\Ellipse Studios\\Submarine Titans\\Version",&local_8);
  pcVar10 = RegSetValueExA_exref;
  if (LVar3 == 0) {
    /* ST_CALLSITE[00572D72]: CALL ESI */
    LVar3 = RegSetValueExA(local_8,&DAT_007ca4f8,0,4,(BYTE *)((int)this + 0x779),4);
    if ((((LVar3 == 0) &&
         /* ST_CALLSITE[00572D91]: CALL ESI */
         (LVar3 = RegSetValueExA(local_8,"Version",0,4,(BYTE *)((int)this + 0x77d),4),
         LVar3 == 0)) &&
        /* ST_CALLSITE[00572DB3]: CALL ESI */
        (LVar3 = RegSetValueExA(local_8,"Folder",0,1,(BYTE *)((int)this + 0x645),0x104),
        LVar3 == 0)) &&
       /* ST_CALLSITE[00572DD2]: CALL ESI */
       ((LVar3 = RegSetValueExA(local_8,&DAT_007ca508,0,1,(BYTE *)((int)this + 0x749),0x30),
        LVar3 == 0 &&
        /* ST_CALLSITE[00572DF1]: CALL ESI */
        (LVar3 = RegSetValueExA(local_8,"LastPlayer",0,1,(BYTE *)((int)this + 0x785),0x40),
        LVar3 == 0)))) {
      if (param_1 != nullptr) {
        local_1c[0] = DAT_007ca690;
        local_1c[1] = 0;
        local_14 = 0;

        uVar4 = thunk_FUN_00571dc0();
        local_1c[0] = STReplaceLowByte((uint32_t)(local_1c[0]), (uint8_t)((char)uVar4));
        /* ST_CALLSITE[00572E26]: CALL dword ptr [0x0085bc64] */
        UVar4 = GetDriveTypeA((LPCSTR)local_1c);
        if (UVar4 != 5) {
          uVar6 = 0xffffffff;
          pcVar9 = &CHAR_N_007ca694;
          do {
            pcVar11 = pcVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar11 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar11;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          pcVar9 = pcVar11 + -uVar6;
          pcVar11 = (char *)local_1c;
          memmove(pcVar11, pcVar9, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
        }
        FUN_006b78c0((char *)local_1c,(char *)local_1c);
        uVar6 = 0xffffffff;
        pcVar9 = (char *)local_1c;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = (char *)((int)this + 0x640);
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; pcVar10 = RegSetValueExA_exref, uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      /* ST_CALLSITE[00572EA5]: CALL ESI */
      (*pcVar10)(local_8,"CDAudioDrive",0,1,(int)this + 0x640,5);
      /* ST_CALLSITE[00572EBD]: CALL ESI */
      iVar5 = (*pcVar10)(local_8,"CharSet",0,4,(int)this + 0x781,4);
      if (iVar5 != 0) {
        /* ST_CALLSITE[00572EC7]: CALL dword ptr [0x0085b968] */
        RegCloseKey(local_8);
        return 0;
      }
      /* ST_CALLSITE[00572EEE]: CALL ESI */
      iVar5 = (*pcVar10)(local_8,"Server",0,1,(int)this + 0xdae,0x40);
      if (iVar5 != 0) {
        /* ST_CALLSITE[00572EF8]: CALL dword ptr [0x0085b968] */
        RegCloseKey(local_8);
        return 0;
      }
      if ((((uint)param_2 & 2) != 0) &&
         /* ST_CALLSITE[00572F26]: CALL ESI */
         (iVar5 = (*pcVar10)(local_8,"Editor",0,3,&DAT_008071f8,0x100), iVar5 != 0)) {
        /* ST_CALLSITE[00572F30]: CALL dword ptr [0x0085b968] */
        RegCloseKey(local_8);
        return 0;
      }
      /* ST_CALLSITE[00572F45]: CALL dword ptr [0x0085b968] */
      RegCloseKey(local_8);
      pcVar9 = (char *)((int)this + 0x28);
      FUN_006b8280(pcVar9,pcVar9);
      local_c = (char *)((int)this + 300);
      FUN_006b8280(local_c,local_c);
      local_10 = (char *)((int)this + 0x438);
      FUN_006b8280(local_10,local_10);
      pcVar11 = (char *)((int)this + 0x230);
      FUN_006b8280(pcVar11,pcVar11);
      pcVar1 = (char *)((int)this + 0x334);
      FUN_006b8280(pcVar1,pcVar1);
      pcVar8 = (char *)((int)this + 0x53c);
      FUN_006b8280(pcVar8,pcVar8);
      /* ST_CALLSITE[00572FB0]: CALL dword ptr [0x0085b960] */
      LVar3 = RegCreateKeyA((HKEY)&DAT_80000002,"SOFTWARE\\Ellipse Studios\\Submarine Titans\\Directories",&local_8
                           );
      if (LVar3 == 0) {
        /* ST_CALLSITE[00572FD0]: CALL ESI */
        iVar5 = (*pcVar10)(local_8,"MainPath",0,1,pcVar9,0x104);
        if (iVar5 != 0) {
          /* ST_CALLSITE[00572FDA]: CALL dword ptr [0x0085b968] */
          RegCloseKey(local_8);
          return 0;
        }
        /* ST_CALLSITE[00573001]: CALL ESI */
        iVar5 = (*pcVar10)(local_8,"SoundPath",0,1,pcVar11,0x104);
        if (iVar5 != 0) {
          /* ST_CALLSITE[0057300B]: CALL dword ptr [0x0085b968] */
          RegCloseKey(local_8);
          return 0;
        }
        /* ST_CALLSITE[00573032]: CALL ESI */
        iVar5 = (*pcVar10)(local_8,"MusicPath",0,1,pcVar1,0x104);
        if (iVar5 != 0) {
          /* ST_CALLSITE[0057303C]: CALL dword ptr [0x0085b968] */
          RegCloseKey(local_8);
          return 0;
        }
        /* ST_CALLSITE[00573063]: CALL ESI */
        iVar5 = (*pcVar10)(local_8,"VideoPath",0,1,local_c,0x104);
        if (iVar5 == 0) {
          /* ST_CALLSITE[00573094]: CALL ESI */
          iVar5 = (*pcVar10)(local_8,"DataPath",0,1,local_10,0x104);
          if (iVar5 != 0) {
            /* ST_CALLSITE[0057309E]: CALL dword ptr [0x0085b968] */
            RegCloseKey(local_8);
            return 0;
          }
          /* ST_CALLSITE[005730C2]: CALL ESI */
          iVar5 = (*pcVar10)(local_8,"InstPath",0,1,pcVar8,0x104);
          if (iVar5 == 0) {
            /* ST_CALLSITE[005730E1]: CALL dword ptr [0x0085b968] */
            RegCloseKey(local_8);
            return 1;
          }
          /* ST_CALLSITE[005730CC]: CALL dword ptr [0x0085b968] */
          RegCloseKey(local_8);
          return 0;
        }
        /* ST_CALLSITE[0057306D]: CALL dword ptr [0x0085b968] */
        RegCloseKey(local_8);
        return 0;
      }
    }
    else {
      /* ST_CALLSITE[005730F9]: CALL dword ptr [0x0085b968] */
      RegCloseKey(local_8);
    }
  }
  return 0;
}

