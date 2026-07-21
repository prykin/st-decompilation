
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00524FE0_param_1Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_AF=175;CASE_B0=176;CASE_B2=178;CASE_B3=179;CASE_B5=181;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_BA=186;CASE_BC=188;CASE_BD=189;CASE_BE=190;CASE_BF=191;CASE_C0=192;CASE_C1=193;CASE_DD=221;CASE_DE=222

   [STPrototypeApplier] Propagated return.
   Evidence: 00524FE0 returns used as parameter 3 of HelpPanelTy::DrawTitle @ 0051B6BE */

UINT __cdecl FUN_00524fe0(Global_sub_00524FE0_param_1Enum param_1)

{
  UINT UVar1;

  UVar1 = 0;
  switch(param_1) {
  case CASE_96:
    return 0x3138;
  case CASE_97:
    return 0x3139;
  case CASE_98:
    return 0x313a;
  case CASE_99:
    return 0x313b;
  case CASE_9A:
    return 0x313d;
  case CASE_9C:
    return 0x313e;
  case CASE_9D:
    return 0x313f;
  case CASE_9E:
    return 0x3140;
  case CASE_9F:
    return 0x3157;
  case CASE_A0:
    return 0x3158;
  case CASE_A1:
    return 0x315a;
  case CASE_A3:
    return 0x3147;
  case CASE_A4:
    return 0x3148;
  case CASE_A6:
    return 0x3143;
  case CASE_A7:
    return 0x3144;
  case CASE_A8:
    return 0x3145;
  case CASE_A9:
    return 0x3146;
  case CASE_AB:
    return 0x3142;
  case CASE_AC:
    return 0x313c;
  case CASE_AD:
    return 0x3153;
  case CASE_AE:
    return 0x3155;
  case CASE_AF:
    return 0x3149;
  case CASE_B0:
    return 0x314e;
  case CASE_B2:
    UVar1 = 0x315c;
    break;
  case CASE_B3:
    return 0x3151;
  case CASE_B5:
    return 0x3152;
  case CASE_B6:
    return 0x314a;
  case CASE_B7:
    return 0x314b;
  case CASE_B8:
    return 0x3154;
  case CASE_BA:
    return 0x314c;
  case CASE_BC:
    return 0x3150;
  case CASE_BD:
    return 0x314f;
  case CASE_BE:
    return 0x3156;
  case CASE_BF:
    return 0x314d;
  case CASE_C0:
    return 0x3159;
  case CASE_C1:
    return 0x315b;
  case CASE_DD:
    return 0x271d;
  case CASE_DE:
    return 0x271e;
  }
  return UVar1;
}

