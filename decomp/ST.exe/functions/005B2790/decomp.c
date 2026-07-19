
undefined4 * FUN_005b2790(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;
  
  puVar1 = FUN_006b04d0(0x20c4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006e5fb0(puVar1);
    *puVar1 = &PTR_FUN_0079c018;
    puVar1[6] = 0;
    *(undefined4 *)((int)puVar1 + 0x5d) = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x1d);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined4 *)((int)puVar1 + 0x3d);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_0080879c = 0;
    puVar3 = puVar1 + 0x5d;
    local_8 = 0xd;
    do {
      FUN_00715820((undefined4 *)((int)puVar3 + -0x91));
      FUN_00715820(puVar3);
      FUN_00715820((undefined4 *)((int)puVar3 + 0x91));
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    *puVar1 = &MMObjTyVTable;
    *(undefined1 *)((int)puVar1 + 0x65) = 2;
    *(undefined1 *)((int)puVar1 + 0x9a) = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x66);
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_8 = 0xd;
    puVar3 = puVar1 + 0x2f;
    do {
      puVar4 = puVar3;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      local_8 = local_8 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (local_8 != 0);
    FUN_00715820(puVar1 + 0x69c);
    FUN_00715820((undefined4 *)((int)puVar1 + 0x1b01));
    FUN_00715820((undefined4 *)((int)puVar1 + 0x1b92));
    *puVar1 = &PTR_LAB_0079c088;
    puVar1[0x698] = 1;
    puVar1[0x69b] = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x1c23);
    for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)puVar1 + 0x1c87) = 0xffffffff;
    *(undefined4 *)((int)puVar1 + 0x1c7b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c7f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c97) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c9b) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c9f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c8f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c93) = 0;
    puVar1[0x830] = 0;
    puVar1[0x82f] = 0;
    puVar1[0x82e] = 0;
    puVar1[0x699] = 0;
    puVar1[0x69a] = 0;
    *(undefined4 *)((int)puVar1 + 0x1c83) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c8b) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

