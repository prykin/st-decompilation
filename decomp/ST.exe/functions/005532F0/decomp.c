
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005532F0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

undefined * __cdecl FUN_005532f0(Global_sub_005532F0_param_1Enum param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case CASE_0:
    return &DAT_007c89e4;
  case CASE_1:
    return &DAT_007c89e8;
  case CASE_2:
    return &DAT_007c89f4;
  case CASE_3:
    return &DAT_007c8a10;
  case CASE_4:
    return &DAT_007c8a44;
  case CASE_5:
    return &DAT_007c8a98;
  case CASE_6:
    return &DAT_007c8b14;
  case CASE_7:
    return &DAT_007c8bc0;
  case CASE_8:
    return &DAT_007c8ca4;
  default:
    puVar1 = (undefined *)thunk_FUN_005530e0(param_1);
    return puVar1;
  }
}

