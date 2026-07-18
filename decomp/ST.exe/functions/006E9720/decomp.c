
void __thiscall FUN_006e9720(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if ((*puVar1 & 0x8000) != 0) {
      *puVar1 = *puVar1 | 0x40;
      puVar1[0x41] = param_2;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

