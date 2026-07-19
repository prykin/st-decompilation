
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00709A10_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_B=11;CASE_E=14;CASE_12=18;CASE_13=19;CASE_15=21;CASE_16=22;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31
    */

void __cdecl FUN_00709a10(undefined4 *param_1,Global_sub_00709A10_param_2Enum param_2,uint *param_3)

{
  switch(param_2) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_E:
  case CASE_12:
  case CASE_16:
  case CASE_1C:
    cMf32::RecMemFree((cMf32 *)*param_1,param_3);
    return;
  case CASE_7:
    FUN_00725e30((int *)param_3);
    return;
  case CASE_8:
    FUN_00726260(param_3);
    return;
  case CASE_B:
    FUN_0070b1d0((int *)param_3);
    return;
  case CASE_13:
  case CASE_1D:
    FUN_00716db0((int *)param_3);
    return;
  case CASE_15:
    FUN_00726870((int *)param_3);
    return;
  case CASE_1E:
    FUN_00726bd0((int *)param_3);
    break;
  case CASE_1F:
    FUN_0070b600((int *)param_3);
    return;
  }
  return;
}

