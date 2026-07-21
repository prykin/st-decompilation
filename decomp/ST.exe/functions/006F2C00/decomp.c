
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005540E0 -> 006F2C00 @ 00554257 | 005540E0 -> 006F2C00 @ 00554306 | 005DCC10 ->
   006F2C00 @ 005DCC8B */

LPSTR __cdecl FUN_006f2c00(char *text,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  LPSTR pCVar5;
  CHAR *pCVar6;
  char *pcVar7;
  LPSTR pCVar8;
  CHAR local_44 [32];
  char local_24 [32];

  iVar2 = DAT_00856fc4;
  if (param_2 < 1) {
    uVar3 = 0xffffffff;
    do {
      pcVar7 = text;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = text + 1;
      cVar1 = *text;
      text = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pCVar5 = &DAT_00856e40 + DAT_00856fc4 * 0x20;
    pCVar6 = pcVar7 + -uVar3;
    pCVar8 = pCVar5;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
      pCVar6 = pCVar6 + 4;
      pCVar8 = pCVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar8 = *pCVar6;
      pCVar6 = pCVar6 + 1;
      pCVar8 = pCVar8 + 1;
    }
  }
  else {
    Library::MSVCRT::__itoa(param_2,local_24,10);
    wsprintfA(local_44,"%s%s%s","%s%0",local_24,&DAT_007d5630);
    pCVar5 = &DAT_00856e40 + iVar2 * 0x20;
    wsprintfA(pCVar5,local_44,text,param_3);
  }
  DAT_00856fc4 = DAT_00856fc4 + 1;
  if (3 < DAT_00856fc4) {
    DAT_00856fc4 = 0;
  }
  return pCVar5;
}

