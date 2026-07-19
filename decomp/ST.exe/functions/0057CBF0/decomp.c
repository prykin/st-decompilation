
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0057CBF0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

int FUN_0057cbf0(Global_sub_0057CBF0_param_1Enum param_1,int param_2)

{
  switch(param_1) {
  case CASE_0:
    return param_2 + 5;
  case CASE_1:
    return param_2 + 2;
  case CASE_2:
    return param_2 + 10;
  case CASE_3:
    param_2 = param_2 + 3;
  }
  return param_2;
}

