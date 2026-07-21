
undefined4 __fastcall FUN_004e1490(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    uVar2 = GetPlayerRaceId((char)*(int *)(param_1 + 0x23d));
    iVar1 = *(int *)(param_1 + 0x235);
    uVar3 = GetPlayerRaceId(*(char *)(param_1 + 0x24));
    if ((&DAT_007e1984)[(uVar3 & 0xff) + (iVar1 * 3 + (uVar2 & 0xff)) * 3] == '\0') {
      return 0;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x38:
  case 0x39:
  case 0x4f:
  case 0x5e:
    if (((*(int *)(param_1 + 0x245) == 0) && (*(int *)(param_1 + 0x4d8) == -1)) &&
       ((*(int *)(param_1 + 0x4d4) != 0 && (*(int *)(param_1 + 0x4d0) == 0)))) {
      uVar4 = 1;
    }
    break;
  case 0x3b:
  case 0x52:
  case 0x5f:
  case 0x60:
    if (((*(int *)(param_1 + 0x245) == 0) && (*(int *)(param_1 + 0x4d8) == -1)) &&
       (*(int *)(param_1 + 0x4d0) == 0)) {
      return 1;
    }
  }
  return uVar4;
}

