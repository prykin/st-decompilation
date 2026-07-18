
void __cdecl
FUN_0057a140(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,char *param_5,
            undefined1 *param_6,undefined4 *param_7)

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
    switch(param_2) {
    case 0xe6:
      pcVar4 = s_shark1_007cae70;
      break;
    case 0xe7:
      pcVar4 = s_fish1_007cae68;
      break;
    case 0xe8:
      pcVar4 = s_fish_b_007cae60;
      break;
    case 0xe9:
      pcVar4 = s_fish_gr_007cae54;
      break;
    case 0xea:
      pcVar4 = &DAT_007cae4c;
      break;
    case 0xeb:
      pcVar4 = &DAT_007cae44;
      break;
    default:
      goto switchD_0057a18b_caseD_ec;
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
      pcVar4 = s_crab2b_007cae3c;
      break;
    case 0xf6:
    case 0xf7:
      pcVar4 = s_langus1_007cae24;
      break;
    case 0xf8:
    case 0xf9:
      pcVar4 = s_octopus1_007cae30;
      break;
    case 0xfa:
    case 0xfb:
      pcVar4 = &DAT_007cae18;
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
    *param_4 = DAT_0080676c;
  }
switchD_0057a18b_caseD_ec:
  return;
}

