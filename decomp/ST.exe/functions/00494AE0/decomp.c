
void __fastcall FUN_00494ae0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6f7);
  if (((iVar1 != 5) && (iVar1 != 0x11)) && (iVar1 != 0x21)) {
    return;
  }
  iVar1 = thunk_FUN_004e60d0(*(int *)(param_1 + 0x24),0x3c);
  if (((iVar1 < 1) && (iVar1 = thunk_FUN_004e60d0(*(int *)(param_1 + 0x24),0x91), iVar1 < 1)) &&
     (iVar1 = thunk_FUN_004e60d0(*(int *)(param_1 + 0x24),0x4c), iVar1 < 1)) {
    if (((*(int *)(param_1 + 0x792) == 1) &&
        (((*(undefined4 *)(param_1 + 0x792) = 0, *(int *)(param_1 + 0x45d) != 0x14 ||
          (*(int *)(param_1 + 0x5c0) != 3)) && ((*(byte *)(param_1 + 0x1d1) & 1) == 0)))) &&
       (*(undefined4 *)(param_1 + 0x78a) = 0, DAT_00802a88 != (void *)0x0)) {
      thunk_FUN_0055a4c0(DAT_00802a88,(int)*(short *)(param_1 + 0x5b),
                         (int)*(short *)(param_1 + 0x5d),(char)*(undefined2 *)(param_1 + 0x5f),
                         *(uint *)(param_1 + 0x24),*(undefined **)(param_1 + 0x101),
                         *(undefined4 *)(param_1 + 0x18));
    }
  }
  else if ((((*(int *)(param_1 + 0x792) == 0) &&
            ((*(undefined4 *)(param_1 + 0x792) = 1, *(int *)(param_1 + 0x45d) != 0x14 ||
             (*(int *)(param_1 + 0x5c0) != 3)))) && ((*(byte *)(param_1 + 0x1d1) & 1) == 0)) &&
          (*(undefined4 *)(param_1 + 0x78a) = 1, DAT_00802a88 != (void *)0x0)) {
    thunk_FUN_0055a270(DAT_00802a88,(int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                       (char)*(undefined2 *)(param_1 + 0x5f),*(uint *)(param_1 + 0x24),
                       *(int *)(param_1 + 0x101),*(undefined4 *)(param_1 + 0x18),0xffffffff);
  }
  iVar1 = thunk_FUN_004e60d0(*(int *)(param_1 + 0x24),0x9a);
  if (((0 < iVar1) || (iVar1 = thunk_FUN_004e60d0(*(int *)(param_1 + 0x24),0x41), 0 < iVar1)) ||
     (iVar1 = thunk_FUN_004e60d0(*(int *)(param_1 + 0x24),0x4b), 0 < iVar1)) {
    if ((*(int *)(param_1 + 0x796) == 0) &&
       ((((*(undefined4 *)(param_1 + 0x796) = 1, *(int *)(param_1 + 0x45d) != 0x14 ||
          (*(int *)(param_1 + 0x5c0) != 3)) && ((*(byte *)(param_1 + 0x1d1) & 1) == 0)) &&
        (*(undefined4 *)(param_1 + 0x78e) = 1, DAT_00802a88 != (void *)0x0)))) {
      thunk_FUN_0055a620(DAT_00802a88,(int)*(short *)(param_1 + 0x5b),
                         (int)*(short *)(param_1 + 0x5d),(char)*(undefined2 *)(param_1 + 0x5f),
                         *(uint *)(param_1 + 0x24),*(int *)(param_1 + 0x101),
                         *(undefined4 *)(param_1 + 0x18),0xffffffff);
    }
    return;
  }
  if (*(int *)(param_1 + 0x796) != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x796) = 0;
  if ((*(int *)(param_1 + 0x45d) == 0x14) && (*(int *)(param_1 + 0x5c0) == 3)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1d1) & 1) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x78e) = 0;
  if (DAT_00802a88 == (void *)0x0) {
    return;
  }
  thunk_FUN_0055a870(DAT_00802a88,(int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                     (char)*(undefined2 *)(param_1 + 0x5f),*(uint *)(param_1 + 0x24),
                     *(undefined **)(param_1 + 0x101),*(undefined4 *)(param_1 + 0x18));
  return;
}

