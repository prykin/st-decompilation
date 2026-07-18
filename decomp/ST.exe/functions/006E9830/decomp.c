
void __thiscall FUN_006e9830(void *this,uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar2 = *puVar1;
    if ((uVar2 & 0x8000) != 0) {
      puVar1[0x21] = param_2;
      puVar1[0x22] = param_3;
      if (puVar1[2] != 0) {
        return;
      }
      if ((uVar2 & 0x10000) == 0) {
        return;
      }
      *puVar1 = uVar2 & 0xff87ffff | 0x4c;
      if ((puVar1[1] & 0x40) == 0) {
        return;
      }
      puVar1 = (uint *)(*(int *)((int)this + 0x31c) + puVar1[7] * 0x114);
      if (puVar1[2] != 0) {
        return;
      }
      if ((*puVar1 & 0x10000) == 0) {
        return;
      }
      *puVar1 = *puVar1 | 4;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

