
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006324C0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall
FUN_006324c0(void *this,Global_sub_006324C0_param_1Enum param_1,
            Global_sub_00632030_param_1Enum param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  thunk_FUN_00632030(param_2,&param_2,&local_8,&local_c,&local_10);
  switch(param_1) {
  case CASE_0:
    thunk_FUN_00632650(this,DAT_007d1a38,DAT_007d1a3c,DAT_007d1a40,CASE_0,&DAT_007d1a38);
    return;
  case CASE_1:
    thunk_FUN_00632650(this,DAT_007d1a88,DAT_007d1a8c,DAT_007d1a90,CASE_1,&DAT_007d1a88);
    return;
  case CASE_2:
    _DAT_007d1ae8 = param_2;
    _DAT_007d1aec = local_8;
    _DAT_007d1af0 = local_c;
    _DAT_007d1b24 = local_10;
    thunk_FUN_00632650(this,DAT_007d1ad8,DAT_007d1adc,DAT_007d1ae0,CASE_2,&DAT_007d1ad8);
    return;
  case CASE_3:
    thunk_FUN_00632650(this,DAT_007d1b28,DAT_007d1b2c,DAT_007d1b30,CASE_3,&DAT_007d1b28);
    return;
  case CASE_4:
    thunk_FUN_00632650(this,DAT_007d1b60,DAT_007d1b64,DAT_007d1b68,CASE_4,&DAT_007d1b60);
  }
  return;
}

