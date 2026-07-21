
void __thiscall FUN_006ea790(void *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;

  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if (param_2 != 0) {
      puVar1[0x2c] = param_2 + param_3 * -0x100;
      return;
    }
    puVar1[0x2c] = 0;
    return;
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

