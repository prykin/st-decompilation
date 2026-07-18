
void __thiscall FUN_006e6060(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 8);
  param_1[1] = 2;
  (**(code **)(**(int **)((int)this + 0xc) + 0x18))(param_1);
  return;
}

