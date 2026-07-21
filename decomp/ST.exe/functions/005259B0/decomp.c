
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005259B0_param_1Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A3=163;CASE_A4=164;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_AF=175;CASE_B0=176;CASE_B2=178;CASE_B3=179;CASE_B5=181;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_BA=186;CASE_BC=188;CASE_BD=189;CASE_BE=190;CASE_BF=191;CASE_FF=255
    */

uint __cdecl FUN_005259b0(Global_sub_005259B0_param_1Enum param_1,ushort param_2,char param_3)

{
  uint uVar1;

  uVar1 = -(uint)(param_3 != '\0') & 0xff;
  if (param_2 < 5) {
    switch(param_1) {
    case CASE_96:
      return (uint)param_2;
    case CASE_97:
      return param_2 + 5;
    case CASE_98:
      return param_2 + 10;
    case CASE_99:
      return 0x1d;
    case CASE_9A:
      return 0x10;
    case CASE_9C:
      return 0x13;
    case CASE_9D:
      return 0x12;
    case CASE_9E:
      return 0x11;
    case CASE_9F:
    case CASE_A0:
      return 0x14;
    case CASE_A3:
      return 0x1b;
    case CASE_A4:
      return 0x15;
    case CASE_A6:
      return 0x17;
    case CASE_A7:
      return 0x18;
    case CASE_A8:
      return 0x1a;
    case CASE_A9:
      return 0x19;
    case CASE_AB:
      return 0x16;
    case CASE_AC:
      return 0xf;
    case CASE_AD:
      return 0x23;
    case CASE_AE:
      return 0x25;
    case CASE_AF:
      return 0x1e;
    case CASE_B0:
      return 0x2b;
    case CASE_B2:
      uVar1 = 0x2c;
      break;
    case CASE_B3:
      return 0x20;
    case CASE_B5:
      return 0x21;
    case CASE_B6:
      return 0x27;
    case CASE_B7:
      return 0x28;
    case CASE_B8:
      return 0x24;
    case CASE_BA:
      return 0x29;
    case CASE_BC:
      return 0x1f;
    case CASE_BD:
      return 0x22;
    case CASE_BE:
      return 0x26;
    case CASE_BF:
      return 0x2a;
    case CASE_FF:
      return 0x1c;
    }
  }
  return uVar1;
}

