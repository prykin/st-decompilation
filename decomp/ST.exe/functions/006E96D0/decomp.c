
void __thiscall FUN_006e96d0(void *this,uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar2 = *puVar1;
    if ((uVar2 & 0x8000) != 0) {
      *puVar1 = uVar2 | 0x40;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

