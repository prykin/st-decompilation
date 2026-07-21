
byte __thiscall FUN_006ea5e0(void *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  byte bVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(uint *)((int)this + 0x310) <= param_1) ||
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) == 0)) {
    if (param_1 != 0xffffffff) {
      FUN_006e8c50();
    }
    return 0;
  }
  if ((int)puVar1[0x25] <= param_2) {
    FUN_006e91a0();
    return 0;
  }
  puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
  uVar3 = *puVar2;
  bVar4 = (byte)~(byte)uVar3 >> 1 & 1;
  if (param_3 != 0) {
    *puVar2 = uVar3 & 0xfffd;
    return bVar4;
  }
  *puVar2 = uVar3 | 2;
  return bVar4;
}

