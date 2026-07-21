
uint __thiscall FUN_006eabf0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;

  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar2 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar1 = *puVar2;
    if ((uVar1 & 0x8000) != 0) {
      uVar3 = uVar1 >> 0x10 & 1;
      if (param_2 == 0) {
        *puVar2 = uVar1 & 0xfffeff5d;
        if ((uVar1 & 0x11) == 0) {
          return uVar3;
        }
        *puVar2 = uVar1 & 0xfffeff5d | 0x4c;
        if ((puVar2[1] & 0x40) == 0) {
          return uVar3;
        }
        puVar2 = (uint *)(*(int *)((int)this + 0x31c) + puVar2[7] * 0x114);
      }
      else {
        if (uVar3 != 0) {
          return uVar3;
        }
        *puVar2 = uVar1 & 0xff87ffff | 0x1004c;
        if ((puVar2[1] & 0x40) == 0) {
          return 0;
        }
        puVar2 = (uint *)(*(int *)((int)this + 0x31c) + puVar2[7] * 0x114);
      }
      if (puVar2[2] != 0) {
        return uVar3;
      }
      if ((*puVar2 & 0x10000) == 0) {
        return uVar3;
      }
      *puVar2 = *puVar2 | 4;
      return uVar3;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

