
void __thiscall FUN_006ea680(void *this,uint param_1,uint param_2)

{
  uint *puVar1;

  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    puVar1[0x2b] = param_2;
    return;
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

