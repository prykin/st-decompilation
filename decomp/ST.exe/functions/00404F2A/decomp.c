
void __fastcall thunk_FUN_0065d590(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x20b);
  uVar2 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if (bVar3) {
        iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar1 = 0;
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
      iVar1 = *(int *)(param_1 + 0x20b);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    *(undefined4 *)(param_1 + 0x284) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  return;
}

