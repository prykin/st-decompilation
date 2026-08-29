
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00601DB0_param_1Enum. Cases:
   CASE_0=0;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189;CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E0=224;CASE_FD=253;CASE_FE=254
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005FF430 @ 005FF47B -> read as EAX on
   every CFG path | 0061C5F0 @ 0061C629 -> read as EAX on every CFG path */

int FUN_00601db0(Global_sub_00601DB0_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_0:
    return 0;
  default:
    return 1;
  case CASE_A6:
  case CASE_A7:
  case CASE_AF:
  case CASE_BD:
    return 3;
  case CASE_DC:
  case CASE_DD:
  case CASE_DE:
  case CASE_DF:
  case CASE_E0:
    return 4;
  case CASE_FD:
    return 2;
  case CASE_FE:
    return 5;
  }
}

