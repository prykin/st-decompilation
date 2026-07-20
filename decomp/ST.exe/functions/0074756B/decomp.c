
undefined4 * __thiscall FUN_0074756b(void *this,AnonShape_0074756B_58F08DE7 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(AnonShape_0074756B_58F08DE7 **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  FUN_0074de63((undefined4 *)((int)this + 0x18));
  *(undefined ***)this = &PTR_FUN_007a1108;
  piVar1 = (int *)(*(int *)((int)this + 0xc) + 0xc);
  (**(code **)(*piVar1 + 4))(piVar1);
  if (param_1 == (AnonShape_0074756B_58F08DE7 *)0x0) {
    uVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x14))();
    *(undefined4 *)((int)this + 0x10) = uVar2;
    uVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x18))();
    *(undefined4 *)((int)this + 8) = uVar2;
  }
  else {
    *(undefined4 *)((int)this + 4) = param_1->field_0004;
    *(undefined4 *)((int)this + 8) = param_1->field_0008;
    *(undefined4 *)((int)this + 0x10) = param_1->field_0010;
    FUN_0074dff5((undefined4 *)((int)this + 0x18),&param_1[1].field_0004);
  }
  return this;
}

