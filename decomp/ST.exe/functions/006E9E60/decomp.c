
uint * __thiscall FUN_006e9e60(void *this,uint *param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)((int)this + 0x310);
  if ((param_1 < puVar3) &&
     (puVar3 = (uint *)(*(int *)((int)this + 0x31c) + (int)param_1 * 0x114), (*puVar3 & 0x8000) != 0
     )) {
    if (puVar3[0x28] != 0) {
      if (puVar3[0x25] <= param_2) {
        puVar3 = (uint *)FUN_006e91a0();
        return puVar3;
      }
      if (*(int *)(puVar3[0x28] + 4 + param_2 * 8) != 0) {
        uVar2 = puVar3[0x29];
        puVar1 = (ushort *)(uVar2 + 2 + param_2 * 4);
        *puVar1 = *puVar1 & 0x7fff;
        return (uint *)(uVar2 + 2 + param_2 * 4);
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    puVar3 = (uint *)FUN_006e8c50();
  }
  return puVar3;
}

