
uint * __thiscall FUN_006e9490(void *this,uint *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;

  puVar4 = *(uint **)((int)this + 0x310);
  if ((puVar4 <= param_1) ||
     (puVar4 = (uint *)(*(int *)((int)this + 0x31c) + (int)param_1 * 0x114), (*puVar4 & 0x8000) == 0
     )) {
    if (param_1 != (uint *)0xffffffff) {
      puVar4 = (uint *)FUN_006e8c50();
    }
    return puVar4;
  }
  if ((int)puVar4[0x25] <= param_2) {
    puVar4 = (uint *)FUN_006e91a0();
    return puVar4;
  }
  if (param_3 != 0) {
    uVar3 = puVar4[0x29];
    puVar1 = (ushort *)(uVar3 + 2 + param_2 * 4);
    *puVar1 = *puVar1 & 0xfff7;
    return (uint *)(uVar3 + 2 + param_2 * 4);
  }
  uVar3 = puVar4[0x29];
  pbVar2 = (byte *)(uVar3 + 2 + param_2 * 4);
  *pbVar2 = *pbVar2 | 8;
  return (uint *)(uVar3 + 2 + param_2 * 4);
}

