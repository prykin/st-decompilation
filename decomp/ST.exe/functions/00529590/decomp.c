
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529590_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_29=41;CASE_2A=42;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_2E=46;CASE_2F=47;CASE_30=48;CASE_31=49;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82
    */

char * __cdecl FUN_00529590(Global_sub_00529590_param_1Enum param_1,int param_2)

{
  char *pcVar1;

  switch(param_1) {
  case CASE_1:
    if (DAT_0080874e == '\x03') {
      return "BUT_SISTOP";
    }
    switch(param_2) {
    case 9:
      return "BUT_STOPWORM";
    default:
      return "BUT_DEFENCE";
    case 0x15:
      return "BUT_STOPDOLPH";
    case 0x36:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x46:
    case 0x47:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x51:
      return "BUT_STOPCONSTR";
    }
  case CASE_2:
    if (DAT_0080874e == '\x03') {
      return "BUT_SIMOVE";
    }
    switch(param_2) {
    case 9:
      return "BUT_MOVEWORM";
    case 0x15:
      return "BUT_MOVEDOLPH";
    case 0x36:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x46:
    case 0x47:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x51:
      return "BUT_MOVECONSTR";
    }
  default:
    pcVar1 = "BUT_MOVEBOAT";
    break;
  case CASE_3:
    if (DAT_0080874e == '\x03') {
      return "BUT_SIATTACK";
    }
    if (param_2 != 9) {
      return "BUT_ATTACK";
    }
    return "BUT_ATTACKWORM";
  case CASE_4:
    return "BUT_RETREPAIR";
  case CASE_5:
    pcVar1 = "BUT_SIGUARD";
    if (DAT_0080874e != '\x03') {
      return "BUT_GUARD";
    }
    break;
  case CASE_6:
    pcVar1 = "BUT_SIPATROL";
    if (DAT_0080874e != '\x03') {
      return "BUT_PATROL";
    }
    break;
  case CASE_7:
    pcVar1 = "BUT_SICAPTURE";
    if (DAT_0080874e != '\x03') {
      return "BUT_CAPTURE";
    }
    break;
  case CASE_8:
    if (param_2 == 5) {
      return "BUT_SETMINE";
    }
    if (param_2 != 0xb) {
      if (param_2 != 0x11) {
        return "BUT_ZAPADLO";
      }
      return "BUT_SETSNARE";
    }
    return "BUT_SETLIGHT";
  case CASE_9:
    return "BUT_ATTACKDC";
  case CASE_A:
    pcVar1 = "BUT_SIPARSHELL";
    if (DAT_0080874e != '\x03') {
      return "BUT_ATTACKRAYS";
    }
    break;
  case CASE_B:
    return "BUT_PHANTOMON";
  case CASE_C:
    return "BUT_PHANTOMOFF";
  case CASE_D:
    return "BUT_REPSUBM";
  case CASE_E:
    pcVar1 = "BUT_SIBUILD";
    if (DAT_0080874e != '\x03') {
      return "BUT_BUILD";
    }
    break;
  case CASE_F:
    return "BUT_COMPLETEBUILD";
  case CASE_10:
    return "BUT_DISMANTLING";
  case CASE_11:
    pcVar1 = "BUT_SIRCLOAD";
    if (DAT_0080874e != '\x03') {
      return "BUT_RCLOAD";
    }
    break;
  case CASE_12:
    pcVar1 = "BUT_SIRCUNLOAD";
    if (DAT_0080874e != '\x03') {
      return "BUT_RCUNLOAD";
    }
    break;
  case CASE_13:
    pcVar1 = "BUT_SIREPLOAD";
    if (DAT_0080874e != '\x03') {
      return "BUT_REPLOAD";
    }
    break;
  case CASE_14:
    pcVar1 = "BUT_SIREPUNLOAD";
    if (DAT_0080874e != '\x03') {
      return "BUT_REPUNLOAD";
    }
    break;
  case CASE_15:
    return "BUT_RISE";
  case CASE_16:
    return "BUT_FALL";
  case CASE_17:
    return "BUT_TELEOBJ";
  case CASE_18:
    pcVar1 = "BUT_SITELEPORT";
    if (DAT_0080874e != '\x03') goto switchD_005295a5_caseD_4d;
    break;
  case CASE_19:
    return "BUT_ATTACKLBOMB";
  case CASE_1A:
    return "BUT_ATTACKTLS";
  case CASE_1B:
    return "BUT_BLDMISSILE";
  case CASE_1C:
    return "BUT_BLDLASBOMB";
  case CASE_1D:
    return "BUT_BLDBOAT";
  case CASE_1E:
    return "BUT_BLDWORM";
  case CASE_1F:
    return "BUT_BLDDOLPH";
  case CASE_20:
    return "BUT_SELFREP";
  case CASE_21:
    return "BUT_RESEARCH";
  case CASE_22:
    return "BUT_TRGOLD";
  case CASE_23:
    return "BUT_ACTPSIHO";
  case CASE_24:
    return "BUT_ACTISO";
  case CASE_25:
    return "BUT_STOPISO";
  case CASE_26:
    return "BUT_SETDESTINATION";
  case CASE_27:
    pcVar1 = "BUT_SIDISSASSEMBLE";
    if (DAT_0080874e != '\x03') {
      return "BUT_BREAKBUILD";
    }
    break;
  case CASE_28:
    return "BUT_CRACKINFO";
  case CASE_29:
    return "BUT_GETINFO";
  case CASE_2A:
    return "BUT_VIEWZONE";
  case CASE_2B:
    pcVar1 = "BUT_SIATTACKZONE";
    if (DAT_0080874e != '\x03') {
      return "BUT_ATTACKZONE";
    }
    break;
  case CASE_2C:
    pcVar1 = "BUT_SIGUARDZONE";
    if (DAT_0080874e != '\x03') {
      return "BUT_GUARDZONE";
    }
    break;
  case CASE_2D:
    pcVar1 = "BUT_SISCOUT";
    if (DAT_0080874e != '\x03') {
      return "BUT_SCOUT";
    }
    break;
  case CASE_2E:
    return "BUT_BREAKAWAY";
  case CASE_2F:
    pcVar1 = "BUT_SIAI";
    if (DAT_0080874e != '\x03') {
      return "BUT_BEHAVIOUR";
    }
    break;
  case CASE_30:
    return "BUT_TRADE";
  case CASE_31:
    return "BUT_CONTAINER";
  case CASE_32:
switchD_005295a5_caseD_32:
    return "BUT_BREAK";
  case CASE_33:
    return "BUT_REPLINISH";
  case CASE_34:
    return "BUT_ATTACKTRG";
  case CASE_35:
    return "BUT_ENGACTIVEMODE";
  case CASE_36:
    return "BUT_SATELLITE";
  case CASE_37:
    return "BUT_SIDESTINATION";
  case CASE_38:
    return "BUT_IFIELDOFF1";
  case CASE_39:
    return "BUT_SICRACKINFO";
  case CASE_3A:
    return "BUT_TODIMENSION";
  case CASE_3B:
    return "BUT_GIVEENERGY";
  case CASE_3C:
    return "BUT_PRIORESTORATION";
  case CASE_3D:
    return "BUT_SIBUILDSUB";
  case CASE_3E:
    return "BUT_CREATEGATE";
  case CASE_3F:
    return "BUT_RCTOENERGY";
  case CASE_40:
    return "BUT_SIGIVERC";
  case CASE_41:
    return "BUT_SIRESEARCH";
  case CASE_42:
    return "BUT_IFIELDON";
  case CASE_43:
    return "BUT_SIVIEWZONE";
  case CASE_44:
    return "BUT_BUILDLAB";
  case CASE_45:
    return "BUT_IFIELDOFF2";
  case CASE_46:
    return "BUT_SIGETINFO";
  case CASE_47:
    return "BUT_FROMDIMENSION";
  case CASE_48:
    return "BUT_SIREPLINISH";
  case CASE_49:
    return "BUT_SINENGSHIELD";
  case CASE_4A:
    return "BUT_SIREPLPRIOR";
  case CASE_4B:
    return "BUT_SIGHOST";
  case CASE_4C:
    return "BUT_AMINE";
  case CASE_4D:
switchD_005295a5_caseD_4d:
    return "BUT_TELETO";
  case CASE_4F:
    return "BUT_VQB";
  case CASE_50:
    pcVar1 = "BUT_SIHOLD";
    if (DAT_0080874e != '\x03') {
      return "BUT_HOLDBUILD";
    }
    break;
  case CASE_51:
    pcVar1 = "BUT_SIUNHOLD";
    if (DAT_0080874e != '\x03') {
      return "BUT_UNHOLDBUILD";
    }
    break;
  case CASE_52:
    pcVar1 = "BUT_SISFIRE";
    if (DAT_0080874e != '\x03') goto switchD_005295a5_caseD_32;
  }
  return pcVar1;
}

