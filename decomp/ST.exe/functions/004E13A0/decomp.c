
undefined4 __fastcall FUN_004e13a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    uVar2 = thunk_FUN_004406c0((char)*(int *)(param_1 + 0x23d));
    iVar1 = *(int *)(param_1 + 0x235);
    uVar3 = thunk_FUN_004406c0(*(char *)(param_1 + 0x24));
    if ((&DAT_007e1984)[(uVar3 & 0xff) + (iVar1 * 3 + (uVar2 & 0xff)) * 3] == '\0') {
      return 0;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x4f:
  case 0x52:
  case 0x5e:
  case 0x5f:
  case 0x60:
    uVar4 = 1;
  }
  return uVar4;
}

