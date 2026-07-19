
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529480_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

undefined4 __cdecl FUN_00529480(Global_sub_00529480_param_1Enum param_1)

{
  undefined4 uVar1;
  
  uVar1 = 10000;
  switch(param_1) {
  case CASE_0:
    return 0x271d;
  case CASE_1:
    return 0x271e;
  case CASE_2:
    return 0x271f;
  case CASE_3:
    return 0x2731;
  case CASE_4:
    uVar1 = 0x2730;
  }
  return uVar1;
}

