
uint __thiscall FUN_006ea190(void *this,uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114),
     (*(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    if (puVar1[0x25] <= param_2) {
      FUN_006e91a0();
      return 0;
    }
    puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    uVar3 = *(ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    uVar5 = (uVar3 & 0x40) >> 6;
    if (param_3 != 0) {
      *puVar2 = uVar3 | 0x40;
      *puVar1 = *puVar1 | 0x400;
      return uVar5;
    }
    *puVar2 = uVar3 & 0xffbf;
    uVar4 = puVar1[0x25];
    iVar6 = 0;
    if (0 < (int)uVar4) {
      pbVar7 = (byte *)(puVar1[0x29] + 2);
      do {
        if ((*pbVar7 & 0x40) != 0) break;
        iVar6 = iVar6 + 1;
        pbVar7 = pbVar7 + 4;
      } while (iVar6 < (int)uVar4);
    }
    if ((int)uVar4 <= iVar6) {
      *puVar1 = *puVar1 & 0xfffffbff;
      return uVar5;
    }
  }
  else {
    if (param_1 != 0xffffffff) {
      FUN_006e8c50();
    }
    uVar5 = 0;
  }
  return uVar5;
}

