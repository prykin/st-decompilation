
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0068CDA0_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_9=9;CASE_A=10;CASE_40=64 */

void __cdecl FUN_0068cda0(int *param_1,Global_sub_0068CDA0_param_2Enum param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    switch(param_2) {
    case CASE_1:
      thunk_FUN_006686c0(param_1);
      return;
    case CASE_2:
      thunk_FUN_00691540(param_1);
      return;
    case CASE_3:
      thunk_FUN_0067d160(param_1);
      return;
    case CASE_4:
      thunk_FUN_006484f0(param_1);
      return;
    case CASE_5:
      thunk_FUN_0065d0f0(param_1);
      return;
    case CASE_9:
      FUN_006b5570(pbVar1);
      *param_1 = 0;
      return;
    case CASE_A:
    case CASE_40:
      FUN_006ae110(pbVar1);
      *param_1 = 0;
    }
  }
  return;
}

