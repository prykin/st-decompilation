
undefined4 __fastcall FUN_004e8f90(AnonShape_004E8F90_6386CD4A *param_1)

{
  if ((param_1->field_04D8 != 0xffff) && (param_1->field_04D8 = 0xffff, param_1->field_04E0 != 0)) {
    thunk_FUN_004d0a80(DAT_00800bcc,param_1->field_04E4,param_1->field_04E8,param_1->field_04EC);
    param_1->field_04E0 = 0;
  }
  if (((param_1->field_04F8 != 0) && (param_1->field_04FC != 0)) &&
     (param_1->field_061B != (void *)0x0)) {
    thunk_FUN_004e9bb0(param_1->field_061B,(int)param_1);
    param_1->field_04F8 = 0;
    param_1->field_04FC = 0;
  }
  return 0;
}

