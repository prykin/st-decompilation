
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00626F10_param_1Enum. Cases:
   CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189 */

undefined4 FUN_00626f10(Global_sub_00626F10_param_1Enum param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case CASE_A6:
    return 0;
  case CASE_A7:
    return 1;
  case CASE_AF:
    uVar1 = 3;
    break;
  case CASE_BD:
    return 2;
  }
  return uVar1;
}

