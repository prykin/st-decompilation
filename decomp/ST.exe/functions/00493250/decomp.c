
uint __fastcall FUN_00493250(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x45d);
  uVar2 = 0;
  if ((iVar1 == 0x14) && (*(int *)(param_1 + 0x5c0) == 3)) {
    uVar2 = 1;
  }
  if (*(int *)(param_1 + 0x7ca) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((iVar1 == 4) && (*(int *)(param_1 + 0x580) == 5)) {
    uVar2 = uVar2 | 4;
  }
  if (0 < *(int *)(param_1 + 0x73a)) {
    uVar2 = uVar2 | 8;
  }
  if ((iVar1 == 9) && (*(int *)(param_1 + 0x611) == 3)) {
    uVar2 = uVar2 | 0x10;
  }
  if (((iVar1 == 0xc) && ((*(int *)(param_1 + 0x4d5) == 5 || (*(int *)(param_1 + 0x4d5) == 0xc))))
     || ((iVar1 == 0xd && (*(int *)(param_1 + 0x54c) == 5)))) {
    uVar2 = uVar2 | 0x20;
  }
  if (0 < *(int *)(param_1 + 0x73a)) {
    uVar2 = uVar2 | 8;
  }
  iVar1 = *(int *)(param_1 + 0x6f7);
  if (iVar1 != 0x16) {
    if (iVar1 == 0x23) {
      if (*(int *)(param_1 + 0x72e) != 1) {
        return uVar2;
      }
      return uVar2 | 0x80;
    }
    if (iVar1 != 0x25) {
      return uVar2;
    }
  }
  if (*(int *)(param_1 + 0x732) == 1) {
    uVar2 = uVar2 | 0x80;
  }
  return uVar2;
}

