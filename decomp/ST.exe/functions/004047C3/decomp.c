
void __cdecl thunk_FUN_00571a30(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0x10;
  if (param_3 != '\0') {
    puVar2 = param_2 + 4;
    puVar3 = (undefined4 *)((int)param_1 + 0x299);
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)param_1 + 0x2e6) = *(undefined4 *)((int)param_2 + 0x5d);
    *(undefined4 *)((int)param_1 + 0x2ea) = *(undefined4 *)((int)param_2 + 0x61);
    *(undefined4 *)((int)param_1 + 0x2ee) = *(undefined4 *)((int)param_2 + 0x65);
    puVar2 = param_2 + 0x1d;
    puVar3 = (undefined4 *)((int)param_1 + 0x11aa);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined1 *)((int)param_1 + 0x2d9) = *(undefined1 *)(param_2 + 0x14);
    *(undefined1 *)((int)param_1 + 0x2da) = *(undefined1 *)((int)param_2 + 0x51);
    *(undefined1 *)((int)param_1 + 0x2db) = *(undefined1 *)((int)param_2 + 0x52);
    *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((int)param_2 + 0x53);
    *(undefined1 *)((int)param_1 + 0x2dd) = *(undefined1 *)(param_2 + 0x15);
    *(undefined1 *)((int)param_1 + 0x2de) = *(undefined1 *)((int)param_2 + 0x55);
    *(undefined1 *)((int)param_1 + 0x2df) = *(undefined1 *)((int)param_2 + 0x56);
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)((int)param_2 + 0x57);
    *(undefined4 *)((int)param_1 + 0x2e1) = param_2[0x16];
    *(undefined1 *)((int)param_1 + 0x2e5) = *(undefined1 *)(param_2 + 0x17);
    *(undefined1 *)((int)param_1 + 0x2f3) = *(undefined1 *)((int)param_2 + 0x6a);
    *(undefined1 *)(param_1 + 0xbd) = *(undefined1 *)((int)param_2 + 0x6b);
    *(undefined4 *)((int)param_1 + 0x2f5) = param_2[0x1b];
    *(undefined1 *)((int)param_1 + 0x2f2) = *(undefined1 *)((int)param_2 + 0x69);
    *(undefined4 *)((int)param_1 + 0x11a6) = param_2[0x1c];
    return;
  }
  puVar2 = (undefined4 *)((int)param_1 + 0x299);
  puVar3 = param_2 + 4;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)param_2 + 0x5d) = *(undefined4 *)((int)param_1 + 0x2e6);
  *(undefined4 *)((int)param_2 + 0x61) = *(undefined4 *)((int)param_1 + 0x2ea);
  *(undefined4 *)((int)param_2 + 0x65) = *(undefined4 *)((int)param_1 + 0x2ee);
  puVar2 = (undefined4 *)((int)param_1 + 0x11aa);
  puVar3 = param_2 + 0x1d;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(param_1 + 3);
  *(undefined2 *)((int)param_2 + 0xe) = *(undefined2 *)((int)param_1 + 0xe);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)((int)param_1 + 0x2d9);
  *(undefined1 *)((int)param_2 + 0x51) = *(undefined1 *)((int)param_1 + 0x2da);
  *(undefined1 *)((int)param_2 + 0x52) = *(undefined1 *)((int)param_1 + 0x2db);
  *(undefined1 *)((int)param_2 + 0x53) = *(undefined1 *)(param_1 + 0xb7);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((int)param_1 + 0x2dd);
  *(undefined1 *)((int)param_2 + 0x55) = *(undefined1 *)((int)param_1 + 0x2de);
  *(undefined1 *)((int)param_2 + 0x56) = *(undefined1 *)((int)param_1 + 0x2df);
  *(undefined1 *)((int)param_2 + 0x57) = *(undefined1 *)(param_1 + 0xb8);
  param_2[0x16] = *(undefined4 *)((int)param_1 + 0x2e1);
  *(undefined1 *)(param_2 + 0x17) = *(undefined1 *)((int)param_1 + 0x2e5);
  *(undefined1 *)((int)param_2 + 0x6a) = *(undefined1 *)((int)param_1 + 0x2f3);
  *(undefined1 *)((int)param_2 + 0x6b) = *(undefined1 *)(param_1 + 0xbd);
  param_2[0x1b] = *(undefined4 *)((int)param_1 + 0x2f5);
  *(undefined1 *)((int)param_2 + 0x69) = *(undefined1 *)((int)param_1 + 0x2f2);
  param_2[0x1c] = *(undefined4 *)((int)param_1 + 0x11a6);
  return;
}

