
void __thiscall FUN_006e9350(void *this,uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;

  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar2 = *puVar1;
    if ((uVar2 & 0x8000) != 0) {
      puVar1[0x30] = param_2;
      puVar1[0x2f] = param_3 + 7 >> 3;
      if (puVar1[2] != 0) {
        return;
      }
      if ((uVar2 & 0x10001) == 0) {
        return;
      }
      *puVar1 = uVar2 | 4;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

