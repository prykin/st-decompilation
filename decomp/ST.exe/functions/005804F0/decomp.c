
void __thiscall FUN_005804f0(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x269) = param_1;
  uVar1 = *(uint *)((int)this + 0x255);
  *(undefined4 *)((int)this + 0x25d) = 1;
  if ((0xdb < uVar1) && ((uVar1 < 0xdf || (uVar1 == 0xe0)))) {
    if (0x14 < (uint)PTR_00802a38->field_00E4) {
      thunk_FUN_00580ff0(param_2,param_3);
    }
    thunk_FUN_005803c0();
  }
  return;
}

