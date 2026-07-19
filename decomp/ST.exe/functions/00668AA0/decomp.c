
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00668AA0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_7F6=2038;CASE_7F7=2039;CASE_7F8=2040;CASE_7F9=2041;CASE_7FA=2042;CASE_7FB=2043;CASE_80E=2062;CASE_80F=2063;CASE_810=2064;CASE_819=2073;CASE_81B=2075;CASE_81C=2076;CASE_81D=2077;CASE_82A=2090;CASE_82B=2091;CASE_82C=2092;CASE_82E=2094;CASE_82F=2095
   
   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00668AA0_param_2Enum. Cases:
   CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9 */

undefined4 __cdecl
FUN_00668aa0(Global_sub_00668AA0_param_1Enum param_1,Global_sub_00668AA0_param_2Enum param_2,
            undefined1 *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if ((int)param_1 < 0x80e) {
    if (0x80b < (int)param_1) goto switchD_00668c18_caseD_810;
    if (0x7f5 < (int)param_1) {
      switch(param_1) {
      case CASE_7F6:
      case CASE_7F7:
        switch(param_2) {
        case 2:
        case CASE_4:
        case CASE_5:
        case CASE_6:
          goto switchD_00668b66_caseD_4;
        case CASE_3:
          goto switchD_00668bfb_caseD_4;
        case CASE_7:
        case CASE_8:
        case CASE_9:
          goto switchD_00668b66_caseD_3;
        default:
          return 0;
        }
      case CASE_7F8:
        switch(param_2) {
        case 0:
        case 2:
        case CASE_3:
        case CASE_4:
          goto switchD_00668b66_caseD_4;
        case 1:
          goto switchD_00668bfb_caseD_4;
        case CASE_5:
        case CASE_6:
        case CASE_7:
          goto switchD_00668b66_caseD_3;
        default:
          return 0;
        }
      case CASE_7F9:
        switch(param_2) {
        case 0:
        case CASE_5:
        case CASE_6:
        case CASE_7:
          goto switchD_00668b66_caseD_3;
        case 1:
          goto switchD_00668bfb_caseD_4;
        case 2:
        case CASE_3:
        case CASE_4:
          goto switchD_00668b66_caseD_4;
        default:
          return 0;
        }
      case CASE_7FA:
        switch(param_2) {
        case 1:
        case CASE_3:
        case CASE_8:
        case CASE_9:
        case 10:
          goto switchD_00668b66_caseD_3;
        case 2:
        case CASE_5:
        case CASE_6:
        case CASE_7:
          goto switchD_00668b66_caseD_4;
        case CASE_4:
          goto switchD_00668bfb_caseD_4;
        default:
          return 0;
        }
      case CASE_7FB:
        goto switchD_00668bab_switchD;
      default:
        return 0;
      }
    }
    if (param_1 != 0x7f5) {
      if ((int)param_1 < 0x38f) {
        if (param_1 != 0x38e) {
          if (param_1 == 0x388) {
            if (param_2 != 1) {
              return 0;
            }
            *param_3 = 1;
            *(undefined4 *)(param_3 + 1) = 10;
            return 1;
          }
          if (param_1 != 0x389) {
            return 0;
          }
          if (param_2 != 1) {
            return 0;
          }
          *param_3 = 1;
          *(undefined4 *)(param_3 + 1) = 5;
          return 1;
        }
        if ((int)param_2 < 6) {
          return 0;
        }
        if (8 < (int)param_2) {
          return 0;
        }
      }
      else {
        if (param_1 != 0x38f) {
          if ((int)param_1 < 0x7ee) {
            return 0;
          }
          if (0x7f0 < (int)param_1) {
            return 0;
          }
          switch(param_2) {
          case CASE_3:
          case CASE_7:
          case CASE_8:
          case CASE_9:
            goto switchD_00668b66_caseD_3;
          case CASE_4:
          case CASE_5:
          case CASE_6:
            goto switchD_00668b66_caseD_4;
          default:
            return 0;
          }
        }
        if ((int)param_2 < 4) {
          return 0;
        }
        if (5 < (int)param_2) {
          return 0;
        }
      }
      goto LAB_00668ce2;
    }
    goto switchD_00668bab_switchD;
  }
  switch(param_1) {
  case CASE_80E:
  case CASE_80F:
    if ((int)param_2 < 1) {
      return 0;
    }
    bVar3 = SBORROW4(param_2,4);
    iVar1 = param_2 - CASE_4;
    bVar2 = param_2 == CASE_4;
    goto LAB_00668c3e;
  case CASE_810:
switchD_00668c18_caseD_810:
    if ((int)param_2 < 2) {
      return 0;
    }
    bVar3 = SBORROW4(param_2,5);
    iVar1 = param_2 - CASE_5;
    bVar2 = param_2 == CASE_5;
LAB_00668c3e:
    if (bVar2 || bVar3 != iVar1 < 0) {
switchD_00668b66_caseD_4:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0;
      return 1;
    }
    break;
  case CASE_819:
  case CASE_81B:
  case CASE_81C:
    iVar1 = param_2 - 2;
    goto LAB_00668ce0;
  case CASE_81D:
    iVar1 = param_2 - 1;
LAB_00668ce0:
    if (iVar1 == 0) {
LAB_00668ce2:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 1;
      return 1;
    }
    break;
  case CASE_82A:
    if (param_2 == 2) {
switchD_00668bfb_caseD_4:
      *param_3 = 3;
      *(undefined2 *)(param_3 + 1) = 0;
      return 1;
    }
    break;
  case CASE_82B:
    goto LAB_00668c86;
  case CASE_82C:
    if (param_2 == 2) {
switchD_00668cb9_caseD_4:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0x3fffffff;
      return 1;
    }
LAB_00668c86:
    if (param_2 == CASE_3) {
switchD_00668b66_caseD_3:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0xffffffff;
      return 1;
    }
    break;
  case CASE_82E:
    switch(param_2) {
    case 2:
      goto switchD_00668cb9_caseD_4;
    case CASE_3:
    case CASE_6:
    case CASE_7:
    case CASE_8:
      goto switchD_00668b66_caseD_4;
    case CASE_4:
    case CASE_9:
    case 10:
    case CASE_8|CASE_3:
      goto switchD_00668b66_caseD_3;
    case CASE_5:
      goto switchD_00668bfb_caseD_4;
    default:
      break;
    }
  case CASE_82F:
    switch(param_2) {
    case CASE_4:
      goto switchD_00668cb9_caseD_4;
    case CASE_5:
      goto switchD_00668b66_caseD_4;
    case CASE_6:
      goto switchD_00668b66_caseD_3;
    case CASE_7:
      goto switchD_00668bfb_caseD_4;
    }
  }
  return 0;
switchD_00668bab_switchD:
  switch(param_2);
}

