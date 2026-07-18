
void __fastcall thunk_FUN_0063e660(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x336) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x336) + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x336);
        if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
            (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
           (-1 < (int)*(uint *)(iVar2 + 0x38))) {
          FUN_006e8ba0(*(void **)(param_1 + 0x211),*(uint *)(iVar2 + 0x38));
          *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
    FUN_006ae110(*(byte **)(param_1 + 0x336));
    *(undefined4 *)(param_1 + 0x336) = 0;
  }
  return;
}

