
int __fastcall FUN_004ce7d0(AnonShape_004CE7D0_208BB40F *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = param_1->field_04D0;
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      iVar2 = 0;
    }
    if ((param_1->field_05AC == 0x40) || (param_1->field_05AC == 0x49)) {
      return 0;
    }
    if ((iVar2 != 0) && (param_1->field_04DC != 0)) {
      thunk_FUN_004d0a80(DAT_00800bcc,param_1->field_04E0,param_1->field_04E4,param_1->field_04E8);
      param_1->field_04DC = 0;
    }
  }
  return iVar2;
}

