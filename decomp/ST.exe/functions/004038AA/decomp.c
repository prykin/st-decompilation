
undefined4 * __fastcall thunk_FUN_00693910(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iStack_8;
  
  puVar2 = (undefined4 *)((int)param_1 + 0x4a);
  puVar3 = param_1;
  for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  param_1[1] = 0x8f000205;
  *(undefined1 *)((int)param_1 + 0x2da) = 1;
  *(undefined1 *)((int)param_1 + 0x2db) = 1;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)((int)param_1 + 0x2dd) = 2;
  *(undefined4 *)((int)param_1 + 0x2e1) = 0xffffffff;
  iStack_8 = 8;
  do {
    puVar3 = &DAT_007d6268;
    puVar4 = (undefined4 *)((int)puVar2 + -0x39);
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = puVar2;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined4 *)((int)puVar2 + 0x51);
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  *(undefined4 *)((int)param_1 + 0x1999) = 0;
  return param_1;
}

