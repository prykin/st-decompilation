
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005276E0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2E=46;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_74=116;CASE_75=117;CASE_76=118;CASE_77=119;CASE_78=120;CASE_79=121;CASE_7A=122;CASE_7B=123;CASE_7C=124;CASE_7D=125;CASE_7E=126;CASE_7F=127;CASE_80=128;CASE_81=129;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_86=134;CASE_87=135;CASE_88=136;CASE_89=137;CASE_8A=138;CASE_8B=139;CASE_8C=140;CASE_8D=141;CASE_8E=142;CASE_8F=143;CASE_90=144;CASE_91=145;CASE_92=146;CASE_93=147;CASE_94=148;CASE_95=149;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154
    */

uint __cdecl FUN_005276e0(Global_sub_005276E0_param_1Enum param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = (DAT_0080874e == '\x03') + 0xa9;
  if (param_2 != 0xff) {
    switch(param_1) {
    case CASE_1:
      return 0x14;
    case CASE_2:
      return 0x15;
    case CASE_3:
    case CASE_80:
      return 10;
    case CASE_4:
    case CASE_81:
      if (param_2 == 0) {
        return 0x4e;
      }
      uVar1 = param_2 + 2;
      break;
    case CASE_5:
    case CASE_82:
      if (param_2 == 0) {
        return 0x4f;
      }
      uVar1 = param_2 - 1;
      break;
    case CASE_6:
    case CASE_83:
      if (param_2 == 0) {
        return 0x50;
      }
      uVar1 = param_2 + 5;
      break;
    case CASE_7:
      return 0x16;
    case CASE_8:
      return 0xd;
    case CASE_9:
      return 0xb;
    case CASE_A:
      return 0xc;
    case CASE_B:
      return 0x1f;
    case CASE_C:
      return 0x17;
    case CASE_D:
    case CASE_84:
      return 0x18;
    case CASE_E:
      return 0xe;
    case CASE_F:
      return 0x19;
    case CASE_10:
    case CASE_85:
      return 0x1a;
    case CASE_11:
      return 0x1b;
    case CASE_12:
      return 0xf;
    case CASE_13:
    case CASE_87:
      return 0x1c;
    case CASE_14:
      return 0x10;
    case CASE_15:
      return 0x1d;
    case CASE_16:
      return 0x11;
    case CASE_17:
    case CASE_88:
      return 0x1e;
    case CASE_18:
      return 0x12;
    case CASE_19:
      return 0x23;
    case CASE_1A:
      return 0x24;
    case CASE_1B:
      return 0x13;
    case CASE_1C:
      return 0x22;
    case CASE_1D:
      return 0x21;
    case CASE_1E:
    case CASE_8A:
      return 0x25;
    case CASE_1F:
      return 0x20;
    case CASE_20:
    case CASE_8B:
      return 0x26;
    case CASE_21:
    case CASE_8C:
      return 0x27;
    case CASE_22:
      return 0x28;
    case CASE_23:
      return 0x29;
    case CASE_24:
      return 0x2c;
    case CASE_25:
      return 0x2b;
    case CASE_26:
      return 0x34;
    case CASE_27:
      return 0x2d;
    case CASE_28:
      return 0x2f;
    case CASE_29:
      return 0x35;
    case CASE_2A:
      return 0x36;
    case CASE_2B:
      return 0x37;
    case CASE_2C:
      return 0x30;
    case CASE_2D:
      return 0x31;
    case CASE_2E:
      return 0x32;
    case CASE_2F:
      return 0x38;
    case CASE_30:
      return 0x39;
    case CASE_31:
      return 0x3a;
    case CASE_32:
      return 0x3b;
    case CASE_33:
      return 0x33;
    case CASE_34:
      return 0x2a;
    case CASE_35:
      return 0x2e;
    case CASE_36:
      return 0x45;
    case CASE_37:
      return 0x46;
    case CASE_38:
      return 0x4a;
    case CASE_39:
      return 0x4b;
    case CASE_3A:
      return 0x43;
    case CASE_3B:
      return 0x44;
    case CASE_3C:
    case CASE_91:
      return 0x47;
    case CASE_3D:
    case CASE_8D:
      return 0x41;
    case CASE_3E:
      return 0x3f;
    case CASE_3F:
    case CASE_8E:
      return 0x42;
    case CASE_40:
    case CASE_8F:
      return 0x49;
    case CASE_41:
    case CASE_9A:
      return 0x48;
    case CASE_42:
      return 0x4d;
    case CASE_43:
      return 0x4c;
    case CASE_44:
      return 0x59;
    case CASE_45:
      return 0x5a;
    case CASE_46:
      return 0x5b;
    case CASE_47:
      return 0x5c;
    case CASE_48:
      return 0x5d;
    case CASE_49:
      return 0x5e;
    case CASE_4A:
      return 0x5f;
    case CASE_4B:
      return 0x60;
    case CASE_4C:
      return 0x61;
    case CASE_4D:
      return 0x62;
    case CASE_4E:
      if (param_2 == 0) {
        uVar1 = 0xa6;
      }
      else {
        uVar1 = param_2 + 0x80;
      }
      break;
    case CASE_4F:
      return 0x84;
    case CASE_50:
      return 0x85;
    case CASE_51:
      return 0x67;
    case CASE_52:
      return 0x68;
    case CASE_53:
      return 0x69;
    case CASE_54:
      return 0x6a;
    case CASE_55:
      return 0x77;
    case CASE_56:
      return 0x78;
    case CASE_57:
      return 0x79;
    case CASE_58:
      return 0x7a;
    case CASE_59:
      return 0x7b;
    case CASE_5A:
      return 0x7c;
    case CASE_5B:
      return 0x7d;
    case CASE_5C:
      return 0x7e;
    case CASE_5D:
      return 0x7f;
    case CASE_5E:
      return 0x80;
    case CASE_5F:
      return 0x86;
    case CASE_60:
      return 0x87;
    case CASE_61:
      return 0x74;
    case CASE_62:
      return 0x89;
    case CASE_63:
      return 0x75;
    case CASE_64:
      return 0xa8;
    case CASE_65:
      if (param_2 == 0) {
        uVar1 = 0xa4;
      }
      else {
        uVar1 = param_2 + 0x6a;
      }
      break;
    case CASE_66:
      return 0x71;
    case CASE_67:
      uVar1 = param_2 + 0x6d;
      break;
    case CASE_68:
      return 0x72;
    case CASE_69:
      return 0x8c;
    case CASE_6A:
      return 0x8d;
    case CASE_6B:
      return 0x8e;
    case CASE_6C:
      return 0x8f;
    case CASE_6D:
      if (param_2 == 0) {
        uVar1 = 0xa5;
      }
      else {
        uVar1 = param_2 + 0x62;
      }
      break;
    case CASE_6E:
      return 0x66;
    case CASE_6F:
      return 0x95;
    case CASE_70:
      return 0x96;
    case CASE_71:
      return 0x9a;
    case CASE_72:
      return 0x91;
    case CASE_73:
      return 0x97;
    case CASE_74:
      return 0x98;
    case CASE_75:
      return 0x9b;
    case CASE_76:
      return 0x99;
    case CASE_77:
      return 0xa2;
    case CASE_78:
      return 0x92;
    case CASE_79:
      return 0xa3;
    case CASE_7A:
      uVar1 = param_2 + 0x9d;
      break;
    case CASE_7B:
      return 0x93;
    case CASE_7C:
      return 0xa0;
    case CASE_7D:
      uVar1 = param_2 + 0x9b;
      break;
    case CASE_7E:
      return 0xa1;
    case CASE_7F:
    case CASE_89:
      return 0x3c;
    case CASE_86:
      return 0x3e;
    case CASE_90:
      return 0xa7;
    case CASE_92:
      return 0x52;
    case CASE_93:
      return 0x56;
    case CASE_94:
      return 0x53;
    case CASE_95:
      return 0x57;
    case CASE_96:
    case CASE_99:
      return 0x58;
    case CASE_97:
      return 0x55;
    case CASE_98:
      return 0x54;
    }
    if (0xa9 < uVar1) {
      uVar1 = (DAT_0080874e == '\x03') + 0xa8;
    }
  }
  return uVar1;
}

