
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529500_param_1Enum. Cases:
   CASE_271D=10013;CASE_271E=10014;CASE_271F=10015;CASE_2731=10033 */

byte __cdecl FUN_00529500(Global_sub_00529500_param_1Enum param_1)

{
  byte bVar1;
  
  bVar1 = (DAT_0080874e != '\x03') - 1U & 5;
  switch(param_1) {
  case CASE_271D:
    return 2;
  case CASE_271E:
  case CASE_2731:
    bVar1 = 4;
    break;
  case CASE_271F:
    return 3;
  }
  return bVar1;
}

