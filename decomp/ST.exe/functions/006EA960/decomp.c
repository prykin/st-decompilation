
void __thiscall FUN_006ea960(void *this,uint param_1,float param_2,float param_3,float param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    uVar3 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if ((uVar3 & 0x8000) != 0) {
      if (((float)puVar1[0x1d] == param_2) && ((float)puVar1[0x1e] == param_3)) {
        if ((float)puVar1[0x1f] == param_4) {
          return;
        }
        puVar1[0x1f] = (uint)param_4;
        *puVar1 = uVar3 & 0xff87ffff;
        if (puVar1[0x28] == 0) {
          return;
        }
        if (puVar1[2] != 0) {
          return;
        }
        if ((uVar3 & 0x10000) == 0) {
          return;
        }
        uVar3 = uVar3 & 0xff87ffff | 8;
      }
      else {
        puVar1[0x1d] = (uint)param_2;
        puVar1[0x1e] = (uint)param_3;
        puVar1[0x1f] = (uint)param_4;
        *puVar1 = uVar3 & 0xff87ffff | 0x800000;
        if (puVar1[0x28] == 0) {
          return;
        }
        if (puVar1[2] != 0) {
          return;
        }
        if ((uVar3 & 0x10000) == 0) {
          return;
        }
        uVar3 = uVar3 & 0xff87ffff | 0x800048;
      }
      *puVar1 = uVar3;
      if ((puVar1[1] & 0x40) == 0) {
        return;
      }
      puVar2 = (uint *)(*(int *)((int)this + 0x31c) + puVar1[7] * 0x114);
      if (*(int *)(*(int *)((int)this + 0x31c) + 8 + puVar1[7] * 0x114) != 0) {
        return;
      }
      uVar3 = *puVar2;
      if ((uVar3 & 0x10000) == 0) {
        return;
      }
      *puVar2 = uVar3 | 8;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

