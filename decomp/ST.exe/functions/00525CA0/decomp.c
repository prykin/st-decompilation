
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00525CA0_param_1Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_AF=175;CASE_B0=176;CASE_B2=178;CASE_B3=179;CASE_B5=181;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_BA=186;CASE_BC=188;CASE_BD=189;CASE_BE=190;CASE_BF=191;CASE_C0=192;CASE_C1=193

   [STPrototypeApplier] Propagated return.
   Evidence: 00525CA0 returns used as parameter 2 of HelpPanelTy::DrawDescription @ 0051C4F6 */

UINT __cdecl FUN_00525ca0(Global_sub_00525CA0_param_1Enum param_1)

{
  UINT UVar1;

  UVar1 = 0;
  switch(param_1) {
  case CASE_96:
    return 0x5bcc;
  case CASE_97:
    return 0x5bcd;
  case CASE_98:
    return 0x5bce;
  case CASE_99:
    return 0x5bcf;
  case CASE_9A:
    return 0x5bd1;
  case CASE_9C:
    return 0x5bd2;
  case CASE_9D:
    return 0x5bd3;
  case CASE_9E:
    return 0x5bd4;
  case CASE_9F:
    return 0x5bd5;
  case CASE_A0:
    return 0x5bd6;
  case CASE_A1:
    return 0x5bee;
  case CASE_A3:
    return 0x5bdd;
  case CASE_A4:
    return 0x5bde;
  case CASE_A6:
    return 0x5bd9;
  case CASE_A7:
    return 0x5bda;
  case CASE_A8:
    return 0x5bdb;
  case CASE_A9:
    return 0x5bdc;
  case CASE_AB:
    return 0x5bd8;
  case CASE_AC:
    return 0x5bd0;
  case CASE_AD:
    return 0x5be9;
  case CASE_AE:
    return 0x5beb;
  case CASE_AF:
    return 0x5bdf;
  case CASE_B0:
    return 0x5be4;
  case CASE_B2:
    UVar1 = 0x5bf0;
    break;
  case CASE_B3:
    return 0x5be7;
  case CASE_B5:
    return 0x5be8;
  case CASE_B6:
    return 0x5be0;
  case CASE_B7:
    return 0x5be1;
  case CASE_B8:
    return 0x5bea;
  case CASE_BA:
    return 0x5be2;
  case CASE_BC:
    return 0x5be6;
  case CASE_BD:
    return 0x5be5;
  case CASE_BE:
    return 0x5bec;
  case CASE_BF:
    return 0x5be3;
  case CASE_C0:
    return 0x5bed;
  case CASE_C1:
    return 0x5bef;
  }
  return UVar1;
}

