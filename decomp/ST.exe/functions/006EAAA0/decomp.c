
undefined4 __thiscall FUN_006eaaa0(void *this,uint param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;

  if (param_1 < *(uint *)((int)this + 0x310)) {
    uVar3 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if ((uVar3 & 0x8000) != 0) {
      uVar4 = puVar1[2] - 1;
      puVar1[2] = uVar4;
      if ((0 < (int)uVar4) && (param_2 == 0)) {
        return 0;
      }
      if ((uVar3 & 0x10000) != 0) {
        if (uVar4 == 0) {
          *puVar1 = uVar3 & 0xff87ffff | 0x4c;
        }
        if ((((puVar1[1] & 0x40) != 0) &&
            (puVar2 = (uint *)(*(int *)((int)this + 0x31c) + puVar1[7] * 0x114), puVar2[2] == 0)) &&
           ((*puVar2 & 0x10000) != 0)) {
          *puVar2 = *puVar2 | 4;
        }
      }
      puVar1[2] = 0;
      return 1;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

