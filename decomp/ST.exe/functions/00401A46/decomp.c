
void __fastcall thunk_FUN_00618ad0(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x5e);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar3 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (((bVar3) && (iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c), iVar1 != 0))
           && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x7d) = 0;
          *(undefined4 *)(iVar1 + 0x8b) = 0;
          *(undefined4 *)(iVar1 + 0x79) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x5e);
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
  }
  return;
}

