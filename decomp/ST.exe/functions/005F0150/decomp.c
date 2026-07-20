
void __thiscall FUN_005f0150(void *this,AnonShape_005F0150_6EC63067 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar3;
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  param_1->field_0x4 = uVar2;
  param_1->field_0005 = 4;
  param_1->field_0006 = 1;
  iVar1 = *(int *)((int)this + 0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    param_1->field_0007 = 1;
  }
  iVar1 = *(int *)((int)this + 0x2b1);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    uVar2 = (**(code **)(*(int *)this + 0x134))();
    param_1->field_0x1c = uVar2;
    uVar3 = (**(code **)(*(int *)this + 0x13c))();
    param_1->field_0021 = uVar3;
    return;
  }
  uVar2 = (**(code **)(*(int *)this + 0x134))();
  param_1->field_0x1c = uVar2;
  uVar3 = (**(code **)(*(int *)this + 0x138))();
  param_1->field_001D = uVar3;
  uVar3 = (**(code **)(*(int *)this + 0x13c))();
  param_1->field_0021 = uVar3;
  return;
}

