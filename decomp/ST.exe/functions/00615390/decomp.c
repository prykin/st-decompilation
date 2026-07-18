
void __fastcall FUN_00615390(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1f7);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0x214) = 3;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  iVar1 = (int)*(short *)(param_1 + 0x2cf) - (int)*(short *)(param_1 + 0x1ed);
  iVar2 = (int)*(short *)(param_1 + 0x2cd) - (int)*(short *)(param_1 + 0x1eb);
  iVar3 = (int)*(short *)(param_1 + 0x2cb) - (int)*(short *)(param_1 + 0x1e9);
  if (iVar3 * iVar3 + iVar2 * iVar2 + iVar1 * iVar1 < 0x13c06) {
    *(undefined1 *)(param_1 + 0x214) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x214) = 2;
  return;
}

