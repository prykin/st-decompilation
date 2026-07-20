
undefined4 * __thiscall FUN_00747874(void *this,AnonShape_00747874_535F3AAD *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(AnonShape_00747874_535F3AAD **)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)this = &PTR_FUN_007a1128;
  (**(code **)(param_1->field_000C + 4))(&param_1->field_000C);
  if (param_1 == (AnonShape_00747874_535F3AAD *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x10))();
  }
  else {
    *(undefined4 *)((int)this + 4) = param_1->field_0004;
    uVar1 = param_1->field_000C;
  }
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return this;
}

