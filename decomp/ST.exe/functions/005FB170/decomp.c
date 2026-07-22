
/* [STSwitchEnumApplier] Switch target field_02DD uses
   /SubmarineTitans/Recovered/Enums/STColl3C_field_02DDState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12
    */

void __fastcall FUN_005fb170(STColl3C *param_1)

{
  switch(param_1->field_02DD) {
  case CASE_1:
    STColl3C::sub_005F66B0(param_1);
    return;
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_8:
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
    STColl3C::LoadImagSpr(param_1,0);
    STColl3C::sub_005FA070(param_1);
    param_1->field_02DD = CASE_C|CASE_1;
  }
  return;
}

