
void __thiscall thunk_FUN_00423320(void *this,undefined4 param_1)

{
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  
  if (*(undefined4 **)((int)this + 0x1c) != (undefined4 *)0x0) {
    uStack_14 = param_1;
    (**(code **)**(undefined4 **)((int)this + 0x1c))(auStack_24);
  }
  return;
}

