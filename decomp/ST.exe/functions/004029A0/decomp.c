
undefined4 __fastcall thunk_FUN_004c2e60(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x245)) {
  case 0:
    if (*(int *)(param_1 + 0x24d) != -1) {
      if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
        uVar2 = thunk_FUN_004406c0((char)*(int *)(param_1 + 0x23d));
        iVar1 = *(int *)(param_1 + 0x235);
        uVar3 = thunk_FUN_004406c0(*(char *)(param_1 + 0x24));
        if ((&DAT_007e1984)[(uVar3 & 0xff) + (iVar1 * 3 + (uVar2 & 0xff)) * 3] == '\0') {
          return 0;
        }
      }
      if (*(int *)(&DAT_00794e9c + *(int *)(param_1 + 0x235) * 4) != 0) {
        thunk_FUN_004c2c10(param_1);
        return 0;
      }
    }
    break;
  case 1:
  case 2:
  case 6:
    if (*(int *)(&DAT_00794e9c + *(int *)(param_1 + 0x235) * 4) != 0) {
      thunk_FUN_004c2d40(param_1);
    }
  }
  return 0;
}

