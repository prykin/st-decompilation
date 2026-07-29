
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00645D30_param_2Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_9A=154;CASE_9F=159;CASE_A0=160;CASE_AC=172;CASE_AD=173;CASE_B0=176;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185;CASE_BA=186;CASE_BF=191
    */

undefined4 __cdecl FUN_00645d30(int param_1,Global_sub_00645D30_param_2Enum param_2)

{
  int uVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar1 = GetPlayerRaceId((char)param_1);
  uVar2 = uVar1 & 0xff;
  switch(param_2) {
  case CASE_96:
  case CASE_97:
  case CASE_98:
    if (uVar2 == 1) {
      uVar3 = thunk_FUN_004e60d0(param_1,6);
      return uVar3;
    }
    if (uVar2 == 2) {
      uVar3 = thunk_FUN_004e60d0(param_1,0x83);
      return uVar3;
    }
    break;
  default:
    break;
  case CASE_9A:
    if (uVar2 == 2) {
      uVar3 = thunk_FUN_004e60d0(param_1,0x93);
      return uVar3;
    }
    break;
  case CASE_9F:
  case CASE_A0:
    if (uVar2 == 1) {
      uVar3 = thunk_FUN_004e60d0(param_1,0x97);
      return uVar3;
    }
    break;
  case CASE_AC:
    if (uVar2 == 2) {
      uVar3 = thunk_FUN_004e60d0(param_1,0x95);
      return uVar3;
    }
    break;
  case CASE_AD:
    if (uVar2 == 3) {
      uVar3 = thunk_FUN_004e60d0(param_1,0x7d);
      return uVar3;
    }
    break;
  case CASE_B0:
  case CASE_B6:
  case CASE_B7:
  case CASE_B9:
  case CASE_BA:
  case CASE_BF:
    if (uVar2 == 3) {
      uVar3 = thunk_FUN_004e60d0(param_1,0x7a);
      return uVar3;
    }
    break;
  case CASE_B8:
    if (uVar2 == 3) {
      uVar3 = thunk_FUN_004e60d0(param_1,0x76);
      return uVar3;
    }
  }
  return 0;
}

