
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 005FCF50 @ 0044C3FD */

void __cdecl
FUN_005fcf50(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,char *param_5,
            undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;

  *param_4 = 0;
  *param_5 = '\0';
  *param_6 = 0x1d;
  *param_7 = 0;
  if ((param_3 == 0xe) || (param_3 == 0xc)) {
    if (param_1 == 1) {
      pcVar4 = "cont1";
    }
    else if (param_1 == 2) {
      pcVar4 = "cont2";
    }
    else {
      if (param_1 != 3) {
        return;
      }
      pcVar4 = &DAT_007ce4d4;
    }
    uVar2 = 0xffffffff;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      param_5 = param_5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      param_5 = param_5 + 1;
    }
    *param_4 = DAT_00806774;
  }
  return;
}

