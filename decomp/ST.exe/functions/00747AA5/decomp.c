
uint FUN_00747aa5(AnonShape_00747AA5_87CB4B56 *param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined4 local_4c [18];
  
  bVar1 = FUN_00747f3b((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = 0x80040203;
  }
  else {
    param_1->field_0004 = param_1->field_0004 + param_2;
    FUN_0074b91d(local_4c);
    iVar3 = (**(code **)(*param_1->field_0008 + 0x34))(param_1->field_0004 + -1,local_4c);
    uVar2 = (uint)(iVar3 != 0);
    FUN_0074b916((int)local_4c);
  }
  return uVar2;
}

