
void __thiscall FUN_006e93c0(void *this,uint param_1,int param_2,uint param_3)

{
  uint *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(uint *)((int)this + 0x310) <= param_1) ||
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) == 0)) {
    if (param_1 != 0xffffffff) {
      FUN_006e8c50();
    }
    return;
  }
  if (param_2 < (int)puVar1[0x25]) {
    if ((int)param_3 < 0) {
      puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      *puVar2 = *puVar2 & 0xdfff;
      uVar4 = puVar1[0x25];
      iVar5 = 0;
      if (0 < (int)uVar4) {
        iVar6 = puVar1[0x29] + 2;
        do {
          if ((*(byte *)(iVar6 + 1) & 0x20) != 0) break;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar5 < (int)uVar4);
      }
      if (iVar5 < (int)uVar4) {
        return;
      }
      puVar1[0x23] = 0xffffffff;
      return;
    }
    if ((int)param_3 < (int)puVar1[0x25]) {
      pbVar3 = (byte *)(puVar1[0x29] + 3 + param_2 * 4);
      *pbVar3 = *pbVar3 | 0x20;
      puVar1[0x23] = param_3;
      return;
    }
  }
  FUN_006e91a0();
  return;
}

