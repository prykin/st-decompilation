
undefined4 * FUN_005d4b40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;
  
  puVar1 = FUN_006b04d0(0x2245);
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
    FUN_00715820((undefined4 *)((int)puVar1 + 0x1c6b));
    FUN_00715820(puVar1 + 0x73f);
    FUN_00715820((undefined4 *)((int)puVar1 + 0x1d8d));
    *(undefined4 *)((int)puVar1 + 0x1c5f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1c63) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e27) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e2b) = 0;
    *(undefined4 *)((int)puVar1 + 0x21e1) = 0;
    *(undefined2 *)((int)puVar1 + 0x21e5) = 0;
    *(undefined1 *)((int)puVar1 + 0x21e7) = 0;
    puVar3 = (undefined4 *)((int)puVar1 + 0x2161);
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)puVar1 + 0x1e2f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1f43) = 0;
    *(undefined4 *)((int)puVar1 + 7999) = 0;
    *(undefined4 *)((int)puVar1 + 0x1f4f) = 0;
    *(undefined4 *)((int)puVar1 + 0x1f4b) = 0;
    puVar1[0x7e1] = 0;
    puVar3 = puVar1 + 0x7e3;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)puVar1 + 0x211d) = 0;
    puVar1[0x7e2] = 0;
    puVar3 = puVar1 + 0x833;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    puVar3 = puVar1 + 0x83d;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)puVar1 + 0x1e1e) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e22) = 0xffffffff;
    puVar3 = (undefined4 *)((int)puVar1 + 0x2125);
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)puVar1 + 0x215d) = 0;
    puVar1[0x87e] = 0;
    puVar1[0x87d] = 0;
    puVar1[0x87c] = 0;
    puVar1[0x87b] = 0;
    puVar1[0x87a] = 0;
    puVar1[0x7e0] = 0xffffffff;
    *(undefined4 *)((int)puVar1 + 0x1c67) = 0;
    *(undefined4 *)((int)puVar1 + 0x1f47) = 0;
    puVar1[0x7df] = 0;
    puVar3 = puVar1 + 0x7d8;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar1[0x7d6] = 0;
    *(undefined1 *)((int)puVar1 + 0x1f57) = 1;
    *(undefined1 *)(puVar1 + 0x7d7) = 4;
    *(undefined1 *)((int)puVar1 + 0x1f5d) = 1;
    *(undefined1 *)((int)puVar1 + 0x1f5e) = 1;
    *(undefined1 *)((int)puVar1 + 0x1f5f) = 1;
    *puVar1 = &PTR_GetMessage_0079c124;
    puVar1[0x87f] = 0;
    puVar1[0x880] = 0xffffffff;
    puVar1[0x881] = 0;
    *(undefined4 *)((int)puVar1 + 0x2211) = 0;
    *(undefined4 *)((int)puVar1 + 0x2221) = 0;
    *(undefined4 *)((int)puVar1 + 0x220d) = 0;
    *(undefined4 *)((int)puVar1 + 0x2209) = 0;
    *(undefined1 *)((int)puVar1 + 0x2225) = 0;
    *(undefined4 *)((int)puVar1 + 0x221d) = 0;
    *(undefined4 *)((int)puVar1 + 0x2219) = 0;
    *(undefined4 *)((int)puVar1 + 0x2215) = 0;
    *(undefined4 *)((int)puVar1 + 0x2226) = 0;
    *(undefined4 *)((int)puVar1 + 0x222a) = 0;
    *(undefined1 *)(puVar1 + 0x882) = 1;
    *(undefined1 *)((int)puVar1 + 0x222e) = 0;
    *(undefined4 *)((int)puVar1 + 0x222f) = 0;
    *(undefined4 *)((int)puVar1 + 0x2237) = 0;
    *(undefined1 *)((int)puVar1 + 0x2243) = 1;
    *(undefined1 *)(puVar1 + 0x891) = 1;
    *(undefined4 *)((int)puVar1 + 0x223b) = 0;
    *(undefined4 *)((int)puVar1 + 0x223f) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

