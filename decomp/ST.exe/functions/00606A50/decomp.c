
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00606A50_param_1Enum. Cases:
   CASE_1E=30;CASE_2D=45;CASE_3C=60;CASE_4B=75;CASE_5A=90;CASE_69=105;CASE_78=120;CASE_87=135;CASE_96=150;CASE_A5=165;CASE_C3=195;CASE_D2=210;CASE_E1=225;CASE_F0=240;CASE_FF=255;CASE_10E=270;CASE_11D=285;CASE_12C=300;CASE_13B=315;CASE_14A=330
    */

undefined4 FUN_00606a50(Global_sub_00606A50_param_1Enum param_1)

{
  if (0xb4 < (int)param_1) {
    switch(param_1) {
    case CASE_C3:
      goto switchD_00606a6e_caseD_a5;
    default:
switchD_00606a6e_caseD_0:
      return 0;
    case CASE_D2:
    case CASE_E1:
    case CASE_F0:
      return 5;
    case CASE_FF:
    case CASE_10E:
    case CASE_11D:
      return 6;
    case CASE_12C:
    case CASE_13B:
    case CASE_14A:
      return 7;
    }
  }
  if (param_1 != 0xb4) {
    switch(param_1) {
    default:
      goto switchD_00606a6e_caseD_0;
    case CASE_1E:
    case CASE_2D:
    case CASE_3C:
      return 1;
    case CASE_4B:
    case CASE_5A:
    case CASE_69:
      return 2;
    case CASE_78:
    case CASE_87:
    case CASE_96:
      return 3;
    case CASE_A5:
      break;
    }
  }
switchD_00606a6e_caseD_a5:
  return 4;
}

