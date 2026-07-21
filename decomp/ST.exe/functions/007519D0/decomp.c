
int __cdecl FUN_007519d0(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  byte *local_8;

  local_8 = param_2;
  uVar4 = (uint)*param_1;
  puVar7 = (ushort *)0x10;
  puVar3 = param_1 + 1;
  while( true ) {
    while( true ) {
      uVar6 = uVar4 & 1;
      uVar4 = (int)uVar4 >> 1;
      puVar7 = (ushort *)((int)puVar7 + -1);
      if (puVar7 == (ushort *)0x0) {
        puVar7 = (ushort *)0x10;
        uVar4 = (uint)*puVar3;
        puVar3 = puVar3 + 1;
      }
      if (uVar6 == 0) break;
      *local_8 = (byte)*puVar3;
      local_8 = local_8 + 1;
      puVar3 = (ushort *)((int)puVar3 + 1);
    }
    uVar6 = uVar4 & 1;
    uVar4 = (int)uVar4 >> 1;
    puVar7 = (ushort *)((int)puVar7 + -1);
    if (puVar7 == (ushort *)0x0) {
      puVar7 = (ushort *)0x10;
      uVar4 = (uint)*puVar3;
      puVar3 = puVar3 + 1;
    }
    if (uVar6 == 0) break;
    uVar1 = *puVar3;
    bVar5 = ((byte)(uVar1 >> 8) & 7) + 2;
    uVar6 = (uint)bVar5;
    uVar9 = (int)(uVar1 & 0xfffff807 | 0xffff0007) >> 3 | uVar1 & 0xff;
    puVar2 = puVar3 + 1;
    if (bVar5 != 2) goto joined_r0x00751ad0;
    uVar6 = (uint)(byte)puVar3[1];
    puVar3 = (ushort *)((int)puVar3 + 3);
    if (uVar6 == 0) {
      return (int)local_8 - (int)param_2;
    }
    if (uVar6 != 1) {
      uVar6 = uVar6 + 1;
      puVar2 = puVar3;
joined_r0x00751ad0:
      for (; puVar3 = puVar2, uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_8 = local_8[uVar9];
        local_8 = local_8 + 1;
        puVar2 = puVar3;
      }
    }
  }
  uVar9 = uVar4 & 1;
  uVar6 = (int)uVar4 >> 1;
  iVar8 = (int)puVar7 + -1;
  if (iVar8 == 0) {
    iVar8 = 0x10;
    uVar6 = (uint)*puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar4 = (int)uVar6 >> 1;
  param_1 = (ushort *)(iVar8 + -1);
  uVar6 = uVar9 * 2 + 2 + (uVar6 & 1);
  if (param_1 == (ushort *)0x0) {
    param_1 = (ushort *)0x10;
    uVar4 = (uint)*puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar9 = (byte)*puVar3 - 0x100;
  puVar7 = param_1;
  puVar2 = (ushort *)((int)puVar3 + 1);
  goto joined_r0x00751ad0;
}

