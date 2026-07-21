
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0057A140_param_2Enum. Cases:
   CASE_E6=230;CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235;CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 0057A140 @ 0044C43B */

void __cdecl
FUN_0057a140(undefined4 param_1,Global_sub_0057A140_param_2Enum param_2,int param_3,
            undefined4 *param_4,char *param_5,undefined1 *param_6,
            STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

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
    case CASE_E6:
      pcVar4 = s_shark1_007cae70;
      break;
    case CASE_E7:
      pcVar4 = s_fish1_007cae68;
      break;
    case CASE_E8:
      pcVar4 = s_fish_b_007cae60;
      break;
    case CASE_E9:
      pcVar4 = s_fish_gr_007cae54;
      break;
    case CASE_EA:
      pcVar4 = &DAT_007cae4c;
      break;
    case CASE_EB:
      pcVar4 = &DAT_007cae44;
      break;
    default:
      goto switchD_0057a18b_caseD_ec;
    case CASE_F2:
    case CASE_F3:
    case CASE_F4:
    case CASE_F5:
      pcVar4 = s_crab2b_007cae3c;
      break;
    case CASE_F6:
    case CASE_F7:
      pcVar4 = s_langus1_007cae24;
      break;
    case CASE_F8:
    case CASE_F9:
      pcVar4 = s_octopus1_007cae30;
      break;
    case CASE_FA:
    case CASE_FB:
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

