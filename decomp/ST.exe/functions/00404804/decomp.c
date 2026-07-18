
void __fastcall thunk_FUN_005f53a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x169) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x169) + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x169);
        if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
            (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
           (-1 < (int)*(uint *)(iVar2 + 0x1f))) {
          FUN_006e8ba0(DAT_00807598,*(uint *)(iVar2 + 0x1f));
          *(undefined4 *)(iVar2 + 0x1f) = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
    FUN_006ae110(*(byte **)(param_1 + 0x169));
    *(undefined4 *)(param_1 + 0x169) = 0;
  }
  return;
}

