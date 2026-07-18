
void __thiscall FUN_006eab60(void *this,uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar2 = *puVar1;
    if ((uVar2 & 0x8000) != 0) {
      *puVar1 = uVar2 & 0xffffff5d;
      puVar1[2] = puVar1[2] + 1;
      if ((uVar2 & 0x11) == 0) {
        return;
      }
      *puVar1 = uVar2 & 0xffffff5d | 0x4c;
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

