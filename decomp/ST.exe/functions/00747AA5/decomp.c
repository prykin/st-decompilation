
uint FUN_00747aa5(AnonShape_00747AA5_87CB4B56 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4c [18];

  iVar1 = FUN_00747f3b((AnonShape_00747F3B_C97131D7 *)param_1);
  if (iVar1 == 1) {
    uVar2 = 0x80040203;
  }
  else {
    param_1->field_0004 = param_1->field_0004 + param_2;
    FUN_0074b91d(local_4c);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1->field_0008 + 0x34))(param_1->field_0004 + -1,local_4c);
    uVar2 = (uint)(iVar1 != 0);
    FUN_0074b916((int)local_4c);
  }
  return uVar2;
}

