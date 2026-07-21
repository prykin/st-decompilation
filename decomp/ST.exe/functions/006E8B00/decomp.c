
void __thiscall FUN_006e8b00(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;

  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar2 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if (((uVar2 & 0x8000) != 0) && ((puVar1[1] & 0x1000) != 0)) {
      *puVar1 = uVar2 | 0xc;
      puVar1[0x26] = param_2;
      uVar2 = 1000000000;
      iVar3 = 10;
      do {
        if (param_2 / uVar2 != 0) break;
        uVar2 = uVar2 / 10;
        iVar3 = iVar3 + -1;
      } while (9 < uVar2);
      puVar1[0xd] = iVar3 * 6;
      puVar1[0xe] = 7;
      puVar1[0x22] = 3;
      puVar1[0x21] = (iVar3 * 6) / 2;
    }
  }
  return;
}

