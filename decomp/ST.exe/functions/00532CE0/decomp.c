
void __fastcall FUN_00532ce0(AnonShape_00532CE0_361E49BD *param_1)

{
  int iVar1;
  
  if (param_1->field_01A4 == '\x0e') {
    param_1->field_0028 = 0x20;
    iVar1 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)0x0);
    param_1->field_002C = (uint)(iVar1 != 0);
    FUN_006e6080(param_1,2,param_1->field_01C1,(undefined4 *)&param_1->field_0x18);
  }
  return;
}

