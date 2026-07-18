
undefined4 * FUN_005bd2e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;
  
  puVar1 = FUN_006b04d0(0x1c9e);
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
    *puVar1 = &PTR_thunk_FUN_005b6430_0079c008;
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
    FUN_00715820((undefined4 *)((int)puVar1 + 0x1a77));
    FUN_00715820(puVar1 + 0x6c2);
    FUN_00715820((undefined4 *)((int)puVar1 + 0x1b99));
    *puVar1 = &PTR_LAB_0079c0c4;
    *(undefined4 *)((int)puVar1 + 0x1a65) = 1;
    *(undefined4 *)((int)puVar1 + 0x1a73) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a61) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a71) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a69) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a6d) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a72) = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x1c2a);
    for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)puVar1 + 0x1c8a) = 0xffffffff;
    *(undefined4 *)((int)puVar1 + 0x1c82) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c86) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c8e) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c92) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c9a) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c96) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

