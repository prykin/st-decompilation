
void __thiscall FUN_00603470(void *this,AnonShape_00603470_D413D02D *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar2;
  iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  param_1->field_0x4 = (char)iVar3;
  param_1->field_0005 = 4;
  uVar1 = *(undefined1 *)((int)this + 0x21d);
  param_1->field_0006 = 0;
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (*(int *)((int)this + 0x36e) != 0) {
    param_1->field_0007 = 1;
  }
  return;
}

