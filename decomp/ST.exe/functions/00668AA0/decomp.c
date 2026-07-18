
undefined4 __cdecl FUN_00668aa0(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_1 < 0x80e) {
    if (0x80b < param_1) goto switchD_00668c18_caseD_810;
    if (0x7f5 < param_1) {
      switch(param_1) {
      case 0x7f6:
      case 0x7f7:
        switch(param_2) {
        case 2:
        case 4:
        case 5:
        case 6:
          goto switchD_00668b66_caseD_4;
        case 3:
          goto switchD_00668bfb_caseD_4;
        case 7:
        case 8:
        case 9:
          goto switchD_00668b66_caseD_3;
        default:
          return 0;
        }
      case 0x7f8:
        switch(param_2) {
        case 0:
        case 2:
        case 3:
        case 4:
          goto switchD_00668b66_caseD_4;
        case 1:
          goto switchD_00668bfb_caseD_4;
        case 5:
        case 6:
        case 7:
          goto switchD_00668b66_caseD_3;
        default:
          return 0;
        }
      case 0x7f9:
        switch(param_2) {
        case 0:
        case 5:
        case 6:
        case 7:
          goto switchD_00668b66_caseD_3;
        case 1:
          goto switchD_00668bfb_caseD_4;
        case 2:
        case 3:
        case 4:
          goto switchD_00668b66_caseD_4;
        default:
          return 0;
        }
      case 0x7fa:
        switch(param_2) {
        case 1:
        case 3:
        case 8:
        case 9:
        case 10:
          goto switchD_00668b66_caseD_3;
        case 2:
        case 5:
        case 6:
        case 7:
          goto switchD_00668b66_caseD_4;
        case 4:
          goto switchD_00668bfb_caseD_4;
        default:
          return 0;
        }
      case 0x7fb:
        goto switchD_00668bab_switchD;
      default:
        return 0;
      }
    }
    if (param_1 != 0x7f5) {
      if (param_1 < 0x38f) {
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
        if (param_2 < 6) {
          return 0;
        }
        if (8 < param_2) {
          return 0;
        }
      }
      else {
        if (param_1 != 0x38f) {
          if (param_1 < 0x7ee) {
            return 0;
          }
          if (0x7f0 < param_1) {
            return 0;
          }
          switch(param_2) {
          case 3:
          case 7:
          case 8:
          case 9:
            goto switchD_00668b66_caseD_3;
          case 4:
          case 5:
          case 6:
            goto switchD_00668b66_caseD_4;
          default:
            return 0;
          }
        }
        if (param_2 < 4) {
          return 0;
        }
        if (5 < param_2) {
          return 0;
        }
      }
      goto LAB_00668ce2;
    }
    goto switchD_00668bab_switchD;
  }
  switch(param_1) {
  case 0x80e:
  case 0x80f:
    if (param_2 < 1) {
      return 0;
    }
    bVar3 = SBORROW4(param_2,4);
    iVar1 = param_2 + -4;
    bVar2 = param_2 == 4;
    goto LAB_00668c3e;
  case 0x810:
switchD_00668c18_caseD_810:
    if (param_2 < 2) {
      return 0;
    }
    bVar3 = SBORROW4(param_2,5);
    iVar1 = param_2 + -5;
    bVar2 = param_2 == 5;
LAB_00668c3e:
    if (bVar2 || bVar3 != iVar1 < 0) {
switchD_00668b66_caseD_4:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0;
      return 1;
    }
    break;
  case 0x819:
  case 0x81b:
  case 0x81c:
    iVar1 = param_2 + -2;
    goto LAB_00668ce0;
  case 0x81d:
    iVar1 = param_2 + -1;
LAB_00668ce0:
    if (iVar1 == 0) {
LAB_00668ce2:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 1;
      return 1;
    }
    break;
  case 0x82a:
    if (param_2 == 2) {
switchD_00668bfb_caseD_4:
      *param_3 = 3;
      *(undefined2 *)(param_3 + 1) = 0;
      return 1;
    }
    break;
  case 0x82b:
    goto LAB_00668c86;
  case 0x82c:
    if (param_2 == 2) {
switchD_00668cb9_caseD_4:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0x3fffffff;
      return 1;
    }
LAB_00668c86:
    if (param_2 == 3) {
switchD_00668b66_caseD_3:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0xffffffff;
      return 1;
    }
    break;
  case 0x82e:
    switch(param_2) {
    case 2:
      goto switchD_00668cb9_caseD_4;
    case 3:
    case 6:
    case 7:
    case 8:
      goto switchD_00668b66_caseD_4;
    case 4:
    case 9:
    case 10:
    case 0xb:
      goto switchD_00668b66_caseD_3;
    case 5:
      goto switchD_00668bfb_caseD_4;
    default:
      break;
    }
  case 0x82f:
    switch(param_2) {
    case 4:
      goto switchD_00668cb9_caseD_4;
    case 5:
      goto switchD_00668b66_caseD_4;
    case 6:
      goto switchD_00668b66_caseD_3;
    case 7:
      goto switchD_00668bfb_caseD_4;
    }
  }
  return 0;
switchD_00668bab_switchD:
  switch(param_2);
}

