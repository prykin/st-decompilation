
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005293F0_param_1Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E0=224;CASE_E1=225;CASE_E2=226;CASE_E3=227
    */

undefined4 __cdecl FUN_005293f0(Global_sub_005293F0_param_1Enum param_1)

{
  undefined4 uVar1;
  
  uVar1 = 10000;
  switch(param_1) {
  case CASE_DC:
  case CASE_E1:
    uVar1 = 0x271f;
    break;
  case CASE_DD:
    return 0x271d;
  case CASE_DE:
    return 0x271e;
  case CASE_DF:
    return 0x2720;
  case CASE_E0:
  case CASE_E3:
    return 0x2730;
  case CASE_E2:
    return 0x2731;
  }
  return uVar1;
}

