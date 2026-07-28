
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00624920 -> 00627670 @ 00624C4E; STMineSetC::sub_00624920 this; stable alias ESI

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189 */

undefined4 __fastcall FUN_00627670(STMineSetC *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1->field_02AD) {
  case CASE_0:
    return DAT_007e65a8;
  case CASE_1:
    return DAT_007e65bc;
  case CASE_2:
    return DAT_007e6774;
  case CASE_3:
    uVar1 = *(undefined4 *)(&DAT_007d0284 + param_1->field_034E * 4);
  }
  return uVar1;
}

