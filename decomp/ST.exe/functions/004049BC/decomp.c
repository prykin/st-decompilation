
void __fastcall thunk_FUN_005f2330(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(byte **)(param_1 + 0x38) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x3c);
        if (uVar3 < *(uint *)(iVar2 + 0xc)) {
          iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (-1 < (int)*(uint *)(iVar2 + 0x18)) {
          FUN_006e8ba0(DAT_00807598,*(uint *)(iVar2 + 0x18));
          *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
    FUN_006ae110(*(byte **)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

